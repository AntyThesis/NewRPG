// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NewRPG/NewRPGGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNewRPGGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
NEWRPG_API UClass* Z_Construct_UClass_ANewRPGGameMode();
NEWRPG_API UClass* Z_Construct_UClass_ANewRPGGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_NewRPG();
// End Cross Module References

// Begin Class ANewRPGGameMode
void ANewRPGGameMode::StaticRegisterNativesANewRPGGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANewRPGGameMode);
UClass* Z_Construct_UClass_ANewRPGGameMode_NoRegister()
{
	return ANewRPGGameMode::StaticClass();
}
struct Z_Construct_UClass_ANewRPGGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "NewRPGGameMode.h" },
		{ "ModuleRelativePath", "NewRPGGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANewRPGGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ANewRPGGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_NewRPG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANewRPGGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ANewRPGGameMode_Statics::ClassParams = {
	&ANewRPGGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANewRPGGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ANewRPGGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ANewRPGGameMode()
{
	if (!Z_Registration_Info_UClass_ANewRPGGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANewRPGGameMode.OuterSingleton, Z_Construct_UClass_ANewRPGGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ANewRPGGameMode.OuterSingleton;
}
template<> NEWRPG_API UClass* StaticClass<ANewRPGGameMode>()
{
	return ANewRPGGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ANewRPGGameMode);
ANewRPGGameMode::~ANewRPGGameMode() {}
// End Class ANewRPGGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_NewRPG_Source_NewRPG_NewRPGGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ANewRPGGameMode, ANewRPGGameMode::StaticClass, TEXT("ANewRPGGameMode"), &Z_Registration_Info_UClass_ANewRPGGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANewRPGGameMode), 2165224548U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_NewRPG_Source_NewRPG_NewRPGGameMode_h_762823350(TEXT("/Script/NewRPG"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_NewRPG_Source_NewRPG_NewRPGGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_NewRPG_Source_NewRPG_NewRPGGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
