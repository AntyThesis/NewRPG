// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NewRPG/ManaComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeManaComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
NEWRPG_API UClass* Z_Construct_UClass_UManaComponent();
NEWRPG_API UClass* Z_Construct_UClass_UManaComponent_NoRegister();
NEWRPG_API UFunction* Z_Construct_UDelegateFunction_NewRPG_OnManaChanged__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_NewRPG();
// End Cross Module References

// Begin Delegate FOnManaChanged
struct Z_Construct_UDelegateFunction_NewRPG_OnManaChanged__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ManaComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_NewRPG_OnManaChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_NewRPG, nullptr, "OnManaChanged__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NewRPG_OnManaChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_NewRPG_OnManaChanged__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_NewRPG_OnManaChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_NewRPG_OnManaChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnManaChanged_DelegateWrapper(const FMulticastScriptDelegate& OnManaChanged)
{
	OnManaChanged.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnManaChanged

// Begin Class UManaComponent Function AffectMana
struct Z_Construct_UFunction_UManaComponent_AffectMana_Statics
{
	struct ManaComponent_eventAffectMana_Parms
	{
		float ManaChangeAmount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ManaComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ManaChangeAmount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UManaComponent_AffectMana_Statics::NewProp_ManaChangeAmount = { "ManaChangeAmount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ManaComponent_eventAffectMana_Parms, ManaChangeAmount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaComponent_AffectMana_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaComponent_AffectMana_Statics::NewProp_ManaChangeAmount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_AffectMana_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaComponent_AffectMana_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaComponent, nullptr, "AffectMana", nullptr, nullptr, Z_Construct_UFunction_UManaComponent_AffectMana_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_AffectMana_Statics::PropPointers), sizeof(Z_Construct_UFunction_UManaComponent_AffectMana_Statics::ManaComponent_eventAffectMana_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UManaComponent_AffectMana_Statics::Function_MetaDataParams), Z_Construct_UFunction_UManaComponent_AffectMana_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UManaComponent_AffectMana_Statics::ManaComponent_eventAffectMana_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UManaComponent_AffectMana()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UManaComponent_AffectMana_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UManaComponent::execAffectMana)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_ManaChangeAmount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AffectMana(Z_Param_ManaChangeAmount);
	P_NATIVE_END;
}
// End Class UManaComponent Function AffectMana

// Begin Class UManaComponent
void UManaComponent::StaticRegisterNativesUManaComponent()
{
	UClass* Class = UManaComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AffectMana", &UManaComponent::execAffectMana },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UManaComponent);
UClass* Z_Construct_UClass_UManaComponent_NoRegister()
{
	return UManaComponent::StaticClass();
}
struct Z_Construct_UClass_UManaComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "ManaComponent.h" },
		{ "ModuleRelativePath", "ManaComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnManaChanged_MetaData[] = {
		{ "ModuleRelativePath", "ManaComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentMana_MetaData[] = {
		{ "Category", "Mana Properties" },
		{ "ModuleRelativePath", "ManaComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxMana_MetaData[] = {
		{ "Category", "Mana Properties" },
		{ "ModuleRelativePath", "ManaComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnManaChanged;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentMana;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxMana;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UManaComponent_AffectMana, "AffectMana" }, // 1617651567
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UManaComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UManaComponent_Statics::NewProp_OnManaChanged = { "OnManaChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UManaComponent, OnManaChanged), Z_Construct_UDelegateFunction_NewRPG_OnManaChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnManaChanged_MetaData), NewProp_OnManaChanged_MetaData) }; // 1432515636
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UManaComponent_Statics::NewProp_CurrentMana = { "CurrentMana", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UManaComponent, CurrentMana), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentMana_MetaData), NewProp_CurrentMana_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UManaComponent_Statics::NewProp_MaxMana = { "MaxMana", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UManaComponent, MaxMana), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxMana_MetaData), NewProp_MaxMana_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UManaComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManaComponent_Statics::NewProp_OnManaChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManaComponent_Statics::NewProp_CurrentMana,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManaComponent_Statics::NewProp_MaxMana,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UManaComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UManaComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_NewRPG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UManaComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UManaComponent_Statics::ClassParams = {
	&UManaComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UManaComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UManaComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UManaComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UManaComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UManaComponent()
{
	if (!Z_Registration_Info_UClass_UManaComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UManaComponent.OuterSingleton, Z_Construct_UClass_UManaComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UManaComponent.OuterSingleton;
}
template<> NEWRPG_API UClass* StaticClass<UManaComponent>()
{
	return UManaComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UManaComponent);
UManaComponent::~UManaComponent() {}
// End Class UManaComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_NewRPG_Source_NewRPG_ManaComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UManaComponent, UManaComponent::StaticClass, TEXT("UManaComponent"), &Z_Registration_Info_UClass_UManaComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UManaComponent), 365676994U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_NewRPG_Source_NewRPG_ManaComponent_h_1864779862(TEXT("/Script/NewRPG"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_NewRPG_Source_NewRPG_ManaComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_NewRPG_Source_NewRPG_ManaComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
