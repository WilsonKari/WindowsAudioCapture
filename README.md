# Windows Audio Capture (WAC)
An advanced Unreal Engine plugin for real-time audio visualization and beat detection.

## Overview
Windows Audio Capture (WAC) is a powerful Unreal Engine plugin that captures live audio from your Windows default audio device and transforms it into usable frequency data and beat detection information. This plugin enables developers to create dynamic audio-reactive experiences directly within Unreal Engine's Blueprint system.

## Latest Version (5.4.3b Enhanced - 2024)
### New Features
- **Beat Detection System**:
  - Real-time beat detection with confidence metrics
  - BPM (Beats Per Minute) calculation
  - Beat strength analysis
  - Customizable detection parameters
  - Time-since-last-beat tracking

- **Audio Analysis**:
  - Left and Right Channel Separation
  - dB output support
  - Smooth interpolation for visualizations
  - Dynamic Range Compression
  - Customizable output normalization

## Installation
1. Create a `Plugins` folder in your project directory if it doesn't exist
2. Copy the `WindowsAudioCapture` folder into your project's `Plugins` folder
3. Restart the Unreal Editor
4. Enable the plugin in Edit → Plugins → Audio → Windows Audio Capture

## Quick Start Guide

### Basic Setup
1. Create a new Actor Blueprint
2. Add a Windows Audio Capture Component
3. Add your desired visual components (lights, meshes, etc.)

### Basic Audio Visualization
```blueprint
Event Tick
  ↳ [Add Delay] (Recommended: 0.016 for 60fps)
    ↳ Get Frequency Array
      ↳ [Your visualization logic]
```

### Beat Detection Setup
```blueprint
Event Tick
  ↳ Make Beat Detection Settings
     - Min BPM: 60.0
     - Max BPM: 200.0
     - Beat Threshold: 0.5
     - Bass Emphasis: 1.2
     - Minimum Energy: 0.05
  ↳ Get Beat Info
     Outputs:
     - Is On Beat (Boolean)
     - Beat Strength (Float 0-1)
     - Beat Confidence (Float 0-1)
     - Current BPM (Float)
     - Time Since Last Beat (Float)
```

## Available Functions

### Audio Analysis
- `Get Frequency Array`: Returns the current audio frequency spectrum
- `Get Specific Freq Value`: Get the amplitude at a specific frequency
- `Get Average Freq Value in Range`: Calculate average amplitude within a frequency range
- `Get Average Bass Value`: Get the average amplitude in bass frequencies
- `Get Average Subbass Value`: Get the average amplitude in sub-bass frequencies

### Beat Detection
- `Get Beat Info`: Returns comprehensive beat detection information
- `Make Beat Detection Settings`: Create customized beat detection parameters

## Example Use Cases

### 1. Basic Light Pulse
```blueprint
Get Beat Info
  ↳ [Is On Beat]
     ↳ Set Light Intensity (8000 * Beat Strength)
  ↳ [False]
     ↳ Timeline "FadeOut"
```

### 2. BPM-Based Animation
```blueprint
Get Beat Info
  ↳ [Current BPM]
     ↳ Set Actor Rotation Speed
```

### 3. Confidence-Based Effects
```blueprint
Get Beat Info
  ↳ [Beat Confidence]
     ↳ Set Particle Emission Rate
```

## Beat Detection Parameters Guide

### BPM Range (Min BPM, Max BPM)
- **Min BPM**: Lowest expected beats per minute (default: 60)
- **Max BPM**: Highest expected beats per minute (default: 200)
- Adjust based on your music genre:
  - EDM/Dance: 120-140 BPM
  - Hip-Hop: 85-95 BPM
  - Rock: 100-120 BPM

### Beat Threshold (0.0 - 1.0)
- Controls sensitivity of beat detection
- Lower values (0.1-0.3): More sensitive, may detect subtle beats
- Higher values (0.7-0.9): Only detect strong beats
- Default: 0.5

### Bass Emphasis (1.0+)
- Multiplier for bass frequencies in beat detection
- Higher values emphasize bass-heavy beats
- Default: 1.2

### Minimum Energy
- Threshold for overall audio energy
- Helps filter out background noise
- Default: 0.05

## Performance Tips
1. Use delay nodes with Get Frequency Array (0.016s for 60fps)
2. Cache beat detection settings instead of creating them every tick
3. Use Timeline nodes for smooth transitions
4. Implement LOD (Level of Detail) for complex visualizations

## Support
- Compatible with Unreal Engine 5.4.3b and later
- Windows platform only
- VR compatible

## Credits
Original plugin by kwstasg
Beat Detection enhancement by [Your Credits]

## Links
- [Latest Release](https://github.com/kwstasg/WAC/releases)
- [Demo Project](https://github.com/kwstasg/WAC/releases)
- [Tutorial Video](https://www.youtube.com/watch?v=zEFxnGkhoZI)
