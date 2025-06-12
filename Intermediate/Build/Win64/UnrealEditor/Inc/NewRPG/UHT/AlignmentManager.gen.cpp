// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NewRPG/AlignmentManager.h"
#include "NewRPG/FAlignment.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAlignmentManager() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
NEWRPG_API UClass* Z_Construct_UClass_AAlignmentManager();
NEWRPG_API UClass* Z_Construct_UClass_AAlignmentManager_NoRegister();
NEWRPG_API UScriptStruct* Z_Construct_UScriptStruct_FAlignment();
UPackage* Z_Construct_UPackage__Script_NewRPG();
// End Cross Module References

// Begin Class AAlignmentManager
void AAlignmentManager::StaticRegisterNativesAAlignmentManager()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAlignmentManager);
UClass* Z_Construct_UClass_AAlignmentManager_NoRegister()
{
	return AAlignmentManager::StaticClass();
}
struct Z_Construct_UClass_AAlignmentManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "AlignmentManager.h" },
		{ "ModuleRelativePath", "AlignmentManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AlignmentProperties_MetaData[] = {
		{ "Category", "AlignmentStats" },
		{ "ModuleRelativePath", "AlignmentManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AlignmentProperties;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAlignmentManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AAlignmentManager_Statics::NewProp_AlignmentProperties = { "AlignmentProperties", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAlignmentManager, AlignmentProperties), Z_Construct_UScriptStruct_FAlignment, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AlignmentProperties_MetaData), NewProp_AlignmentProperties_MetaData) }; // 534200981
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAlignmentManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAlignmentManager_Statics::NewProp_AlignmentProperties,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAlignmentManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AAlignmentManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_NewRPG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAlignmentManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AAlignmentManager_Statics::ClassParams = {
	&AAlignmentManager::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AAlignmentManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AAlignmentManager_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAlignmentManager_Statics::Class_MetaDataParams), Z_Construct_UClass_AAlignmentManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AAlignmentManager()
{
	if (!Z_Registration_Info_UClass_AAlignmentManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAlignmentManager.OuterSingleton, Z_Construct_UClass_AAlignmentManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AAlignmentManager.OuterSingleton;
}
template<> NEWRPG_API UClass* StaticClass<AAlignmentManager>()
{
	return AAlignmentManager::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AAlignmentManager);
AAlignmentManager::~AAlignmentManager() {}
// End Class AAlignmentManager

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_NewRPG_Source_NewRPG_AlignmentManager_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAlignmentManager, AAlignmentManager::StaticClass, TEXT("AAlignmentManager"), &Z_Registration_Info_UClass_AAlignmentManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAlignmentManager), 667850458U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_NewRPG_Source_NewRPG_AlignmentManager_h_3662740957(TEXT("/Script/NewRPG"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_NewRPG_Source_NewRPG_AlignmentManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_NewRPG_Source_NewRPG_AlignmentManager_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
