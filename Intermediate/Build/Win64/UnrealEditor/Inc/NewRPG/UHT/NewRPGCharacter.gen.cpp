// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NewRPG/NewRPGCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNewRPGCharacter() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
NEWRPG_API UClass* Z_Construct_UClass_ANewRPGCharacter();
NEWRPG_API UClass* Z_Construct_UClass_ANewRPGCharacter_NoRegister();
NEWRPG_API UClass* Z_Construct_UClass_UAlignmentComponent_NoRegister();
NEWRPG_API UClass* Z_Construct_UClass_UEXPComponent_NoRegister();
NEWRPG_API UClass* Z_Construct_UClass_UHealthComponent_NoRegister();
NEWRPG_API UClass* Z_Construct_UClass_UInventoryComponent_NoRegister();
NEWRPG_API UClass* Z_Construct_UClass_UManaComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_NewRPG();
// End Cross Module References

// Begin Class ANewRPGCharacter Function SphereOverlap
struct Z_Construct_UFunction_ANewRPGCharacter_SphereOverlap_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "NewRPGCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANewRPGCharacter_SphereOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANewRPGCharacter, nullptr, "SphereOverlap", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANewRPGCharacter_SphereOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANewRPGCharacter_SphereOverlap_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ANewRPGCharacter_SphereOverlap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANewRPGCharacter_SphereOverlap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANewRPGCharacter::execSphereOverlap)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SphereOverlap();
	P_NATIVE_END;
}
// End Class ANewRPGCharacter Function SphereOverlap

// Begin Class ANewRPGCharacter
void ANewRPGCharacter::StaticRegisterNativesANewRPGCharacter()
{
	UClass* Class = ANewRPGCharacter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SphereOverlap", &ANewRPGCharacter::execSphereOverlap },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANewRPGCharacter);
UClass* Z_Construct_UClass_ANewRPGCharacter_NoRegister()
{
	return ANewRPGCharacter::StaticClass();
}
struct Z_Construct_UClass_ANewRPGCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "NewRPGCharacter.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "NewRPGCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HealthComponent_MetaData[] = {
		{ "Category", "Custom Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Declare custom components for the player character\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "NewRPGCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Declare custom components for the player character" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InventoryComponent_MetaData[] = {
		{ "Category", "Custom Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "NewRPGCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ManaComponent_MetaData[] = {
		{ "Category", "Custom Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "NewRPGCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AlignmentComponent_MetaData[] = {
		{ "Category", "Custom Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "NewRPGCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EXPComponent_MetaData[] = {
		{ "Category", "Custom Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "NewRPGCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TopDownCameraComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Top down camera */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "NewRPGCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Top down camera" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Camera boom positioning the camera above the character */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "NewRPGCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Camera boom positioning the camera above the character" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HealthComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InventoryComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ManaComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AlignmentComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EXPComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TopDownCameraComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ANewRPGCharacter_SphereOverlap, "SphereOverlap" }, // 1031856694
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANewRPGCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANewRPGCharacter_Statics::NewProp_HealthComponent = { "HealthComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANewRPGCharacter, HealthComponent), Z_Construct_UClass_UHealthComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HealthComponent_MetaData), NewProp_HealthComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANewRPGCharacter_Statics::NewProp_InventoryComponent = { "InventoryComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANewRPGCharacter, InventoryComponent), Z_Construct_UClass_UInventoryComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InventoryComponent_MetaData), NewProp_InventoryComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANewRPGCharacter_Statics::NewProp_ManaComponent = { "ManaComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANewRPGCharacter, ManaComponent), Z_Construct_UClass_UManaComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ManaComponent_MetaData), NewProp_ManaComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANewRPGCharacter_Statics::NewProp_AlignmentComponent = { "AlignmentComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANewRPGCharacter, AlignmentComponent), Z_Construct_UClass_UAlignmentComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AlignmentComponent_MetaData), NewProp_AlignmentComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANewRPGCharacter_Statics::NewProp_EXPComponent = { "EXPComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANewRPGCharacter, EXPComponent), Z_Construct_UClass_UEXPComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EXPComponent_MetaData), NewProp_EXPComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANewRPGCharacter_Statics::NewProp_TopDownCameraComponent = { "TopDownCameraComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANewRPGCharacter, TopDownCameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TopDownCameraComponent_MetaData), NewProp_TopDownCameraComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANewRPGCharacter_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANewRPGCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraBoom_MetaData), NewProp_CameraBoom_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANewRPGCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANewRPGCharacter_Statics::NewProp_HealthComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANewRPGCharacter_Statics::NewProp_InventoryComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANewRPGCharacter_Statics::NewProp_ManaComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANewRPGCharacter_Statics::NewProp_AlignmentComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANewRPGCharacter_Statics::NewProp_EXPComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANewRPGCharacter_Statics::NewProp_TopDownCameraComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANewRPGCharacter_Statics::NewProp_CameraBoom,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANewRPGCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ANewRPGCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_NewRPG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANewRPGCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ANewRPGCharacter_Statics::ClassParams = {
	&ANewRPGCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ANewRPGCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ANewRPGCharacter_Statics::PropPointers),
	0,
	0x008000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANewRPGCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_ANewRPGCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ANewRPGCharacter()
{
	if (!Z_Registration_Info_UClass_ANewRPGCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANewRPGCharacter.OuterSingleton, Z_Construct_UClass_ANewRPGCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ANewRPGCharacter.OuterSingleton;
}
template<> NEWRPG_API UClass* StaticClass<ANewRPGCharacter>()
{
	return ANewRPGCharacter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ANewRPGCharacter);
ANewRPGCharacter::~ANewRPGCharacter() {}
// End Class ANewRPGCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_NewRPG_Source_NewRPG_NewRPGCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ANewRPGCharacter, ANewRPGCharacter::StaticClass, TEXT("ANewRPGCharacter"), &Z_Registration_Info_UClass_ANewRPGCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANewRPGCharacter), 1756456655U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_NewRPG_Source_NewRPG_NewRPGCharacter_h_1725948346(TEXT("/Script/NewRPG"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_NewRPG_Source_NewRPG_NewRPGCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_NewRPG_Source_NewRPG_NewRPGCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
