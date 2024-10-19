// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WindowsAudioCapture/Public/WindowsAudioCaptureComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWindowsAudioCaptureComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
UPackage* Z_Construct_UPackage__Script_WindowsAudioCapture();
WINDOWSAUDIOCAPTURE_API UClass* Z_Construct_UClass_UWindowsAudioCaptureComponent();
WINDOWSAUDIOCAPTURE_API UClass* Z_Construct_UClass_UWindowsAudioCaptureComponent_NoRegister();
// End Cross Module References

// Begin Class UWindowsAudioCaptureComponent Function BP_ApplyDynamicRangeCompression
struct Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_ApplyDynamicRangeCompression_Statics
{
	struct WindowsAudioCaptureComponent_eventBP_ApplyDynamicRangeCompression_Parms
	{
		TArray<float> InFrequencies;
		TArray<float> OutCompressedFrequencies;
		float Threshold;
		float Ratio;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "WindowsAudioCapture | Frequency Array" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n    * This function applies dynamic range compression to the frequency array.\n    *\n    * @param InFrequencies            Array of float values for different frequencies. Can be obtained by using the \"Get Frequency Array\" function.\n    * @param OutCompressedFrequencies Compressed frequency array.\n    * @param Threshold                Threshold level for compression.\n    * @param Ratio                    Compression ratio.\n    *\n    */" },
#endif
		{ "CPP_Default_Ratio", "4.000000" },
		{ "CPP_Default_Threshold", "-24.000000" },
		{ "DisplayName", "Apply Dynamic Range Compression" },
		{ "Keywords", "Apply Dynamic Range Compression" },
		{ "ModuleRelativePath", "Public/WindowsAudioCaptureComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This function applies dynamic range compression to the frequency array.\n\n@param InFrequencies            Array of float values for different frequencies. Can be obtained by using the \"Get Frequency Array\" function.\n@param OutCompressedFrequencies Compressed frequency array.\n@param Threshold                Threshold level for compression.\n@param Ratio                    Compression ratio." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InFrequencies_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InFrequencies;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OutCompressedFrequencies_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutCompressedFrequencies;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Threshold;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Ratio;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_ApplyDynamicRangeCompression_Statics::NewProp_InFrequencies_Inner = { "InFrequencies", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_ApplyDynamicRangeCompression_Statics::NewProp_InFrequencies = { "InFrequencies", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WindowsAudioCaptureComponent_eventBP_ApplyDynamicRangeCompression_Parms, InFrequencies), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_ApplyDynamicRangeCompression_Statics::NewProp_OutCompressedFrequencies_Inner = { "OutCompressedFrequencies", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_ApplyDynamicRangeCompression_Statics::NewProp_OutCompressedFrequencies = { "OutCompressedFrequencies", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WindowsAudioCaptureComponent_eventBP_ApplyDynamicRangeCompression_Parms, OutCompressedFrequencies), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_ApplyDynamicRangeCompression_Statics::NewProp_Threshold = { "Threshold", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WindowsAudioCaptureComponent_eventBP_ApplyDynamicRangeCompression_Parms, Threshold), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_ApplyDynamicRangeCompression_Statics::NewProp_Ratio = { "Ratio", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WindowsAudioCaptureComponent_eventBP_ApplyDynamicRangeCompression_Parms, Ratio), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_ApplyDynamicRangeCompression_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_ApplyDynamicRangeCompression_Statics::NewProp_InFrequencies_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_ApplyDynamicRangeCompression_Statics::NewProp_InFrequencies,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_ApplyDynamicRangeCompression_Statics::NewProp_OutCompressedFrequencies_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_ApplyDynamicRangeCompression_Statics::NewProp_OutCompressedFrequencies,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_ApplyDynamicRangeCompression_Statics::NewProp_Threshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_ApplyDynamicRangeCompression_Statics::NewProp_Ratio,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_ApplyDynamicRangeCompression_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_ApplyDynamicRangeCompression_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWindowsAudioCaptureComponent, nullptr, "BP_ApplyDynamicRangeCompression", nullptr, nullptr, Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_ApplyDynamicRangeCompression_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_ApplyDynamicRangeCompression_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_ApplyDynamicRangeCompression_Statics::WindowsAudioCaptureComponent_eventBP_ApplyDynamicRangeCompression_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_ApplyDynamicRangeCompression_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_ApplyDynamicRangeCompression_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_ApplyDynamicRangeCompression_Statics::WindowsAudioCaptureComponent_eventBP_ApplyDynamicRangeCompression_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_ApplyDynamicRangeCompression()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_ApplyDynamicRangeCompression_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWindowsAudioCaptureComponent::execBP_ApplyDynamicRangeCompression)
{
	P_GET_TARRAY(float,Z_Param_InFrequencies);
	P_GET_TARRAY_REF(float,Z_Param_Out_OutCompressedFrequencies);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Threshold);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Ratio);
	P_FINISH;
	P_NATIVE_BEGIN;
	UWindowsAudioCaptureComponent::BP_ApplyDynamicRangeCompression(Z_Param_InFrequencies,Z_Param_Out_OutCompressedFrequencies,Z_Param_Threshold,Z_Param_Ratio);
	P_NATIVE_END;
}
// End Class UWindowsAudioCaptureComponent Function BP_ApplyDynamicRangeCompression

// Begin Class UWindowsAudioCaptureComponent Function BP_GetAverageBassValue
struct Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_GetAverageBassValue_Statics
{
	struct WindowsAudioCaptureComponent_eventBP_GetAverageBassValue_Parms
	{
		TArray<float> InFrequencies;
		float OutAverageBass;
		float OutAverageBassDB;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "WindowsAudioCapture | Frequency Values" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n    * This function will return the average value for Bass (60 to 250hz) and its corresponding value in decibels.\n    *\n    * @param InFrequencies            Array of float values for different frequencies. Can be obtained by using the \"Get Frequency Array\" function.\n    * @param OutAverageBass           Average value of the frequencies from 60 to 250.\n    * @param OutAverageBassDB         Average value of the frequencies from 60 to 250 in decibels.\n    *\n    */" },
#endif
		{ "DisplayName", "Get Average Bass Value" },
		{ "Keywords", "Get Average Bass Value" },
		{ "ModuleRelativePath", "Public/WindowsAudioCaptureComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This function will return the average value for Bass (60 to 250hz) and its corresponding value in decibels.\n\n@param InFrequencies            Array of float values for different frequencies. Can be obtained by using the \"Get Frequency Array\" function.\n@param OutAverageBass           Average value of the frequencies from 60 to 250.\n@param OutAverageBassDB         Average value of the frequencies from 60 to 250 in decibels." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InFrequencies_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InFrequencies;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OutAverageBass;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OutAverageBassDB;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_GetAverageBassValue_Statics::NewProp_InFrequencies_Inner = { "InFrequencies", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_GetAverageBassValue_Statics::NewProp_InFrequencies = { "InFrequencies", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WindowsAudioCaptureComponent_eventBP_GetAverageBassValue_Parms, InFrequencies), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_GetAverageBassValue_Statics::NewProp_OutAverageBass = { "OutAverageBass", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WindowsAudioCaptureComponent_eventBP_GetAverageBassValue_Parms, OutAverageBass), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_GetAverageBassValue_Statics::NewProp_OutAverageBassDB = { "OutAverageBassDB", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WindowsAudioCaptureComponent_eventBP_GetAverageBassValue_Parms, OutAverageBassDB), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_GetAverageBassValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_GetAverageBassValue_Statics::NewProp_InFrequencies_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_GetAverageBassValue_Statics::NewProp_InFrequencies,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_GetAverageBassValue_Statics::NewProp_OutAverageBass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_GetAverageBassValue_Statics::NewProp_OutAverageBassDB,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_GetAverageBassValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_GetAverageBassValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWindowsAudioCaptureComponent, nullptr, "BP_GetAverageBassValue", nullptr, nullptr, Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_GetAverageBassValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_GetAverageBassValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_GetAverageBassValue_Statics::WindowsAudioCaptureComponent_eventBP_GetAverageBassValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_GetAverageBassValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_GetAverageBassValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_GetAverageBassValue_Statics::WindowsAudioCaptureComponent_eventBP_GetAverageBassValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_GetAverageBassValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_GetAverageBassValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWindowsAudioCaptureComponent::execBP_GetAverageBassValue)
{
	P_GET_TARRAY(float,Z_Param_InFrequencies);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutAverageBass);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutAverageBassDB);
	P_FINISH;
	P_NATIVE_BEGIN;
	UWindowsAudioCaptureComponent::BP_GetAverageBassValue(Z_Param_InFrequencies,Z_Param_Out_OutAverageBass,Z_Param_Out_OutAverageBassDB);
	P_NATIVE_END;
}
// End Class UWindowsAudioCaptureComponent Function BP_GetAverageBassValue

// Begin Class UWindowsAudioCaptureComponent Function BP_GetAverageFrequencyValueInRange
struct Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_GetAverageFrequencyValueInRange_Statics
{
	struct WindowsAudioCaptureComponent_eventBP_GetAverageFrequencyValueInRange_Parms
	{
		TArray<float> InFrequencies;
		int32 InStartFrequency;
		int32 InEndFrequency;
		float OutAverageFrequency;
		float OutAverageFrequencyDB;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "WindowsAudioCapture | Frequency Values" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n    * This function will return the average value for a given frequency input range e.g., 20 to 60 (SubBass), and its corresponding value in decibels.\n    *\n    * @param InFrequencies            Array of float values for different frequencies. Can be obtained by using the \"Get Frequency Array\" function.\n    * @param InStartFrequency         Start Frequency of the Frequency interval.\n    * @param InEndFrequency           End Frequency of the Frequency interval.\n    * @param OutAverageFrequency      Average value of the requested frequency interval.\n    * @param OutAverageFrequencyDB    Average value of the requested frequency interval in decibels.\n    *\n    */" },
#endif
		{ "DisplayName", "Get Average Freq Value In Range" },
		{ "Keywords", "Get Average Freq Value In Range" },
		{ "ModuleRelativePath", "Public/WindowsAudioCaptureComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This function will return the average value for a given frequency input range e.g., 20 to 60 (SubBass), and its corresponding value in decibels.\n\n@param InFrequencies            Array of float values for different frequencies. Can be obtained by using the \"Get Frequency Array\" function.\n@param InStartFrequency         Start Frequency of the Frequency interval.\n@param InEndFrequency           End Frequency of the Frequency interval.\n@param OutAverageFrequency      Average value of the requested frequency interval.\n@param OutAverageFrequencyDB    Average value of the requested frequency interval in decibels." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InFrequencies_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InFrequencies;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InStartFrequency;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InEndFrequency;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OutAverageFrequency;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OutAverageFrequencyDB;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_GetAverageFrequencyValueInRange_Statics::NewProp_InFrequencies_Inner = { "InFrequencies", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_GetAverageFrequencyValueInRange_Statics::NewProp_InFrequencies = { "InFrequencies", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WindowsAudioCaptureComponent_eventBP_GetAverageFrequencyValueInRange_Parms, InFrequencies), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_GetAverageFrequencyValueInRange_Statics::NewProp_InStartFrequency = { "InStartFrequency", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WindowsAudioCaptureComponent_eventBP_GetAverageFrequencyValueInRange_Parms, InStartFrequency), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_GetAverageFrequencyValueInRange_Statics::NewProp_InEndFrequency = { "InEndFrequency", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WindowsAudioCaptureComponent_eventBP_GetAverageFrequencyValueInRange_Parms, InEndFrequency), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_GetAverageFrequencyValueInRange_Statics::NewProp_OutAverageFrequency = { "OutAverageFrequency", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WindowsAudioCaptureComponent_eventBP_GetAverageFrequencyValueInRange_Parms, OutAverageFrequency), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_GetAverageFrequencyValueInRange_Statics::NewProp_OutAverageFrequencyDB = { "OutAverageFrequencyDB", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WindowsAudioCaptureComponent_eventBP_GetAverageFrequencyValueInRange_Parms, OutAverageFrequencyDB), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_GetAverageFrequencyValueInRange_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_GetAverageFrequencyValueInRange_Statics::NewProp_InFrequencies_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_GetAverageFrequencyValueInRange_Statics::NewProp_InFrequencies,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_GetAverageFrequencyValueInRange_Statics::NewProp_InStartFrequency,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_GetAverageFrequencyValueInRange_Statics::NewProp_InEndFrequency,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_GetAverageFrequencyValueInRange_Statics::NewProp_OutAverageFrequency,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_GetAverageFrequencyValueInRange_Statics::NewProp_OutAverageFrequencyDB,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_GetAverageFrequencyValueInRange_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_GetAverageFrequencyValueInRange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWindowsAudioCaptureComponent, nullptr, "BP_GetAverageFrequencyValueInRange", nullptr, nullptr, Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_GetAverageFrequencyValueInRange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_GetAverageFrequencyValueInRange_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_GetAverageFrequencyValueInRange_Statics::WindowsAudioCaptureComponent_eventBP_GetAverageFrequencyValueInRange_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_GetAverageFrequencyValueInRange_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_GetAverageFrequencyValueInRange_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_GetAverageFrequencyValueInRange_Statics::WindowsAudioCaptureComponent_eventBP_GetAverageFrequencyValueInRange_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_GetAverageFrequencyValueInRange()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_GetAverageFrequencyValueInRange_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWindowsAudioCaptureComponent::execBP_GetAverageFrequencyValueInRange)
{
	P_GET_TARRAY(float,Z_Param_InFrequencies);
	P_GET_PROPERTY(FIntProperty,Z_Param_InStartFrequency);
	P_GET_PROPERTY(FIntProperty,Z_Param_InEndFrequency);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutAverageFrequency);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutAverageFrequencyDB);
	P_FINISH;
	P_NATIVE_BEGIN;
	UWindowsAudioCaptureComponent::BP_GetAverageFrequencyValueInRange(Z_Param_InFrequencies,Z_Param_InStartFrequency,Z_Param_InEndFrequency,Z_Param_Out_OutAverageFrequency,Z_Param_Out_OutAverageFrequencyDB);
	P_NATIVE_END;
}
// End Class UWindowsAudioCaptureComponent Function BP_GetAverageFrequencyValueInRange

// Begin Class UWindowsAudioCaptureComponent Function BP_GetAverageHighValue
struct Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_GetAverageHighValue_Statics
{
	struct WindowsAudioCaptureComponent_eventBP_GetAverageHighValue_Parms
	{
		TArray<float> InFrequencies;
		float OutAverageHigh;
		float OutAverageHighDB;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "WindowsAudioCapture | Frequency Values" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n    * This function will return the average value for High frequencies (2000 to 22000hz) and its corresponding value in decibels.\n    *\n    * @param InFrequencies            Array of float values for different frequencies. Can be obtained by using the \"Get Frequency Array\" function.\n    * @param OutAverageHigh           Average value of the frequencies from 2000 to 22000.\n    * @param OutAverageHighDB         Average value of the frequencies from 2000 to 22000 in decibels.\n    *\n    */" },
#endif
		{ "DisplayName", "Get Average High Value" },
		{ "Keywords", "Get Average High Value" },
		{ "ModuleRelativePath", "Public/WindowsAudioCaptureComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This function will return the average value for High frequencies (2000 to 22000hz) and its corresponding value in decibels.\n\n@param InFrequencies            Array of float values for different frequencies. Can be obtained by using the \"Get Frequency Array\" function.\n@param OutAverageHigh           Average value of the frequencies from 2000 to 22000.\n@param OutAverageHighDB         Average value of the frequencies from 2000 to 22000 in decibels." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InFrequencies_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InFrequencies;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OutAverageHigh;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OutAverageHighDB;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_GetAverageHighValue_Statics::NewProp_InFrequencies_Inner = { "InFrequencies", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_GetAverageHighValue_Statics::NewProp_InFrequencies = { "InFrequencies", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WindowsAudioCaptureComponent_eventBP_GetAverageHighValue_Parms, InFrequencies), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_GetAverageHighValue_Statics::NewProp_OutAverageHigh = { "OutAverageHigh", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WindowsAudioCaptureComponent_eventBP_GetAverageHighValue_Parms, OutAverageHigh), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_GetAverageHighValue_Statics::NewProp_OutAverageHighDB = { "OutAverageHighDB", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WindowsAudioCaptureComponent_eventBP_GetAverageHighValue_Parms, OutAverageHighDB), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_GetAverageHighValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_GetAverageHighValue_Statics::NewProp_InFrequencies_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_GetAverageHighValue_Statics::NewProp_InFrequencies,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_GetAverageHighValue_Statics::NewProp_OutAverageHigh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_GetAverageHighValue_Statics::NewProp_OutAverageHighDB,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_GetAverageHighValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_GetAverageHighValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWindowsAudioCaptureComponent, nullptr, "BP_GetAverageHighValue", nullptr, nullptr, Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_GetAverageHighValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_GetAverageHighValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_GetAverageHighValue_Statics::WindowsAudioCaptureComponent_eventBP_GetAverageHighValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_GetAverageHighValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_GetAverageHighValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_GetAverageHighValue_Statics::WindowsAudioCaptureComponent_eventBP_GetAverageHighValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_GetAverageHighValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_GetAverageHighValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWindowsAudioCaptureComponent::execBP_GetAverageHighValue)
{
	P_GET_TARRAY(float,Z_Param_InFrequencies);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutAverageHigh);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutAverageHighDB);
	P_FINISH;
	P_NATIVE_BEGIN;
	UWindowsAudioCaptureComponent::BP_GetAverageHighValue(Z_Param_InFrequencies,Z_Param_Out_OutAverageHigh,Z_Param_Out_OutAverageHighDB);
	P_NATIVE_END;
}
// End Class UWindowsAudioCaptureComponent Function BP_GetAverageHighValue

// Begin Class UWindowsAudioCaptureComponent Function BP_GetAverageMidValue
struct Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_GetAverageMidValue_Statics
{
	struct WindowsAudioCaptureComponent_eventBP_GetAverageMidValue_Parms
	{
		TArray<float> InFrequencies;
		float OutAverageMid;
		float OutAverageMidDB;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "WindowsAudioCapture | Frequency Values" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n    * This function will return the average value for Mid frequencies (250 to 2000hz) and its corresponding value in decibels.\n    *\n    * @param InFrequencies            Array of float values for different frequencies. Can be obtained by using the \"Get Frequency Array\" function.\n    * @param OutAverageMid            Average value of the frequencies from 250 to 2000.\n    * @param OutAverageMidDB          Average value of the frequencies from 250 to 2000 in decibels.\n    *\n    */" },
#endif
		{ "DisplayName", "Get Average Mid Value" },
		{ "Keywords", "Get Average Mid Value" },
		{ "ModuleRelativePath", "Public/WindowsAudioCaptureComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This function will return the average value for Mid frequencies (250 to 2000hz) and its corresponding value in decibels.\n\n@param InFrequencies            Array of float values for different frequencies. Can be obtained by using the \"Get Frequency Array\" function.\n@param OutAverageMid            Average value of the frequencies from 250 to 2000.\n@param OutAverageMidDB          Average value of the frequencies from 250 to 2000 in decibels." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InFrequencies_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InFrequencies;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OutAverageMid;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OutAverageMidDB;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_GetAverageMidValue_Statics::NewProp_InFrequencies_Inner = { "InFrequencies", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_GetAverageMidValue_Statics::NewProp_InFrequencies = { "InFrequencies", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WindowsAudioCaptureComponent_eventBP_GetAverageMidValue_Parms, InFrequencies), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_GetAverageMidValue_Statics::NewProp_OutAverageMid = { "OutAverageMid", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WindowsAudioCaptureComponent_eventBP_GetAverageMidValue_Parms, OutAverageMid), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_GetAverageMidValue_Statics::NewProp_OutAverageMidDB = { "OutAverageMidDB", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WindowsAudioCaptureComponent_eventBP_GetAverageMidValue_Parms, OutAverageMidDB), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_GetAverageMidValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_GetAverageMidValue_Statics::NewProp_InFrequencies_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_GetAverageMidValue_Statics::NewProp_InFrequencies,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_GetAverageMidValue_Statics::NewProp_OutAverageMid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_GetAverageMidValue_Statics::NewProp_OutAverageMidDB,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_GetAverageMidValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_GetAverageMidValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWindowsAudioCaptureComponent, nullptr, "BP_GetAverageMidValue", nullptr, nullptr, Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_GetAverageMidValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_GetAverageMidValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_GetAverageMidValue_Statics::WindowsAudioCaptureComponent_eventBP_GetAverageMidValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_GetAverageMidValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_GetAverageMidValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_GetAverageMidValue_Statics::WindowsAudioCaptureComponent_eventBP_GetAverageMidValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_GetAverageMidValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_GetAverageMidValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWindowsAudioCaptureComponent::execBP_GetAverageMidValue)
{
	P_GET_TARRAY(float,Z_Param_InFrequencies);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutAverageMid);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutAverageMidDB);
	P_FINISH;
	P_NATIVE_BEGIN;
	UWindowsAudioCaptureComponent::BP_GetAverageMidValue(Z_Param_InFrequencies,Z_Param_Out_OutAverageMid,Z_Param_Out_OutAverageMidDB);
	P_NATIVE_END;
}
// End Class UWindowsAudioCaptureComponent Function BP_GetAverageMidValue

// Begin Class UWindowsAudioCaptureComponent Function BP_GetAverageSubBassValue
struct Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_GetAverageSubBassValue_Statics
{
	struct WindowsAudioCaptureComponent_eventBP_GetAverageSubBassValue_Parms
	{
		TArray<float> InFrequencies;
		float OutAverageSubBass;
		float OutAverageSubBassDB;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "WindowsAudioCapture | Frequency Values" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n    * This function will return the average value for SubBass (20 to 60hz) and its corresponding value in decibels.\n    *\n    * @param InFrequencies            Array of float values for different frequencies. Can be obtained by using the \"Get Frequency Array\" function.\n    * @param OutAverageSubBass        Average value of the frequencies from 20 to 60.\n    * @param OutAverageSubBassDB      Average value of the frequencies from 20 to 60 in decibels.\n    *\n    */" },
#endif
		{ "DisplayName", "Get Average Subbass Value" },
		{ "Keywords", "Get Average Subbass Value" },
		{ "ModuleRelativePath", "Public/WindowsAudioCaptureComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This function will return the average value for SubBass (20 to 60hz) and its corresponding value in decibels.\n\n@param InFrequencies            Array of float values for different frequencies. Can be obtained by using the \"Get Frequency Array\" function.\n@param OutAverageSubBass        Average value of the frequencies from 20 to 60.\n@param OutAverageSubBassDB      Average value of the frequencies from 20 to 60 in decibels." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InFrequencies_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InFrequencies;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OutAverageSubBass;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OutAverageSubBassDB;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_GetAverageSubBassValue_Statics::NewProp_InFrequencies_Inner = { "InFrequencies", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_GetAverageSubBassValue_Statics::NewProp_InFrequencies = { "InFrequencies", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WindowsAudioCaptureComponent_eventBP_GetAverageSubBassValue_Parms, InFrequencies), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_GetAverageSubBassValue_Statics::NewProp_OutAverageSubBass = { "OutAverageSubBass", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WindowsAudioCaptureComponent_eventBP_GetAverageSubBassValue_Parms, OutAverageSubBass), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_GetAverageSubBassValue_Statics::NewProp_OutAverageSubBassDB = { "OutAverageSubBassDB", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WindowsAudioCaptureComponent_eventBP_GetAverageSubBassValue_Parms, OutAverageSubBassDB), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_GetAverageSubBassValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_GetAverageSubBassValue_Statics::NewProp_InFrequencies_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_GetAverageSubBassValue_Statics::NewProp_InFrequencies,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_GetAverageSubBassValue_Statics::NewProp_OutAverageSubBass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_GetAverageSubBassValue_Statics::NewProp_OutAverageSubBassDB,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_GetAverageSubBassValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_GetAverageSubBassValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWindowsAudioCaptureComponent, nullptr, "BP_GetAverageSubBassValue", nullptr, nullptr, Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_GetAverageSubBassValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_GetAverageSubBassValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_GetAverageSubBassValue_Statics::WindowsAudioCaptureComponent_eventBP_GetAverageSubBassValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_GetAverageSubBassValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_GetAverageSubBassValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_GetAverageSubBassValue_Statics::WindowsAudioCaptureComponent_eventBP_GetAverageSubBassValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_GetAverageSubBassValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_GetAverageSubBassValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWindowsAudioCaptureComponent::execBP_GetAverageSubBassValue)
{
	P_GET_TARRAY(float,Z_Param_InFrequencies);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutAverageSubBass);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutAverageSubBassDB);
	P_FINISH;
	P_NATIVE_BEGIN;
	UWindowsAudioCaptureComponent::BP_GetAverageSubBassValue(Z_Param_InFrequencies,Z_Param_Out_OutAverageSubBass,Z_Param_Out_OutAverageSubBassDB);
	P_NATIVE_END;
}
// End Class UWindowsAudioCaptureComponent Function BP_GetAverageSubBassValue

// Begin Class UWindowsAudioCaptureComponent Function BP_GetFrequencyArray
struct Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_GetFrequencyArray_Statics
{
	struct WindowsAudioCaptureComponent_eventBP_GetFrequencyArray_Parms
	{
		TArray<float> OutFrequencies;
		TArray<float> OutLeftChannelFrequencies;
		TArray<float> OutRightChannelFrequencies;
		float inFreqLogBase;
		float inFreqMultiplier;
		float inFreqPower;
		float inFreqOffset;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "WindowsAudioCapture | Frequency Array" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n    * This function will return an Array of Frequencies for all channels, left channel, and right channel.\n    * These parameters allow you to customize how the frequencies are calculated and visualized.\n    *\n    * @param OutFrequencies               Combined frequencies array.\n    * @param OutLeftChannelFrequencies    Left channel frequencies array.\n    * @param OutRightChannelFrequencies   Right channel frequencies array.\n    * @param inFreqLogBase                This controls the base of the logarithm used in the calculation. Increasing this value can make the frequency spectrum appear more compressed. Default: 10\n    * @param inFreqMultiplier             This scales the frequency values. Increasing this value will spread out the frequencies more, making it easier to see differences between them. Default: 0.25\n    * @param inFreqPower                  This raises the frequency values to the specified power. Higher values can exaggerate differences between frequencies. Default: 6\n    * @param inFreqOffset                 This adds an offset to the frequency values. It can be used to adjust the baseline of the spectrum. Default: 0.0\n    *\n    */" },
#endif
		{ "CPP_Default_inFreqLogBase", "10.000000" },
		{ "CPP_Default_inFreqMultiplier", "0.250000" },
		{ "CPP_Default_inFreqOffset", "0.000000" },
		{ "CPP_Default_inFreqPower", "6.000000" },
		{ "DisplayName", "Get Frequency Array" },
		{ "Keywords", "Get Frequency Array" },
		{ "ModuleRelativePath", "Public/WindowsAudioCaptureComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This function will return an Array of Frequencies for all channels, left channel, and right channel.\nThese parameters allow you to customize how the frequencies are calculated and visualized.\n\n@param OutFrequencies               Combined frequencies array.\n@param OutLeftChannelFrequencies    Left channel frequencies array.\n@param OutRightChannelFrequencies   Right channel frequencies array.\n@param inFreqLogBase                This controls the base of the logarithm used in the calculation. Increasing this value can make the frequency spectrum appear more compressed. Default: 10\n@param inFreqMultiplier             This scales the frequency values. Increasing this value will spread out the frequencies more, making it easier to see differences between them. Default: 0.25\n@param inFreqPower                  This raises the frequency values to the specified power. Higher values can exaggerate differences between frequencies. Default: 6\n@param inFreqOffset                 This adds an offset to the frequency values. It can be used to adjust the baseline of the spectrum. Default: 0.0" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OutFrequencies_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutFrequencies;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OutLeftChannelFrequencies_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutLeftChannelFrequencies;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OutRightChannelFrequencies_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutRightChannelFrequencies;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_inFreqLogBase;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_inFreqMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_inFreqPower;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_inFreqOffset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_GetFrequencyArray_Statics::NewProp_OutFrequencies_Inner = { "OutFrequencies", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_GetFrequencyArray_Statics::NewProp_OutFrequencies = { "OutFrequencies", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WindowsAudioCaptureComponent_eventBP_GetFrequencyArray_Parms, OutFrequencies), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_GetFrequencyArray_Statics::NewProp_OutLeftChannelFrequencies_Inner = { "OutLeftChannelFrequencies", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_GetFrequencyArray_Statics::NewProp_OutLeftChannelFrequencies = { "OutLeftChannelFrequencies", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WindowsAudioCaptureComponent_eventBP_GetFrequencyArray_Parms, OutLeftChannelFrequencies), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_GetFrequencyArray_Statics::NewProp_OutRightChannelFrequencies_Inner = { "OutRightChannelFrequencies", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_GetFrequencyArray_Statics::NewProp_OutRightChannelFrequencies = { "OutRightChannelFrequencies", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WindowsAudioCaptureComponent_eventBP_GetFrequencyArray_Parms, OutRightChannelFrequencies), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_GetFrequencyArray_Statics::NewProp_inFreqLogBase = { "inFreqLogBase", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WindowsAudioCaptureComponent_eventBP_GetFrequencyArray_Parms, inFreqLogBase), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_GetFrequencyArray_Statics::NewProp_inFreqMultiplier = { "inFreqMultiplier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WindowsAudioCaptureComponent_eventBP_GetFrequencyArray_Parms, inFreqMultiplier), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_GetFrequencyArray_Statics::NewProp_inFreqPower = { "inFreqPower", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WindowsAudioCaptureComponent_eventBP_GetFrequencyArray_Parms, inFreqPower), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_GetFrequencyArray_Statics::NewProp_inFreqOffset = { "inFreqOffset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WindowsAudioCaptureComponent_eventBP_GetFrequencyArray_Parms, inFreqOffset), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_GetFrequencyArray_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_GetFrequencyArray_Statics::NewProp_OutFrequencies_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_GetFrequencyArray_Statics::NewProp_OutFrequencies,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_GetFrequencyArray_Statics::NewProp_OutLeftChannelFrequencies_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_GetFrequencyArray_Statics::NewProp_OutLeftChannelFrequencies,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_GetFrequencyArray_Statics::NewProp_OutRightChannelFrequencies_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_GetFrequencyArray_Statics::NewProp_OutRightChannelFrequencies,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_GetFrequencyArray_Statics::NewProp_inFreqLogBase,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_GetFrequencyArray_Statics::NewProp_inFreqMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_GetFrequencyArray_Statics::NewProp_inFreqPower,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_GetFrequencyArray_Statics::NewProp_inFreqOffset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_GetFrequencyArray_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_GetFrequencyArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWindowsAudioCaptureComponent, nullptr, "BP_GetFrequencyArray", nullptr, nullptr, Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_GetFrequencyArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_GetFrequencyArray_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_GetFrequencyArray_Statics::WindowsAudioCaptureComponent_eventBP_GetFrequencyArray_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_GetFrequencyArray_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_GetFrequencyArray_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_GetFrequencyArray_Statics::WindowsAudioCaptureComponent_eventBP_GetFrequencyArray_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_GetFrequencyArray()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_GetFrequencyArray_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWindowsAudioCaptureComponent::execBP_GetFrequencyArray)
{
	P_GET_TARRAY_REF(float,Z_Param_Out_OutFrequencies);
	P_GET_TARRAY_REF(float,Z_Param_Out_OutLeftChannelFrequencies);
	P_GET_TARRAY_REF(float,Z_Param_Out_OutRightChannelFrequencies);
	P_GET_PROPERTY(FFloatProperty,Z_Param_inFreqLogBase);
	P_GET_PROPERTY(FFloatProperty,Z_Param_inFreqMultiplier);
	P_GET_PROPERTY(FFloatProperty,Z_Param_inFreqPower);
	P_GET_PROPERTY(FFloatProperty,Z_Param_inFreqOffset);
	P_FINISH;
	P_NATIVE_BEGIN;
	UWindowsAudioCaptureComponent::BP_GetFrequencyArray(Z_Param_Out_OutFrequencies,Z_Param_Out_OutLeftChannelFrequencies,Z_Param_Out_OutRightChannelFrequencies,Z_Param_inFreqLogBase,Z_Param_inFreqMultiplier,Z_Param_inFreqPower,Z_Param_inFreqOffset);
	P_NATIVE_END;
}
// End Class UWindowsAudioCaptureComponent Function BP_GetFrequencyArray

// Begin Class UWindowsAudioCaptureComponent Function BP_GetPeakFrequency
struct Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_GetPeakFrequency_Statics
{
	struct WindowsAudioCaptureComponent_eventBP_GetPeakFrequency_Parms
	{
		TArray<float> InFrequencies;
		float OutPeakFrequency;
		float OutPeakFrequencyDB;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "WindowsAudioCapture | Frequency Values" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n    * This function will return the peak frequency and its value in decibels.\n    *\n    * @param InFrequencies            Array of float values for different frequencies. Can be obtained by using the \"Get Frequency Array\" function.\n    * @param OutPeakFrequency         Frequency with the highest amplitude.\n    * @param OutPeakFrequencyDB       Value of the peak frequency in decibels.\n    *\n    */" },
#endif
		{ "DisplayName", "Get Peak Frequency" },
		{ "Keywords", "Get Peak Frequency" },
		{ "ModuleRelativePath", "Public/WindowsAudioCaptureComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This function will return the peak frequency and its value in decibels.\n\n@param InFrequencies            Array of float values for different frequencies. Can be obtained by using the \"Get Frequency Array\" function.\n@param OutPeakFrequency         Frequency with the highest amplitude.\n@param OutPeakFrequencyDB       Value of the peak frequency in decibels." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InFrequencies_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InFrequencies;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OutPeakFrequency;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OutPeakFrequencyDB;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_GetPeakFrequency_Statics::NewProp_InFrequencies_Inner = { "InFrequencies", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_GetPeakFrequency_Statics::NewProp_InFrequencies = { "InFrequencies", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WindowsAudioCaptureComponent_eventBP_GetPeakFrequency_Parms, InFrequencies), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_GetPeakFrequency_Statics::NewProp_OutPeakFrequency = { "OutPeakFrequency", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WindowsAudioCaptureComponent_eventBP_GetPeakFrequency_Parms, OutPeakFrequency), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_GetPeakFrequency_Statics::NewProp_OutPeakFrequencyDB = { "OutPeakFrequencyDB", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WindowsAudioCaptureComponent_eventBP_GetPeakFrequency_Parms, OutPeakFrequencyDB), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_GetPeakFrequency_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_GetPeakFrequency_Statics::NewProp_InFrequencies_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_GetPeakFrequency_Statics::NewProp_InFrequencies,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_GetPeakFrequency_Statics::NewProp_OutPeakFrequency,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_GetPeakFrequency_Statics::NewProp_OutPeakFrequencyDB,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_GetPeakFrequency_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_GetPeakFrequency_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWindowsAudioCaptureComponent, nullptr, "BP_GetPeakFrequency", nullptr, nullptr, Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_GetPeakFrequency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_GetPeakFrequency_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_GetPeakFrequency_Statics::WindowsAudioCaptureComponent_eventBP_GetPeakFrequency_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_GetPeakFrequency_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_GetPeakFrequency_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_GetPeakFrequency_Statics::WindowsAudioCaptureComponent_eventBP_GetPeakFrequency_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_GetPeakFrequency()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_GetPeakFrequency_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWindowsAudioCaptureComponent::execBP_GetPeakFrequency)
{
	P_GET_TARRAY(float,Z_Param_InFrequencies);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutPeakFrequency);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutPeakFrequencyDB);
	P_FINISH;
	P_NATIVE_BEGIN;
	UWindowsAudioCaptureComponent::BP_GetPeakFrequency(Z_Param_InFrequencies,Z_Param_Out_OutPeakFrequency,Z_Param_Out_OutPeakFrequencyDB);
	P_NATIVE_END;
}
// End Class UWindowsAudioCaptureComponent Function BP_GetPeakFrequency

// Begin Class UWindowsAudioCaptureComponent Function BP_GetSpecificFrequencyValue
struct Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_GetSpecificFrequencyValue_Statics
{
	struct WindowsAudioCaptureComponent_eventBP_GetSpecificFrequencyValue_Parms
	{
		TArray<float> InFrequencies;
		int32 InWantedFrequency;
		float OutFrequencyValue;
		float OutFrequencyValueDB;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "WindowsAudioCapture | Frequency Values" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n    * This function will return the value of a specific frequency and its corresponding value in decibels.\n    *\n    * @param InFrequencies        Array of float values for different frequencies. Can be obtained by using the \"Get Frequency Array\" function.\n    * @param InWantedFrequency    The specific frequency you want to keep from the Frequency Array.\n    * @param OutFrequencyValue    Float value of the requested frequency.\n    * @param OutFrequencyValueDB  Float value of the requested frequency in decibels.\n    *\n    */" },
#endif
		{ "DisplayName", "Get Specific Freq Value" },
		{ "Keywords", "Get Specific Freq Value" },
		{ "ModuleRelativePath", "Public/WindowsAudioCaptureComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This function will return the value of a specific frequency and its corresponding value in decibels.\n\n@param InFrequencies        Array of float values for different frequencies. Can be obtained by using the \"Get Frequency Array\" function.\n@param InWantedFrequency    The specific frequency you want to keep from the Frequency Array.\n@param OutFrequencyValue    Float value of the requested frequency.\n@param OutFrequencyValueDB  Float value of the requested frequency in decibels." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InFrequencies_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InFrequencies;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InWantedFrequency;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OutFrequencyValue;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OutFrequencyValueDB;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_GetSpecificFrequencyValue_Statics::NewProp_InFrequencies_Inner = { "InFrequencies", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_GetSpecificFrequencyValue_Statics::NewProp_InFrequencies = { "InFrequencies", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WindowsAudioCaptureComponent_eventBP_GetSpecificFrequencyValue_Parms, InFrequencies), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_GetSpecificFrequencyValue_Statics::NewProp_InWantedFrequency = { "InWantedFrequency", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WindowsAudioCaptureComponent_eventBP_GetSpecificFrequencyValue_Parms, InWantedFrequency), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_GetSpecificFrequencyValue_Statics::NewProp_OutFrequencyValue = { "OutFrequencyValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WindowsAudioCaptureComponent_eventBP_GetSpecificFrequencyValue_Parms, OutFrequencyValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_GetSpecificFrequencyValue_Statics::NewProp_OutFrequencyValueDB = { "OutFrequencyValueDB", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WindowsAudioCaptureComponent_eventBP_GetSpecificFrequencyValue_Parms, OutFrequencyValueDB), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_GetSpecificFrequencyValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_GetSpecificFrequencyValue_Statics::NewProp_InFrequencies_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_GetSpecificFrequencyValue_Statics::NewProp_InFrequencies,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_GetSpecificFrequencyValue_Statics::NewProp_InWantedFrequency,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_GetSpecificFrequencyValue_Statics::NewProp_OutFrequencyValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_GetSpecificFrequencyValue_Statics::NewProp_OutFrequencyValueDB,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_GetSpecificFrequencyValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_GetSpecificFrequencyValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWindowsAudioCaptureComponent, nullptr, "BP_GetSpecificFrequencyValue", nullptr, nullptr, Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_GetSpecificFrequencyValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_GetSpecificFrequencyValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_GetSpecificFrequencyValue_Statics::WindowsAudioCaptureComponent_eventBP_GetSpecificFrequencyValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_GetSpecificFrequencyValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_GetSpecificFrequencyValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_GetSpecificFrequencyValue_Statics::WindowsAudioCaptureComponent_eventBP_GetSpecificFrequencyValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_GetSpecificFrequencyValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_GetSpecificFrequencyValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWindowsAudioCaptureComponent::execBP_GetSpecificFrequencyValue)
{
	P_GET_TARRAY(float,Z_Param_InFrequencies);
	P_GET_PROPERTY(FIntProperty,Z_Param_InWantedFrequency);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutFrequencyValue);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutFrequencyValueDB);
	P_FINISH;
	P_NATIVE_BEGIN;
	UWindowsAudioCaptureComponent::BP_GetSpecificFrequencyValue(Z_Param_InFrequencies,Z_Param_InWantedFrequency,Z_Param_Out_OutFrequencyValue,Z_Param_Out_OutFrequencyValueDB);
	P_NATIVE_END;
}
// End Class UWindowsAudioCaptureComponent Function BP_GetSpecificFrequencyValue

// Begin Class UWindowsAudioCaptureComponent Function BP_GetTotalEnergy
struct Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_GetTotalEnergy_Statics
{
	struct WindowsAudioCaptureComponent_eventBP_GetTotalEnergy_Parms
	{
		TArray<float> InFrequencies;
		float OutTotalEnergy;
		float OutTotalEnergyDB;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "WindowsAudioCapture | Energy" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n    * This function will return the total energy of the audio signal across all frequencies and its corresponding value in decibels.\n    *\n    * @param InFrequencies            Array of float values for different frequencies. Can be obtained by using the \"Get Frequency Array\" function.\n    * @param OutTotalEnergy           Total energy of the audio signal.\n    * @param OutTotalEnergyDB         Total energy of the audio signal in decibels.\n    *\n    */" },
#endif
		{ "DisplayName", "Get Total Energy" },
		{ "Keywords", "Get Total Energy" },
		{ "ModuleRelativePath", "Public/WindowsAudioCaptureComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This function will return the total energy of the audio signal across all frequencies and its corresponding value in decibels.\n\n@param InFrequencies            Array of float values for different frequencies. Can be obtained by using the \"Get Frequency Array\" function.\n@param OutTotalEnergy           Total energy of the audio signal.\n@param OutTotalEnergyDB         Total energy of the audio signal in decibels." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InFrequencies_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InFrequencies;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OutTotalEnergy;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OutTotalEnergyDB;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_GetTotalEnergy_Statics::NewProp_InFrequencies_Inner = { "InFrequencies", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_GetTotalEnergy_Statics::NewProp_InFrequencies = { "InFrequencies", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WindowsAudioCaptureComponent_eventBP_GetTotalEnergy_Parms, InFrequencies), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_GetTotalEnergy_Statics::NewProp_OutTotalEnergy = { "OutTotalEnergy", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WindowsAudioCaptureComponent_eventBP_GetTotalEnergy_Parms, OutTotalEnergy), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_GetTotalEnergy_Statics::NewProp_OutTotalEnergyDB = { "OutTotalEnergyDB", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WindowsAudioCaptureComponent_eventBP_GetTotalEnergy_Parms, OutTotalEnergyDB), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_GetTotalEnergy_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_GetTotalEnergy_Statics::NewProp_InFrequencies_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_GetTotalEnergy_Statics::NewProp_InFrequencies,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_GetTotalEnergy_Statics::NewProp_OutTotalEnergy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_GetTotalEnergy_Statics::NewProp_OutTotalEnergyDB,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_GetTotalEnergy_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_GetTotalEnergy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWindowsAudioCaptureComponent, nullptr, "BP_GetTotalEnergy", nullptr, nullptr, Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_GetTotalEnergy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_GetTotalEnergy_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_GetTotalEnergy_Statics::WindowsAudioCaptureComponent_eventBP_GetTotalEnergy_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_GetTotalEnergy_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_GetTotalEnergy_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_GetTotalEnergy_Statics::WindowsAudioCaptureComponent_eventBP_GetTotalEnergy_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_GetTotalEnergy()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_GetTotalEnergy_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWindowsAudioCaptureComponent::execBP_GetTotalEnergy)
{
	P_GET_TARRAY(float,Z_Param_InFrequencies);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutTotalEnergy);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutTotalEnergyDB);
	P_FINISH;
	P_NATIVE_BEGIN;
	UWindowsAudioCaptureComponent::BP_GetTotalEnergy(Z_Param_InFrequencies,Z_Param_Out_OutTotalEnergy,Z_Param_Out_OutTotalEnergyDB);
	P_NATIVE_END;
}
// End Class UWindowsAudioCaptureComponent Function BP_GetTotalEnergy

// Begin Class UWindowsAudioCaptureComponent Function BP_InterpolateValue
struct Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_InterpolateValue_Statics
{
	struct WindowsAudioCaptureComponent_eventBP_InterpolateValue_Parms
	{
		float InputValue;
		float InterpSpeed;
		float DeltaTime;
		float OutInterpolatedValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "WindowsAudioCapture | Utilities" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n    * This function performs interpolation of a value over time.\n    *\n    * @param InputValue             The input value of the float.\n    * @param InterpSpeed            The interpolation speed lower=smoother, higher=more responsive, if set to 0 returns the input value. \n    * @param DeltaTime              The time since the last tick.\n    * @param OutInterpolatedValue   The interpolated float value.\n    *\n    */" },
#endif
		{ "DisplayName", "Interpolate Value" },
		{ "Keywords", "Interpolate Value" },
		{ "ModuleRelativePath", "Public/WindowsAudioCaptureComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This function performs interpolation of a value over time.\n\n@param InputValue             The input value of the float.\n@param InterpSpeed            The interpolation speed lower=smoother, higher=more responsive, if set to 0 returns the input value.\n@param DeltaTime              The time since the last tick.\n@param OutInterpolatedValue   The interpolated float value." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InputValue;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InterpSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OutInterpolatedValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_InterpolateValue_Statics::NewProp_InputValue = { "InputValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WindowsAudioCaptureComponent_eventBP_InterpolateValue_Parms, InputValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_InterpolateValue_Statics::NewProp_InterpSpeed = { "InterpSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WindowsAudioCaptureComponent_eventBP_InterpolateValue_Parms, InterpSpeed), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_InterpolateValue_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WindowsAudioCaptureComponent_eventBP_InterpolateValue_Parms, DeltaTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_InterpolateValue_Statics::NewProp_OutInterpolatedValue = { "OutInterpolatedValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WindowsAudioCaptureComponent_eventBP_InterpolateValue_Parms, OutInterpolatedValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_InterpolateValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_InterpolateValue_Statics::NewProp_InputValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_InterpolateValue_Statics::NewProp_InterpSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_InterpolateValue_Statics::NewProp_DeltaTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_InterpolateValue_Statics::NewProp_OutInterpolatedValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_InterpolateValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_InterpolateValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWindowsAudioCaptureComponent, nullptr, "BP_InterpolateValue", nullptr, nullptr, Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_InterpolateValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_InterpolateValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_InterpolateValue_Statics::WindowsAudioCaptureComponent_eventBP_InterpolateValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_InterpolateValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_InterpolateValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_InterpolateValue_Statics::WindowsAudioCaptureComponent_eventBP_InterpolateValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_InterpolateValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_InterpolateValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWindowsAudioCaptureComponent::execBP_InterpolateValue)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InputValue);
	P_GET_PROPERTY(FFloatProperty,Z_Param_InterpSpeed);
	P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutInterpolatedValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	UWindowsAudioCaptureComponent::BP_InterpolateValue(Z_Param_InputValue,Z_Param_InterpSpeed,Z_Param_DeltaTime,Z_Param_Out_OutInterpolatedValue);
	P_NATIVE_END;
}
// End Class UWindowsAudioCaptureComponent Function BP_InterpolateValue

// Begin Class UWindowsAudioCaptureComponent Function BP_NormalizeFrequencyArray
struct Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_NormalizeFrequencyArray_Statics
{
	struct WindowsAudioCaptureComponent_eventBP_NormalizeFrequencyArray_Parms
	{
		TArray<float> InFrequencies;
		TArray<float> OutNormalizedFrequencies;
		float RangeMin;
		float RangeMax;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "WindowsAudioCapture | Frequency Array" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n    * This function normalizes the frequency array to a specified range.\n    *\n    * @param InFrequencies            Array of float values for different frequencies. Can be obtained by using the \"Get Frequency Array\" function.\n    * @param OutNormalizedFrequencies Normalized frequency array.\n    * @param RangeMin                 Minimum value of the normalized range.\n    * @param RangeMax                 Maximum value of the normalized range.\n    *\n    */" },
#endif
		{ "CPP_Default_RangeMax", "1.000000" },
		{ "CPP_Default_RangeMin", "0.000000" },
		{ "DisplayName", "Normalize Frequency Array" },
		{ "Keywords", "Normalize Frequency Array" },
		{ "ModuleRelativePath", "Public/WindowsAudioCaptureComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This function normalizes the frequency array to a specified range.\n\n@param InFrequencies            Array of float values for different frequencies. Can be obtained by using the \"Get Frequency Array\" function.\n@param OutNormalizedFrequencies Normalized frequency array.\n@param RangeMin                 Minimum value of the normalized range.\n@param RangeMax                 Maximum value of the normalized range." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InFrequencies_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InFrequencies;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OutNormalizedFrequencies_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutNormalizedFrequencies;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RangeMin;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RangeMax;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_NormalizeFrequencyArray_Statics::NewProp_InFrequencies_Inner = { "InFrequencies", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_NormalizeFrequencyArray_Statics::NewProp_InFrequencies = { "InFrequencies", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WindowsAudioCaptureComponent_eventBP_NormalizeFrequencyArray_Parms, InFrequencies), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_NormalizeFrequencyArray_Statics::NewProp_OutNormalizedFrequencies_Inner = { "OutNormalizedFrequencies", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_NormalizeFrequencyArray_Statics::NewProp_OutNormalizedFrequencies = { "OutNormalizedFrequencies", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WindowsAudioCaptureComponent_eventBP_NormalizeFrequencyArray_Parms, OutNormalizedFrequencies), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_NormalizeFrequencyArray_Statics::NewProp_RangeMin = { "RangeMin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WindowsAudioCaptureComponent_eventBP_NormalizeFrequencyArray_Parms, RangeMin), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_NormalizeFrequencyArray_Statics::NewProp_RangeMax = { "RangeMax", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WindowsAudioCaptureComponent_eventBP_NormalizeFrequencyArray_Parms, RangeMax), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_NormalizeFrequencyArray_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_NormalizeFrequencyArray_Statics::NewProp_InFrequencies_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_NormalizeFrequencyArray_Statics::NewProp_InFrequencies,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_NormalizeFrequencyArray_Statics::NewProp_OutNormalizedFrequencies_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_NormalizeFrequencyArray_Statics::NewProp_OutNormalizedFrequencies,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_NormalizeFrequencyArray_Statics::NewProp_RangeMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_NormalizeFrequencyArray_Statics::NewProp_RangeMax,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_NormalizeFrequencyArray_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_NormalizeFrequencyArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWindowsAudioCaptureComponent, nullptr, "BP_NormalizeFrequencyArray", nullptr, nullptr, Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_NormalizeFrequencyArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_NormalizeFrequencyArray_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_NormalizeFrequencyArray_Statics::WindowsAudioCaptureComponent_eventBP_NormalizeFrequencyArray_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_NormalizeFrequencyArray_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_NormalizeFrequencyArray_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_NormalizeFrequencyArray_Statics::WindowsAudioCaptureComponent_eventBP_NormalizeFrequencyArray_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_NormalizeFrequencyArray()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_NormalizeFrequencyArray_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWindowsAudioCaptureComponent::execBP_NormalizeFrequencyArray)
{
	P_GET_TARRAY(float,Z_Param_InFrequencies);
	P_GET_TARRAY_REF(float,Z_Param_Out_OutNormalizedFrequencies);
	P_GET_PROPERTY(FFloatProperty,Z_Param_RangeMin);
	P_GET_PROPERTY(FFloatProperty,Z_Param_RangeMax);
	P_FINISH;
	P_NATIVE_BEGIN;
	UWindowsAudioCaptureComponent::BP_NormalizeFrequencyArray(Z_Param_InFrequencies,Z_Param_Out_OutNormalizedFrequencies,Z_Param_RangeMin,Z_Param_RangeMax);
	P_NATIVE_END;
}
// End Class UWindowsAudioCaptureComponent Function BP_NormalizeFrequencyArray

// Begin Class UWindowsAudioCaptureComponent
void UWindowsAudioCaptureComponent::StaticRegisterNativesUWindowsAudioCaptureComponent()
{
	UClass* Class = UWindowsAudioCaptureComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "BP_ApplyDynamicRangeCompression", &UWindowsAudioCaptureComponent::execBP_ApplyDynamicRangeCompression },
		{ "BP_GetAverageBassValue", &UWindowsAudioCaptureComponent::execBP_GetAverageBassValue },
		{ "BP_GetAverageFrequencyValueInRange", &UWindowsAudioCaptureComponent::execBP_GetAverageFrequencyValueInRange },
		{ "BP_GetAverageHighValue", &UWindowsAudioCaptureComponent::execBP_GetAverageHighValue },
		{ "BP_GetAverageMidValue", &UWindowsAudioCaptureComponent::execBP_GetAverageMidValue },
		{ "BP_GetAverageSubBassValue", &UWindowsAudioCaptureComponent::execBP_GetAverageSubBassValue },
		{ "BP_GetFrequencyArray", &UWindowsAudioCaptureComponent::execBP_GetFrequencyArray },
		{ "BP_GetPeakFrequency", &UWindowsAudioCaptureComponent::execBP_GetPeakFrequency },
		{ "BP_GetSpecificFrequencyValue", &UWindowsAudioCaptureComponent::execBP_GetSpecificFrequencyValue },
		{ "BP_GetTotalEnergy", &UWindowsAudioCaptureComponent::execBP_GetTotalEnergy },
		{ "BP_InterpolateValue", &UWindowsAudioCaptureComponent::execBP_InterpolateValue },
		{ "BP_NormalizeFrequencyArray", &UWindowsAudioCaptureComponent::execBP_NormalizeFrequencyArray },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWindowsAudioCaptureComponent);
UClass* Z_Construct_UClass_UWindowsAudioCaptureComponent_NoRegister()
{
	return UWindowsAudioCaptureComponent::StaticClass();
}
struct Z_Construct_UClass_UWindowsAudioCaptureComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Audio" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n* This Component starts a Listener that captures frequency information from the Windows Default Audio Device.\n* You need to have it inside your Blueprint in order to call \"Get Frequency Array\" function.\n*/" },
#endif
		{ "DisplayName", "Windows Audio Capture" },
		{ "IncludePath", "WindowsAudioCaptureComponent.h" },
		{ "ModuleRelativePath", "Public/WindowsAudioCaptureComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This Component starts a Listener that captures frequency information from the Windows Default Audio Device.\nYou need to have it inside your Blueprint in order to call \"Get Frequency Array\" function." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_ApplyDynamicRangeCompression, "BP_ApplyDynamicRangeCompression" }, // 2118849289
		{ &Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_GetAverageBassValue, "BP_GetAverageBassValue" }, // 1795822230
		{ &Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_GetAverageFrequencyValueInRange, "BP_GetAverageFrequencyValueInRange" }, // 3541298591
		{ &Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_GetAverageHighValue, "BP_GetAverageHighValue" }, // 1365449783
		{ &Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_GetAverageMidValue, "BP_GetAverageMidValue" }, // 225117946
		{ &Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_GetAverageSubBassValue, "BP_GetAverageSubBassValue" }, // 155504400
		{ &Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_GetFrequencyArray, "BP_GetFrequencyArray" }, // 696368062
		{ &Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_GetPeakFrequency, "BP_GetPeakFrequency" }, // 943756886
		{ &Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_GetSpecificFrequencyValue, "BP_GetSpecificFrequencyValue" }, // 372252820
		{ &Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_GetTotalEnergy, "BP_GetTotalEnergy" }, // 1996254166
		{ &Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_InterpolateValue, "BP_InterpolateValue" }, // 2187943528
		{ &Z_Construct_UFunction_UWindowsAudioCaptureComponent_BP_NormalizeFrequencyArray, "BP_NormalizeFrequencyArray" }, // 1751490055
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWindowsAudioCaptureComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UWindowsAudioCaptureComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_WindowsAudioCapture,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWindowsAudioCaptureComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWindowsAudioCaptureComponent_Statics::ClassParams = {
	&UWindowsAudioCaptureComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWindowsAudioCaptureComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UWindowsAudioCaptureComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWindowsAudioCaptureComponent()
{
	if (!Z_Registration_Info_UClass_UWindowsAudioCaptureComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWindowsAudioCaptureComponent.OuterSingleton, Z_Construct_UClass_UWindowsAudioCaptureComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWindowsAudioCaptureComponent.OuterSingleton;
}
template<> WINDOWSAUDIOCAPTURE_API UClass* StaticClass<UWindowsAudioCaptureComponent>()
{
	return UWindowsAudioCaptureComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWindowsAudioCaptureComponent);
// End Class UWindowsAudioCaptureComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_MyProjectWAC_Plugins_WindowsAudioCapture_Source_WindowsAudioCapture_Public_WindowsAudioCaptureComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWindowsAudioCaptureComponent, UWindowsAudioCaptureComponent::StaticClass, TEXT("UWindowsAudioCaptureComponent"), &Z_Registration_Info_UClass_UWindowsAudioCaptureComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWindowsAudioCaptureComponent), 4103203924U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProjectWAC_Plugins_WindowsAudioCapture_Source_WindowsAudioCapture_Public_WindowsAudioCaptureComponent_h_2749053855(TEXT("/Script/WindowsAudioCapture"),
	Z_CompiledInDeferFile_FID_MyProjectWAC_Plugins_WindowsAudioCapture_Source_WindowsAudioCapture_Public_WindowsAudioCaptureComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyProjectWAC_Plugins_WindowsAudioCapture_Source_WindowsAudioCapture_Public_WindowsAudioCaptureComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
