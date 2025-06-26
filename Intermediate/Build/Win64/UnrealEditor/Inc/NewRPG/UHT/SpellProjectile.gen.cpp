// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NewRPG/SpellProjectile.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpellProjectile() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UProjectileMovementComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
NEWRPG_API UClass* Z_Construct_UClass_ASpellProjectile();
NEWRPG_API UClass* Z_Construct_UClass_ASpellProjectile_NoRegister();
UPackage* Z_Construct_UPackage__Script_NewRPG();
// End Cross Module References

// Begin Class ASpellProjectile
void ASpellProjectile::StaticRegisterNativesASpellProjectile()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASpellProjectile);
UClass* Z_Construct_UClass_ASpellProjectile_NoRegister()
{
	return ASpellProjectile::StaticClass();
}
struct Z_Construct_UClass_ASpellProjectile_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SpellProjectile.h" },
		{ "ModuleRelativePath", "SpellProjectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileMovementComponent_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SpellProjectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshComponent_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SpellProjectile.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ProjectileMovementComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMeshComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASpellProjectile>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASpellProjectile_Statics::NewProp_ProjectileMovementComponent = { "ProjectileMovementComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpellProjectile, ProjectileMovementComponent), Z_Construct_UClass_UProjectileMovementComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectileMovementComponent_MetaData), NewProp_ProjectileMovementComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASpellProjectile_Statics::NewProp_StaticMeshComponent = { "StaticMeshComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpellProjectile, StaticMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticMeshComponent_MetaData), NewProp_StaticMeshComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASpellProjectile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpellProjectile_Statics::NewProp_ProjectileMovementComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpellProjectile_Statics::NewProp_StaticMeshComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASpellProjectile_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ASpellProjectile_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_NewRPG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASpellProjectile_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASpellProjectile_Statics::ClassParams = {
	&ASpellProjectile::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ASpellProjectile_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ASpellProjectile_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASpellProjectile_Statics::Class_MetaDataParams), Z_Construct_UClass_ASpellProjectile_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASpellProjectile()
{
	if (!Z_Registration_Info_UClass_ASpellProjectile.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASpellProjectile.OuterSingleton, Z_Construct_UClass_ASpellProjectile_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASpellProjectile.OuterSingleton;
}
template<> NEWRPG_API UClass* StaticClass<ASpellProjectile>()
{
	return ASpellProjectile::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASpellProjectile);
ASpellProjectile::~ASpellProjectile() {}
// End Class ASpellProjectile

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_NewRPG_Source_NewRPG_SpellProjectile_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASpellProjectile, ASpellProjectile::StaticClass, TEXT("ASpellProjectile"), &Z_Registration_Info_UClass_ASpellProjectile, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASpellProjectile), 2101911943U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_NewRPG_Source_NewRPG_SpellProjectile_h_3551115850(TEXT("/Script/NewRPG"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_NewRPG_Source_NewRPG_SpellProjectile_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_NewRPG_Source_NewRPG_SpellProjectile_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
