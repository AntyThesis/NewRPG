// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NewRPG/FireBallSpellComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFireBallSpellComponent() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
NEWRPG_API UClass* Z_Construct_UClass_ASpellProjectile_NoRegister();
NEWRPG_API UClass* Z_Construct_UClass_UBasicSpellComponent();
NEWRPG_API UClass* Z_Construct_UClass_UFireBallSpellComponent();
NEWRPG_API UClass* Z_Construct_UClass_UFireBallSpellComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_NewRPG();
// End Cross Module References

// Begin Class UFireBallSpellComponent
void UFireBallSpellComponent::StaticRegisterNativesUFireBallSpellComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFireBallSpellComponent);
UClass* Z_Construct_UClass_UFireBallSpellComponent_NoRegister()
{
	return UFireBallSpellComponent::StaticClass();
}
struct Z_Construct_UClass_UFireBallSpellComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "FireBallSpellComponent.h" },
		{ "ModuleRelativePath", "FireBallSpellComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileClass_MetaData[] = {
		{ "Category", "Spell" },
		{ "ModuleRelativePath", "FireBallSpellComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ProjectileClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFireBallSpellComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UFireBallSpellComponent_Statics::NewProp_ProjectileClass = { "ProjectileClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFireBallSpellComponent, ProjectileClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ASpellProjectile_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectileClass_MetaData), NewProp_ProjectileClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFireBallSpellComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFireBallSpellComponent_Statics::NewProp_ProjectileClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFireBallSpellComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UFireBallSpellComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBasicSpellComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_NewRPG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFireBallSpellComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFireBallSpellComponent_Statics::ClassParams = {
	&UFireBallSpellComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UFireBallSpellComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UFireBallSpellComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFireBallSpellComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UFireBallSpellComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFireBallSpellComponent()
{
	if (!Z_Registration_Info_UClass_UFireBallSpellComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFireBallSpellComponent.OuterSingleton, Z_Construct_UClass_UFireBallSpellComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFireBallSpellComponent.OuterSingleton;
}
template<> NEWRPG_API UClass* StaticClass<UFireBallSpellComponent>()
{
	return UFireBallSpellComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFireBallSpellComponent);
UFireBallSpellComponent::~UFireBallSpellComponent() {}
// End Class UFireBallSpellComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_NewRPG_Source_NewRPG_FireBallSpellComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFireBallSpellComponent, UFireBallSpellComponent::StaticClass, TEXT("UFireBallSpellComponent"), &Z_Registration_Info_UClass_UFireBallSpellComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFireBallSpellComponent), 1039861428U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_NewRPG_Source_NewRPG_FireBallSpellComponent_h_3033408959(TEXT("/Script/NewRPG"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_NewRPG_Source_NewRPG_FireBallSpellComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_NewRPG_Source_NewRPG_FireBallSpellComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
