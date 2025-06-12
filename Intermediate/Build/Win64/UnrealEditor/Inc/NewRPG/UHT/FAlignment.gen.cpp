// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NewRPG/FAlignment.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFAlignment() {}

// Begin Cross Module References
NEWRPG_API UScriptStruct* Z_Construct_UScriptStruct_FAlignment();
UPackage* Z_Construct_UPackage__Script_NewRPG();
// End Cross Module References

// Begin ScriptStruct FAlignment
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Alignment;
class UScriptStruct* FAlignment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Alignment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Alignment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAlignment, (UObject*)Z_Construct_UPackage__Script_NewRPG(), TEXT("Alignment"));
	}
	return Z_Registration_Info_UScriptStruct_Alignment.OuterSingleton;
}
template<> NEWRPG_API UScriptStruct* StaticStruct<FAlignment>()
{
	return FAlignment::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAlignment_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "ModuleRelativePath", "FAlignment.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RedAlignment_MetaData[] = {
		{ "Category", "AlignmentStats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Declare the member variables that belong to the FAlignment structure\n" },
#endif
		{ "ModuleRelativePath", "FAlignment.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Declare the member variables that belong to the FAlignment structure" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GreenAlignment_MetaData[] = {
		{ "Category", "AlignmentStats" },
		{ "ModuleRelativePath", "FAlignment.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlueAlignment_MetaData[] = {
		{ "Category", "AlignmentStats" },
		{ "ModuleRelativePath", "FAlignment.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_YellowAlignment_MetaData[] = {
		{ "Category", "AlignmentStats" },
		{ "ModuleRelativePath", "FAlignment.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RedAlignment;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GreenAlignment;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BlueAlignment;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_YellowAlignment;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAlignment>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAlignment_Statics::NewProp_RedAlignment = { "RedAlignment", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlignment, RedAlignment), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RedAlignment_MetaData), NewProp_RedAlignment_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAlignment_Statics::NewProp_GreenAlignment = { "GreenAlignment", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlignment, GreenAlignment), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GreenAlignment_MetaData), NewProp_GreenAlignment_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAlignment_Statics::NewProp_BlueAlignment = { "BlueAlignment", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlignment, BlueAlignment), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlueAlignment_MetaData), NewProp_BlueAlignment_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAlignment_Statics::NewProp_YellowAlignment = { "YellowAlignment", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlignment, YellowAlignment), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_YellowAlignment_MetaData), NewProp_YellowAlignment_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAlignment_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlignment_Statics::NewProp_RedAlignment,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlignment_Statics::NewProp_GreenAlignment,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlignment_Statics::NewProp_BlueAlignment,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlignment_Statics::NewProp_YellowAlignment,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlignment_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAlignment_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NewRPG,
	nullptr,
	&NewStructOps,
	"Alignment",
	Z_Construct_UScriptStruct_FAlignment_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlignment_Statics::PropPointers),
	sizeof(FAlignment),
	alignof(FAlignment),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlignment_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAlignment_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAlignment()
{
	if (!Z_Registration_Info_UScriptStruct_Alignment.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Alignment.InnerSingleton, Z_Construct_UScriptStruct_FAlignment_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_Alignment.InnerSingleton;
}
// End ScriptStruct FAlignment

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_NewRPG_Source_NewRPG_FAlignment_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAlignment::StaticStruct, Z_Construct_UScriptStruct_FAlignment_Statics::NewStructOps, TEXT("Alignment"), &Z_Registration_Info_UScriptStruct_Alignment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAlignment), 534200981U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_NewRPG_Source_NewRPG_FAlignment_h_1493091288(TEXT("/Script/NewRPG"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Unreal_Projects_NewRPG_Source_NewRPG_FAlignment_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_NewRPG_Source_NewRPG_FAlignment_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
