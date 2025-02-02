// Windows Audio Capture (WAC) by KwstasG (Kostas Giannakakis)
#include "AudioCaptureWorker.h"
#include "WindowsAudioCapture.h"
#include "HAL/PlatformProcess.h"
#include "Misc/OutputDeviceDebug.h"
#include <memory>
#include <mutex>

std::unique_ptr<FAudioCaptureWorker> FAudioCaptureWorker::Runnable = NULL;
std::atomic<int32> FAudioCaptureWorker::ThreadCounter(0);
std::mutex FAudioCaptureWorker::workerMutex;

FAudioCaptureWorker::FAudioCaptureWorker()
    : Thread(NULL)
    , bIsFinished(false)
    , m_listener(16, WAVE_FORMAT_PCM, 4, 0)
    , m_sink()
{
    // Higher overall ThreadCounter to avoid duplicated names
    FAudioCaptureWorker::ThreadCounter++;

    Thread = FRunnableThread::Create(this, *FString::Printf(TEXT("FAudioCaptureWorker%d"), FAudioCaptureWorker::ThreadCounter.load()), 0, EThreadPriority::TPri_Normal);
    if (Thread)
    {
        UE_LOG(LogTemp, Log, TEXT("FAudioCaptureWorker created with thread ID: %d"), Thread->GetThreadID());
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("Failed to create FAudioCaptureWorker thread"));
    }
}

FAudioCaptureWorker::~FAudioCaptureWorker()
{
    // Ensure to mark Thread as finished
    bIsFinished = true;

    if (Thread)
    {
        UE_LOG(LogTemp, Log, TEXT("FAudioCaptureWorker thread ID: %d is being destroyed"), Thread->GetThreadID());
        delete Thread;
        Thread = NULL;
    }
    UE_LOG(LogTemp, Log, TEXT("FAudioCaptureWorker destroyed."));
}

FAudioCaptureWorker* FAudioCaptureWorker::InitializeWorker()
{
    std::lock_guard<std::mutex> lock(workerMutex);
    if (!Runnable)
    {
        Runnable = std::make_unique<FAudioCaptureWorker>();
    }
    UE_LOG(LogTemp, Log, TEXT("FAudioCaptureWorker initialized."));
    return Runnable.get();
}

bool FAudioCaptureWorker::Init()
{
    // Mark Worker as not finished
    bIsFinished = false;
    UE_LOG(LogTemp, Log, TEXT("FAudioCaptureWorker initialized successfully."));
    return true;
}

uint32 FAudioCaptureWorker::Run()
{
    if (Thread)
    {
        UE_LOG(LogTemp, Log, TEXT("FAudioCaptureWorker thread ID: %d started running."), Thread->GetThreadID());
    }
    m_listener.RecordAudioStream(&m_sink, bIsFinished);
    if (Thread)
    {
        UE_LOG(LogTemp, Log, TEXT("FAudioCaptureWorker thread ID: %d stopped running."), Thread->GetThreadID());
    }
    return 0;
}

void FAudioCaptureWorker::Stop()
{
    StopTaskCounter.Increment();
    if (Thread)
    {
        UE_LOG(LogTemp, Log, TEXT("FAudioCaptureWorker thread ID: %d stop requested."), Thread->GetThreadID());
    }
}

void FAudioCaptureWorker::ShutdownWorker()
{
    std::lock_guard<std::mutex> lock(workerMutex);
    if (Runnable)
    {
        Runnable->EnsureCompletion();
        Runnable.reset();
    }
    UE_LOG(LogTemp, Log, TEXT("FAudioCaptureWorker shut down."));
}

void FAudioCaptureWorker::Exit()
{
    // Mark Thread as finished
    bIsFinished = true;
    if (Thread)
    {
        UE_LOG(LogTemp, Log, TEXT("FAudioCaptureWorker thread ID: %d exited."), Thread->GetThreadID());
    }
}

void FAudioCaptureWorker::EnsureCompletion()
{
    Stop();
    // Mark Thread as finished
    bIsFinished = true;

    if (Thread)
    {
        Thread->WaitForCompletion();
    }
    if (Thread)
    {
        UE_LOG(LogTemp, Log, TEXT("FAudioCaptureWorker thread ID: %d ensured completion."), Thread->GetThreadID());
    }
}

void FAudioCaptureWorker::GetFrequencyArray(float FreqLogBase, float FreqMultiplier, float FreqPower, float FreqOffset, TArray<float>& OutFrequencies, TArray<float>& OutLeftChannelFrequencies, TArray<float>& OutRightChannelFrequencies)
{
    TArray<float> freqs;
    TArray<float> leftChannelFreqs;
    TArray<float> rightChannelFreqs;
    AudioChunk chunk;

    if (!m_sink.Dequeue(chunk))
    {
        // UE_LOG(LogTemp, Warning, TEXT("No audio chunk available."));
        return;
    }

    if (chunk.size <= 0 || chunk.chunk == NULL)
    {
        UE_LOG(LogTemp, Warning, TEXT("Invalid audio chunk: size=%d"), chunk.size);
        return;
    }

    // Calculate Frequency Values
    CalculateFrequencySpectrum(chunk.chunk, 2, chunk.size, FreqLogBase, FreqMultiplier, FreqPower, FreqOffset, OutFrequencies, OutLeftChannelFrequencies, OutRightChannelFrequencies);

    // Empty the queue
    m_sink.EmptyQueue();
}

float GetTheFFTInValue(const int16 InSampleValue, const int16 InSampleIndex, const int16 InSampleCount)
{
    float FFTValue = InSampleValue;
    FFTValue *= 0.5f * (1 - FMath::Cos(2 * PI * InSampleIndex / (InSampleCount - 1)));
    return FFTValue;
}

void FAudioCaptureWorker::CalculateFrequencySpectrum(
    int16* SamplePointer,
    const int32 NumChannels,
    const int32 NumAvailableSamples,
    float FreqLogBase,
    float FreqMultiplier,
    float FreqPower,
    float FreqOffset,
    TArray<float>& OutFrequencies,
    TArray<float>& OutLeftChannelFrequencies,
    TArray<float>& OutRightChannelFrequencies)
{
    // Clear the Arrays before continuing
    OutFrequencies.Empty();
    OutLeftChannelFrequencies.Empty();
    OutRightChannelFrequencies.Empty();

    // Make sure the Number of Channels is correct
    if (NumChannels <= 0 || NumChannels > 2)
    {
        UE_LOG(LogTemp, Warning, TEXT("Invalid number of channels: %d"), NumChannels);
        return;
    }

    // Check if we actually have a Buffer to work with
    if (SamplePointer == NULL)
    {
        UE_LOG(LogTemp, Warning, TEXT("SamplePointer is null"));
        return;
    }

    // Get Maximum amount of samples in this Sound
    const int32 SampleCount = NumAvailableSamples;

    // An early check if we can create a Sample window
    int32 FirstSample = 0;
    int32 LastSample = SampleCount;

    // Actual amount of samples we gonna read
    int32 SamplesToRead = LastSample - FirstSample;

    if (SamplesToRead < 0)
    {
        UE_LOG(LogTemp, Error, TEXT("CalculateFrequencySpectrum: Number of SamplesToRead is < 0!"));
        return;
    }

    // Shift the window enough so that we get a PowerOfTwo. FFT works better with that
    int32 PoT = 2;
    while (SamplesToRead > PoT)
    {
        PoT *= 2;
    }

    // Now we have a good PowerOfTwo to work with
    SamplesToRead = PoT;

    // Create unique pointers for complex numbers | Buffer and Output
    std::unique_ptr<kiss_fft_cpx[]> Buffer[2] = { NULL };
    std::unique_ptr<kiss_fft_cpx[]> Output[2] = { NULL };

    // Create 1-dim Array with one slot for SamplesToRead
    int32 Dims[1] = { SamplesToRead };

    kiss_fftnd_cfg STF = kiss_fftnd_alloc(Dims, 1, 0, NULL, NULL);

    int16* SamplePtr = SamplePointer;

    // Allocate space in the Buffer and Output Arrays for all the data that FFT returns
    for (int32 ChannelIndex = 0; ChannelIndex < NumChannels; ChannelIndex++)
    {
        Buffer[ChannelIndex].reset(new kiss_fft_cpx[SamplesToRead]);
        Output[ChannelIndex].reset(new kiss_fft_cpx[SamplesToRead]);
    }

    // Shift our SamplePointer to the Current "FirstSample"
    SamplePtr += FirstSample * NumChannels;

    for (int32 SampleIndex = 0; SampleIndex < SamplesToRead; SampleIndex++)
    {
        for (int32 ChannelIndex = 0; ChannelIndex < NumChannels; ChannelIndex++)
        {
            // Make sure the Point is Valid and we don't go out of bounds
            if (SamplePtr != NULL && (SampleIndex + FirstSample < SampleCount))
            {
                // Use Window function to get a better result for the Data (Hann Window)
                Buffer[ChannelIndex][SampleIndex].r = GetTheFFTInValue(*SamplePtr, SampleIndex, SamplesToRead);
                Buffer[ChannelIndex][SampleIndex].i = 0.f;
            }
            else
            {
                // Use Window function to get a better result for the Data (Hann Window)
                Buffer[ChannelIndex][SampleIndex].r = 0.f;
                Buffer[ChannelIndex][SampleIndex].i = 0.f;
            }

            // Take the next Sample - Halfed Causes SamplePtr Exception
            if (SamplePtr != NULL && (SampleIndex + FirstSample < SampleCount / 2))
            {
                SamplePtr++;
            }
        }
    }

    // Now that the Buffer is filled, use the FFT
    for (int32 ChannelIndex = 0; ChannelIndex < NumChannels; ChannelIndex++)
    {
        if (Buffer[ChannelIndex])
        {
            kiss_fftnd(STF, Buffer[ChannelIndex].get(), Output[ChannelIndex].get());
        }
    }

    OutFrequencies.AddZeroed(SamplesToRead / 2);
    OutLeftChannelFrequencies.AddZeroed(SamplesToRead / 2);
    OutRightChannelFrequencies.AddZeroed(SamplesToRead / 2);

    for (int32 SampleIndex = 0; SampleIndex < SamplesToRead / 2; ++SampleIndex)
    {
        double ChannelSum = 0.0f;
        double LeftChannelSum = 0.0f;
        double RightChannelSum = 0.0f;

        for (int32 ChannelIndex = 0; ChannelIndex < NumChannels; ++ChannelIndex)
        {
            if (Output[ChannelIndex])
            {
                double Magnitude = FMath::Sqrt(FMath::Square(Output[ChannelIndex][SampleIndex].r) + FMath::Square(Output[ChannelIndex][SampleIndex].i));
                ChannelSum += Magnitude;

                if (ChannelIndex == 0)
                {
                    LeftChannelSum += Magnitude;
                }
                else if (ChannelIndex == 1)
                {
                    RightChannelSum += Magnitude;
                }
            }
        }

        // Average the ChannelSum across channels and normalize
        ChannelSum /= NumChannels;

        // Apply a compensation factor to counteract the roll-off
        ChannelSum *= (1.0f + SampleIndex / float(SamplesToRead / 2));

        // Logarithmic scaling (if needed)
        OutFrequencies[SampleIndex] = FMath::Pow((FMath::LogX(FreqLogBase, ChannelSum) * FreqMultiplier), FreqPower) + FreqOffset;
        
        // Zero-out channels with no audio
        if (LeftChannelSum == 0.0f)
        {
            OutLeftChannelFrequencies[SampleIndex] = 0.0f;
        }
        else
        {
            OutLeftChannelFrequencies[SampleIndex] = FMath::Pow((FMath::LogX(FreqLogBase, LeftChannelSum) * FreqMultiplier), FreqPower) + FreqOffset;
        }

        if (RightChannelSum == 0.0f)
        {
            OutRightChannelFrequencies[SampleIndex] = 0.0f;
        }
        else
        {
            OutRightChannelFrequencies[SampleIndex] = FMath::Pow((FMath::LogX(FreqLogBase, RightChannelSum) * FreqMultiplier), FreqPower) + FreqOffset;
        }
    }

    // Free up the FFT stuff
    kiss_fft_free(STF);
}
