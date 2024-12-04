#pragma once

#include "CoreMinimal.h"
#include "BeatDetectionSettings.h"

/**
 * Class that handles beat detection and analysis of audio data
 */
class WINDOWSAUDIOCAPTURE_API FBeatDetector
{
public:
    FBeatDetector();

    /**
     * Process new frequency data for beat detection
     * @param InFrequencies Array of frequency values to analyze
     * @param Settings Settings for beat detection algorithm
     */
    void ProcessFrequencies(const TArray<float>& InFrequencies, const FBeatDetectionSettings& Settings);

    /**
     * Get the current beat information
     * @return FBeatInfo struct containing current beat state
     */
    FBeatInfo GetCurrentBeatInfo() const;

private:
    // Current beat information
    FBeatInfo CurrentBeatInfo;

    // Energy history for beat detection
    TArray<float> EnergyHistory;
    
    // Time of last beat detection
    float LastBeatTime;
    
    // Running average of beat intervals for BPM calculation
    float AverageBeatInterval;

    /**
     * Calculate energy from frequency data
     * @param InFrequencies Input frequency array
     * @return Total energy value
     */
    float CalculateEnergy(const TArray<float>& InFrequencies) const;

    /**
     * Detect if there is a beat at the current moment
     * @param CurrentEnergy Current frame's energy value
     * @param Settings Beat detection settings
     * @return true if beat detected
     */
    bool DetectBeat(float CurrentEnergy, const FBeatDetectionSettings& Settings);

    /**
     * Update BPM calculation
     * @param DeltaTime Time since last beat
     */
    void UpdateBPM(float DeltaTime);
};
