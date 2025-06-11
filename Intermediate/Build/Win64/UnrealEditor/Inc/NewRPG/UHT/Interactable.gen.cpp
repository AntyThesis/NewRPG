// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NewRPG/Interactable.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractable() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
NEWRPG_API UClass* Z_Construct_UClass_UInteractable();
NEWRPG_API UClass* Z_Construct_UClass_UInteractable_NoRegister();
UPackage* Z_Construct_UPackage__Script_NewRPG();
// End Cross Module References

// Begin Interface UInteractable
void UInteractable::StaticRegisterNativesUInteractable()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInteractable);
UClass* Z_Construct_UClass_UInteractable_NoRegister()
{
	return UInteractable::StaticClass();
}
struct Z_Construct_UClass_UInteractable_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Interactable.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IInteractable>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInteractable_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_NewRPG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractable_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInteractable_Statics::ClassParams = {
	&UInteractable::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractable_Statics::Class_MetaDataParams), Z_Construct_UClass_UInteractable_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInteractable()
{
	if (!Z_Registration_Info_UClass_UInteractable.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInteractable.OuterSingleton, Z_Construct_UClass_UInteractable_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInteractable.OuterSingleton;
}
template<> NEWRPG_API UClass* StaticClass<UInteractable>()
{
	return UInteractable::StaticClass();
}
UInteractable::UInteractable(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInteractable);
UInteractable::~UInteractable() {}
// End Interface UInteractable

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_NewRPG_Source_NewRPG_Interactable_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInteractable, UInteractable::StaticClass, TEXT("UInteractable"), &Z_Registration_Info_UClass_UInteractable, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInteractable), 3384606801U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_NewRPG_Source_NewRPG_Interactable_h_1919661289(TEXT("/Script/NewRPG"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_NewRPG_Source_NewRPG_Interactable_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_NewRPG_Source_NewRPG_Interactable_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
