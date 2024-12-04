// Implementation of Beat Detector for Windows Audio Capture Plugin

#include "BeatDetector.h"

// Constants
constexpr int32 ENERGY_HISTORY_SIZE = 43; // ~1 second at 44.1kHz when analyzing chunks of 1024 samples
constexpr float MIN_TIME_BETWEEN_BEATS = 0.2f; // Minimum time between beats (300 BPM max)

FBeatDetector::FBeatDetector()
    : LastBeatTime(0.0f)
    , AverageBeatInterval(0.0f)
{
    EnergyHistory.Init(0.0f, ENERGY_HISTORY_SIZE);
}

void FBeatDetector::ProcessFrequencies(const TArray<float>& InFrequencies, const FBeatDetectionSettings& Settings)
{
    if (InFrequencies.Num() == 0)
    {
        CurrentBeatInfo = FBeatInfo();
        return;
    }

    // Calculate current energy
    float CurrentEnergy = CalculateEnergy(InFrequencies);
    
    // Update energy history
    EnergyHistory.RemoveAt(0);
    EnergyHistory.Add(CurrentEnergy);
    
    // Detect beat
    CurrentBeatInfo.IsOnBeat = DetectBeat(CurrentEnergy, Settings);
    
    if (CurrentBeatInfo.IsOnBeat)
    {
        float CurrentTime = FPlatformTime::Seconds();
        float TimeSinceLastBeat = CurrentTime - LastBeatTime;
        
        if (TimeSinceLastBeat >= MIN_TIME_BETWEEN_BEATS)
        {
            UpdateBPM(TimeSinceLastBeat);
            LastBeatTime = CurrentTime;
        }
    }
    
    // Calculate beat strength and average energy
    float AverageEnergy = 0.0f;
    for (float Energy : EnergyHistory)
    {
        AverageEnergy += Energy;
    }
    AverageEnergy /= EnergyHistory.Num();
    
    CurrentBeatInfo.BeatStrength = CurrentEnergy / (AverageEnergy * Settings.BeatThreshold);
    CurrentBeatInfo.BeatStrength = FMath::Clamp(CurrentBeatInfo.BeatStrength, 0.0f, 1.0f);
    
    // Calculate beat confidence based on energy variance
    float EnergyVariance = 0.0f;
    for (float Energy : EnergyHistory)
    {
        float Diff = Energy - AverageEnergy;
        EnergyVariance += (Diff * Diff);
    }
    EnergyVariance /= EnergyHistory.Num();
    
    // Normalize variance and calculate confidence factors
    float EnergyCertainty = FMath::Clamp(EnergyVariance / (AverageEnergy * AverageEnergy + 1e-6f), 0.0f, 1.0f);
    float CurrentEnergyRatio = FMath::Clamp(CurrentEnergy / (AverageEnergy + 1e-6f), 0.0f, 1.0f);
    
    // Calculate final confidence value
    CurrentBeatInfo.BeatConfidence = EnergyCertainty * CurrentEnergyRatio;
    if (CurrentEnergy < Settings.MinimumEnergy)
    {
        CurrentBeatInfo.BeatConfidence = 0.0f;
    }
    CurrentBeatInfo.BeatConfidence = FMath::Clamp(CurrentBeatInfo.BeatConfidence, 0.0f, 1.0f);
    
    // Update time since last beat
    CurrentBeatInfo.TimeSinceLastBeat = FPlatformTime::Seconds() - LastBeatTime;
}

FBeatInfo FBeatDetector::GetCurrentBeatInfo() const
{
    return CurrentBeatInfo;
}

float FBeatDetector::CalculateEnergy(const TArray<float>& InFrequencies) const
{
    if (InFrequencies.Num() == 0)
        return 0.0f;

    float Energy = 0.0f;
    for (float Freq : InFrequencies)
    {
        Energy += Freq * Freq;
    }
    return FMath::Sqrt(Energy / InFrequencies.Num());
}

bool FBeatDetector::DetectBeat(float CurrentEnergy, const FBeatDetectionSettings& Settings)
{
    if (CurrentEnergy < Settings.MinimumEnergy)
        return false;

    float AverageEnergy = 0.0f;
    for (float Energy : EnergyHistory)
    {
        AverageEnergy += Energy;
    }
    AverageEnergy /= EnergyHistory.Num();

    return CurrentEnergy > (AverageEnergy * Settings.BeatThreshold);
}

void FBeatDetector::UpdateBPM(float DeltaTime)
{
    // Simple moving average for BPM
    const float ALPHA = 0.2f; // Smoothing factor
    float InstantBPM = 60.0f / DeltaTime; // Convert to beats per minute
    
    if (AverageBeatInterval == 0.0f)
    {
        AverageBeatInterval = InstantBPM;
    }
    else
    {
        AverageBeatInterval = (1.0f - ALPHA) * AverageBeatInterval + ALPHA * InstantBPM;
    }
    
    CurrentBeatInfo.CurrentBPM = AverageBeatInterval;
}
