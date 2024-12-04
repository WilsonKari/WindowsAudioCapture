// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WindowsAudioCaptureComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FBeatDetectionSettings;
struct FBeatInfo;
#ifdef WINDOWSAUDIOCAPTURE_WindowsAudioCaptureComponent_generated_h
#error "WindowsAudioCaptureComponent.generated.h already included, missing '#pragma once' in WindowsAudioCaptureComponent.h"
#endif
#define WINDOWSAUDIOCAPTURE_WindowsAudioCaptureComponent_generated_h

#define FID_MyProjectWAC_Plugins_WindowsAudioCapture_Source_WindowsAudioCapture_Public_WindowsAudioCaptureComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execBP_GetBeatInfo); \
	DECLARE_FUNCTION(execBP_InterpolateValue); \
	DECLARE_FUNCTION(execBP_ApplyDynamicRangeCompression); \
	DECLARE_FUNCTION(execBP_NormalizeFrequencyArray); \
	DECLARE_FUNCTION(execBP_GetPeakFrequency); \
	DECLARE_FUNCTION(execBP_GetTotalEnergy); \
	DECLARE_FUNCTION(execBP_GetAverageFrequencyValueInRange); \
	DECLARE_FUNCTION(execBP_GetAverageHighValue); \
	DECLARE_FUNCTION(execBP_GetAverageMidValue); \
	DECLARE_FUNCTION(execBP_GetAverageBassValue); \
	DECLARE_FUNCTION(execBP_GetAverageSubBassValue); \
	DECLARE_FUNCTION(execBP_GetSpecificFrequencyValue); \
	DECLARE_FUNCTION(execBP_GetFrequencyArray);


#define FID_MyProjectWAC_Plugins_WindowsAudioCapture_Source_WindowsAudioCapture_Public_WindowsAudioCaptureComponent_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWindowsAudioCaptureComponent(); \
	friend struct Z_Construct_UClass_UWindowsAudioCaptureComponent_Statics; \
public: \
	DECLARE_CLASS(UWindowsAudioCaptureComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/WindowsAudioCapture"), NO_API) \
	DECLARE_SERIALIZER(UWindowsAudioCaptureComponent)


#define FID_MyProjectWAC_Plugins_WindowsAudioCapture_Source_WindowsAudioCapture_Public_WindowsAudioCaptureComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UWindowsAudioCaptureComponent(UWindowsAudioCaptureComponent&&); \
	UWindowsAudioCaptureComponent(const UWindowsAudioCaptureComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWindowsAudioCaptureComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWindowsAudioCaptureComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UWindowsAudioCaptureComponent)


#define FID_MyProjectWAC_Plugins_WindowsAudioCapture_Source_WindowsAudioCapture_Public_WindowsAudioCaptureComponent_h_14_PROLOG
#define FID_MyProjectWAC_Plugins_WindowsAudioCapture_Source_WindowsAudioCapture_Public_WindowsAudioCaptureComponent_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyProjectWAC_Plugins_WindowsAudioCapture_Source_WindowsAudioCapture_Public_WindowsAudioCaptureComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MyProjectWAC_Plugins_WindowsAudioCapture_Source_WindowsAudioCapture_Public_WindowsAudioCaptureComponent_h_17_INCLASS_NO_PURE_DECLS \
	FID_MyProjectWAC_Plugins_WindowsAudioCapture_Source_WindowsAudioCapture_Public_WindowsAudioCaptureComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WINDOWSAUDIOCAPTURE_API UClass* StaticClass<class UWindowsAudioCaptureComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MyProjectWAC_Plugins_WindowsAudioCapture_Source_WindowsAudioCapture_Public_WindowsAudioCaptureComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
