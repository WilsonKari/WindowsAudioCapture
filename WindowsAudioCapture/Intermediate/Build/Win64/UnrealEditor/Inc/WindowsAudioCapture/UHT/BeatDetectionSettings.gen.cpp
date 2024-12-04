// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WindowsAudioCapture/Public/BeatDetectionSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBeatDetectionSettings() {}

// Begin Cross Module References
UPackage* Z_Construct_UPackage__Script_WindowsAudioCapture();
WINDOWSAUDIOCAPTURE_API UScriptStruct* Z_Construct_UScriptStruct_FBeatDetectionSettings();
WINDOWSAUDIOCAPTURE_API UScriptStruct* Z_Construct_UScriptStruct_FBeatInfo();
// End Cross Module References

// Begin ScriptStruct FBeatInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BeatInfo;
class UScriptStruct* FBeatInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BeatInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BeatInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBeatInfo, (UObject*)Z_Construct_UPackage__Script_WindowsAudioCapture(), TEXT("BeatInfo"));
	}
	return Z_Registration_Info_UScriptStruct_BeatInfo.OuterSingleton;
}
template<> WINDOWSAUDIOCAPTURE_API UScriptStruct* StaticStruct<FBeatInfo>()
{
	return FBeatInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FBeatInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/BeatDetectionSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentBPM_MetaData[] = {
		{ "Category", "Audio Analysis|Rhythm" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Current detected Beats Per Minute\n" },
#endif
		{ "ModuleRelativePath", "Public/BeatDetectionSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Current detected Beats Per Minute" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BeatStrength_MetaData[] = {
		{ "Category", "Audio Analysis|Rhythm" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Strength of the current beat (0-1)\n" },
#endif
		{ "ModuleRelativePath", "Public/BeatDetectionSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Strength of the current beat (0-1)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsOnBeat_MetaData[] = {
		{ "Category", "Audio Analysis|Rhythm" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Whether we are currently on a beat\n" },
#endif
		{ "ModuleRelativePath", "Public/BeatDetectionSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether we are currently on a beat" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeSinceLastBeat_MetaData[] = {
		{ "Category", "Audio Analysis|Rhythm" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Time since the last beat was detected\n" },
#endif
		{ "ModuleRelativePath", "Public/BeatDetectionSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Time since the last beat was detected" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BeatConfidence_MetaData[] = {
		{ "Category", "Audio Analysis|Rhythm" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Confidence level of the beat detection (0-1)\n" },
#endif
		{ "ModuleRelativePath", "Public/BeatDetectionSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Confidence level of the beat detection (0-1)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentBPM;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BeatStrength;
	static void NewProp_IsOnBeat_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsOnBeat;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeSinceLastBeat;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BeatConfidence;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBeatInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBeatInfo_Statics::NewProp_CurrentBPM = { "CurrentBPM", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBeatInfo, CurrentBPM), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentBPM_MetaData), NewProp_CurrentBPM_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBeatInfo_Statics::NewProp_BeatStrength = { "BeatStrength", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBeatInfo, BeatStrength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BeatStrength_MetaData), NewProp_BeatStrength_MetaData) };
void Z_Construct_UScriptStruct_FBeatInfo_Statics::NewProp_IsOnBeat_SetBit(void* Obj)
{
	((FBeatInfo*)Obj)->IsOnBeat = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBeatInfo_Statics::NewProp_IsOnBeat = { "IsOnBeat", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FBeatInfo), &Z_Construct_UScriptStruct_FBeatInfo_Statics::NewProp_IsOnBeat_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsOnBeat_MetaData), NewProp_IsOnBeat_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBeatInfo_Statics::NewProp_TimeSinceLastBeat = { "TimeSinceLastBeat", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBeatInfo, TimeSinceLastBeat), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeSinceLastBeat_MetaData), NewProp_TimeSinceLastBeat_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBeatInfo_Statics::NewProp_BeatConfidence = { "BeatConfidence", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBeatInfo, BeatConfidence), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BeatConfidence_MetaData), NewProp_BeatConfidence_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBeatInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBeatInfo_Statics::NewProp_CurrentBPM,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBeatInfo_Statics::NewProp_BeatStrength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBeatInfo_Statics::NewProp_IsOnBeat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBeatInfo_Statics::NewProp_TimeSinceLastBeat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBeatInfo_Statics::NewProp_BeatConfidence,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBeatInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBeatInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_WindowsAudioCapture,
	nullptr,
	&NewStructOps,
	"BeatInfo",
	Z_Construct_UScriptStruct_FBeatInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBeatInfo_Statics::PropPointers),
	sizeof(FBeatInfo),
	alignof(FBeatInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBeatInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FBeatInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FBeatInfo()
{
	if (!Z_Registration_Info_UScriptStruct_BeatInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BeatInfo.InnerSingleton, Z_Construct_UScriptStruct_FBeatInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_BeatInfo.InnerSingleton;
}
// End ScriptStruct FBeatInfo

// Begin ScriptStruct FBeatDetectionSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BeatDetectionSettings;
class UScriptStruct* FBeatDetectionSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BeatDetectionSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BeatDetectionSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBeatDetectionSettings, (UObject*)Z_Construct_UPackage__Script_WindowsAudioCapture(), TEXT("BeatDetectionSettings"));
	}
	return Z_Registration_Info_UScriptStruct_BeatDetectionSettings.OuterSingleton;
}
template<> WINDOWSAUDIOCAPTURE_API UScriptStruct* StaticStruct<FBeatDetectionSettings>()
{
	return FBeatDetectionSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FBeatDetectionSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/BeatDetectionSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinBPM_MetaData[] = {
		{ "Category", "Audio Analysis|Rhythm" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Minimum BPM to detect (for very slow music)\n" },
#endif
		{ "ModuleRelativePath", "Public/BeatDetectionSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Minimum BPM to detect (for very slow music)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxBPM_MetaData[] = {
		{ "Category", "Audio Analysis|Rhythm" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Maximum BPM to detect (for very fast music)\n" },
#endif
		{ "ModuleRelativePath", "Public/BeatDetectionSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Maximum BPM to detect (for very fast music)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BeatThreshold_MetaData[] = {
		{ "Category", "Audio Analysis|Rhythm" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Threshold for beat detection sensitivity (0-1)\n" },
#endif
		{ "ModuleRelativePath", "Public/BeatDetectionSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Threshold for beat detection sensitivity (0-1)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BassEmphasis_MetaData[] = {
		{ "Category", "Audio Analysis|Rhythm" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// How much to emphasize bass frequencies in beat detection\n" },
#endif
		{ "ModuleRelativePath", "Public/BeatDetectionSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How much to emphasize bass frequencies in beat detection" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinimumEnergy_MetaData[] = {
		{ "Category", "Audio Analysis|Rhythm" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Minimum energy required to detect beats\n" },
#endif
		{ "ModuleRelativePath", "Public/BeatDetectionSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Minimum energy required to detect beats" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinBPM;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxBPM;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BeatThreshold;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BassEmphasis;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinimumEnergy;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBeatDetectionSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBeatDetectionSettings_Statics::NewProp_MinBPM = { "MinBPM", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBeatDetectionSettings, MinBPM), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinBPM_MetaData), NewProp_MinBPM_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBeatDetectionSettings_Statics::NewProp_MaxBPM = { "MaxBPM", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBeatDetectionSettings, MaxBPM), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxBPM_MetaData), NewProp_MaxBPM_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBeatDetectionSettings_Statics::NewProp_BeatThreshold = { "BeatThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBeatDetectionSettings, BeatThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BeatThreshold_MetaData), NewProp_BeatThreshold_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBeatDetectionSettings_Statics::NewProp_BassEmphasis = { "BassEmphasis", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBeatDetectionSettings, BassEmphasis), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BassEmphasis_MetaData), NewProp_BassEmphasis_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBeatDetectionSettings_Statics::NewProp_MinimumEnergy = { "MinimumEnergy", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBeatDetectionSettings, MinimumEnergy), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinimumEnergy_MetaData), NewProp_MinimumEnergy_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBeatDetectionSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBeatDetectionSettings_Statics::NewProp_MinBPM,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBeatDetectionSettings_Statics::NewProp_MaxBPM,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBeatDetectionSettings_Statics::NewProp_BeatThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBeatDetectionSettings_Statics::NewProp_BassEmphasis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBeatDetectionSettings_Statics::NewProp_MinimumEnergy,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBeatDetectionSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBeatDetectionSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_WindowsAudioCapture,
	nullptr,
	&NewStructOps,
	"BeatDetectionSettings",
	Z_Construct_UScriptStruct_FBeatDetectionSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBeatDetectionSettings_Statics::PropPointers),
	sizeof(FBeatDetectionSettings),
	alignof(FBeatDetectionSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBeatDetectionSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FBeatDetectionSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FBeatDetectionSettings()
{
	if (!Z_Registration_Info_UScriptStruct_BeatDetectionSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BeatDetectionSettings.InnerSingleton, Z_Construct_UScriptStruct_FBeatDetectionSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_BeatDetectionSettings.InnerSingleton;
}
// End ScriptStruct FBeatDetectionSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_MyProjectWAC_Plugins_WindowsAudioCapture_Source_WindowsAudioCapture_Public_BeatDetectionSettings_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FBeatInfo::StaticStruct, Z_Construct_UScriptStruct_FBeatInfo_Statics::NewStructOps, TEXT("BeatInfo"), &Z_Registration_Info_UScriptStruct_BeatInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBeatInfo), 1825895711U) },
		{ FBeatDetectionSettings::StaticStruct, Z_Construct_UScriptStruct_FBeatDetectionSettings_Statics::NewStructOps, TEXT("BeatDetectionSettings"), &Z_Registration_Info_UScriptStruct_BeatDetectionSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBeatDetectionSettings), 2851578037U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProjectWAC_Plugins_WindowsAudioCapture_Source_WindowsAudioCapture_Public_BeatDetectionSettings_h_1230612302(TEXT("/Script/WindowsAudioCapture"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_MyProjectWAC_Plugins_WindowsAudioCapture_Source_WindowsAudioCapture_Public_BeatDetectionSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyProjectWAC_Plugins_WindowsAudioCapture_Source_WindowsAudioCapture_Public_BeatDetectionSettings_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
