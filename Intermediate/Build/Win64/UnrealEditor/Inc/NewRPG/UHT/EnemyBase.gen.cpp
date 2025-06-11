// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NewRPG/EnemyBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemyBase() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
NEWRPG_API UClass* Z_Construct_UClass_AEnemyBase();
NEWRPG_API UClass* Z_Construct_UClass_AEnemyBase_NoRegister();
NEWRPG_API UClass* Z_Construct_UClass_UHealthComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_NewRPG();
// End Cross Module References

// Begin Class AEnemyBase
void AEnemyBase::StaticRegisterNativesAEnemyBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEnemyBase);
UClass* Z_Construct_UClass_AEnemyBase_NoRegister()
{
	return AEnemyBase::StaticClass();
}
struct Z_Construct_UClass_AEnemyBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "EnemyBase.h" },
		{ "ModuleRelativePath", "EnemyBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HealthComponent_MetaData[] = {
		{ "Category", "EnemyBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "EnemyBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HealthComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemyBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemyBase_Statics::NewProp_HealthComponent = { "HealthComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemyBase, HealthComponent), Z_Construct_UClass_UHealthComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HealthComponent_MetaData), NewProp_HealthComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEnemyBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyBase_Statics::NewProp_HealthComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AEnemyBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_NewRPG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AEnemyBase_Statics::ClassParams = {
	&AEnemyBase::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AEnemyBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyBase_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyBase_Statics::Class_MetaDataParams), Z_Construct_UClass_AEnemyBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AEnemyBase()
{
	if (!Z_Registration_Info_UClass_AEnemyBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEnemyBase.OuterSingleton, Z_Construct_UClass_AEnemyBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AEnemyBase.OuterSingleton;
}
template<> NEWRPG_API UClass* StaticClass<AEnemyBase>()
{
	return AEnemyBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemyBase);
AEnemyBase::~AEnemyBase() {}
// End Class AEnemyBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_NewRPG_Source_NewRPG_EnemyBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AEnemyBase, AEnemyBase::StaticClass, TEXT("AEnemyBase"), &Z_Registration_Info_UClass_AEnemyBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEnemyBase), 653325323U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_NewRPG_Source_NewRPG_EnemyBase_h_1309286410(TEXT("/Script/NewRPG"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_NewRPG_Source_NewRPG_EnemyBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_NewRPG_Source_NewRPG_EnemyBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
