// Implementation of Beat Detector for Windows Audio Capture Plugin

#include "BeatDetector.h"

// Constants
constexpr int32 ENERGY_HISTORY_SIZE = 43; // ~1 second at 44.1kHz when analyzing chunks of 1024 samples
constexpr float MIN_TIME_BETWEEN_BEATS = 0.2f; // Minimum time between beats (300 BPM max)

FBeatDetector::FBeatDetector()
    : EnergyHistory(ENERGY_HISTORY_SIZE)
    , LastBeatTime(0.0f)
    , AverageBeatInterval(0.0f)
{
}

float FBeatDetector::CalculateAverageEnergy() const
{
    return EnergyHistory.GetAverage();
}

void FBeatDetector::ProcessFrequencies(const TArray<float>& InFrequencies, const FBeatDetectionSettings& Settings)
{
    // Reset beat info if no input
    if (InFrequencies.Num() == 0)
    {
        CurrentBeatInfo = FBeatInfo();
        return;
    }

    // Calculate current energy
    float CurrentEnergy = CalculateEnergy(InFrequencies);
    
    // Add to circular buffer
    EnergyHistory.Push(CurrentEnergy);
    
    // Make sure we have enough history before detecting beats
    if (!EnergyHistory.IsFull())
    {
        CurrentBeatInfo = FBeatInfo();
        return;
    }
    
    // Detect beat
    CurrentBeatInfo.IsOnBeat = DetectBeat(CurrentEnergy, Settings);
    
    if (CurrentBeatInfo.IsOnBeat)
    {
        float CurrentTime = FPlatformTime::Seconds();
        float TimeSinceLastBeat = CurrentTime - LastBeatTime;
        
        if (TimeSinceLastBeat >= MIN_TIME_BETWEEN_BEATS)
        {
            UpdateBPM(TimeSinceLastBeat, Settings);
            LastBeatTime = CurrentTime;
        }
    }
    
    // Calculate average energy using the optimized method
    float AverageEnergy = CalculateAverageEnergy();
    
    // Prevent division by zero in energy ratio calculation
    const float MIN_ENERGY = 1e-6f;
    AverageEnergy = FMath::Max(AverageEnergy, MIN_ENERGY);
    
    // Calculate normalized beat strength with improved scaling and safety
    float EnergyRatio = (CurrentEnergy - AverageEnergy) / AverageEnergy;
    CurrentBeatInfo.BeatStrength = FMath::GetMappedRangeValueClamped(
        FVector2D(Settings.BeatThreshold, Settings.BeatThreshold * 3.0f),
        FVector2D(0.0f, 1.0f),
        EnergyRatio
    );
    
    // Calculate beat confidence using optimized variance calculation
    float EnergyVariance = EnergyHistory.CalculateVariance(AverageEnergy);
    float EnergyCertainty = FMath::Clamp(EnergyVariance / (AverageEnergy * AverageEnergy + MIN_ENERGY), 0.0f, 1.0f);
    float CurrentEnergyRatio = FMath::Clamp(CurrentEnergy / (AverageEnergy + MIN_ENERGY), 0.0f, 1.0f);
    
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
    // Safety check for minimum energy and history
    if (CurrentEnergy < Settings.MinimumEnergy || !EnergyHistory.IsFull())
    {
        return false;
    }

    float AverageEnergy = CalculateAverageEnergy();
    return CurrentEnergy > (AverageEnergy * Settings.BeatThreshold);
}

void FBeatDetector::UpdateBPM(float DeltaTime, const FBeatDetectionSettings& Settings)
{
    // Protect against division by zero or negative values
    if (DeltaTime <= 0.0f)
    {
        return;
    }

    // Convert to beats per minute with initial protection
    float InstantBPM = 60.0f / DeltaTime;

    // Validate against settings bounds and physical limits
    const float MIN_PHYSICAL_BPM = 30.0f;  // Extremely slow music
    const float MAX_PHYSICAL_BPM = 300.0f; // Extremely fast music

    // First clamp to physical limits
    InstantBPM = FMath::Clamp(InstantBPM, MIN_PHYSICAL_BPM, MAX_PHYSICAL_BPM);

    // Then clamp to user settings if valid
    if (CurrentBeatInfo.CurrentBPM > 0.0f)
    {
        // Prevent sudden large changes in BPM (max 20% change)
        const float MAX_BPM_CHANGE = 0.2f;
        float MinAllowedBPM = CurrentBeatInfo.CurrentBPM * (1.0f - MAX_BPM_CHANGE);
        float MaxAllowedBPM = CurrentBeatInfo.CurrentBPM * (1.0f + MAX_BPM_CHANGE);
        InstantBPM = FMath::Clamp(InstantBPM, MinAllowedBPM, MaxAllowedBPM);
    }

    // Apply smoothing with improved alpha
    const float ALPHA = 0.1f; // Reduced for more stable readings
    
    if (AverageBeatInterval == 0.0f)
    {
        AverageBeatInterval = InstantBPM;
    }
    else
    {
        AverageBeatInterval = (1.0f - ALPHA) * AverageBeatInterval + ALPHA * InstantBPM;
    }
    
    // Final clamping to user settings
    CurrentBeatInfo.CurrentBPM = FMath::Clamp(AverageBeatInterval, Settings.MinBPM, Settings.MaxBPM);
}
