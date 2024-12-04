// Beat Detection Settings for Windows Audio Capture Plugin
// Handles configuration for beat detection and rhythm analysis

#pragma once

#include "CoreMinimal.h"
#include "BeatDetectionSettings.generated.h"

USTRUCT(BlueprintType)
struct FBeatInfo
{
    GENERATED_BODY()

    // Current detected Beats Per Minute
    UPROPERTY(BlueprintReadOnly, Category = "Audio Analysis|Rhythm")
    float CurrentBPM = 0.0f;

    // Strength of the current beat (0-1)
    UPROPERTY(BlueprintReadOnly, Category = "Audio Analysis|Rhythm")
    float BeatStrength = 0.0f;

    // Whether we are currently on a beat
    UPROPERTY(BlueprintReadOnly, Category = "Audio Analysis|Rhythm")
    bool IsOnBeat = false;

    // Time since the last beat was detected
    UPROPERTY(BlueprintReadOnly, Category = "Audio Analysis|Rhythm")
    float TimeSinceLastBeat = 0.0f;

    // Confidence level of the beat detection (0-1)
    UPROPERTY(BlueprintReadOnly, Category = "Audio Analysis|Rhythm")
    float BeatConfidence = 0.0f;
};

USTRUCT(BlueprintType)
struct FBeatDetectionSettings
{
    GENERATED_BODY()

    // Minimum BPM to detect (for very slow music)
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Audio Analysis|Rhythm")
    float MinBPM = 60.0f;

    // Maximum BPM to detect (for very fast music)
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Audio Analysis|Rhythm")
    float MaxBPM = 200.0f;

    // Threshold for beat detection sensitivity (0-1)
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Audio Analysis|Rhythm")
    float BeatThreshold = 0.5f;

    // How much to emphasize bass frequencies in beat detection
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Audio Analysis|Rhythm")
    float BassEmphasis = 1.2f;

    // Minimum energy required to detect beats
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Audio Analysis|Rhythm")
    float MinimumEnergy = 0.05f;
};
