// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NewRPG/EXPComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEXPComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
NEWRPG_API UClass* Z_Construct_UClass_UEXPComponent();
NEWRPG_API UClass* Z_Construct_UClass_UEXPComponent_NoRegister();
NEWRPG_API UFunction* Z_Construct_UDelegateFunction_NewRPG_OnEXPEarned__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_NewRPG();
// End Cross Module References

// Begin Delegate FOnEXPEarned
struct Z_Construct_UDelegateFunction_NewRPG_OnEXPEarned__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "EXPComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_NewRPG_OnEXPEarned__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_NewRPG, nullptr, "OnEXPEarned__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NewRPG_OnEXPEarned__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_NewRPG_OnEXPEarned__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_NewRPG_OnEXPEarned__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_NewRPG_OnEXPEarned__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnEXPEarned_DelegateWrapper(const FMulticastScriptDelegate& OnEXPEarned)
{
	OnEXPEarned.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnEXPEarned

// Begin Class UEXPComponent Function EarnEXP
struct Z_Construct_UFunction_UEXPComponent_EarnEXP_Statics
{
	struct EXPComponent_eventEarnEXP_Parms
	{
		float EXPToEarn;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "EXPComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_EXPToEarn;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UEXPComponent_EarnEXP_Statics::NewProp_EXPToEarn = { "EXPToEarn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EXPComponent_eventEarnEXP_Parms, EXPToEarn), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEXPComponent_EarnEXP_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEXPComponent_EarnEXP_Statics::NewProp_EXPToEarn,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEXPComponent_EarnEXP_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEXPComponent_EarnEXP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEXPComponent, nullptr, "EarnEXP", nullptr, nullptr, Z_Construct_UFunction_UEXPComponent_EarnEXP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEXPComponent_EarnEXP_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEXPComponent_EarnEXP_Statics::EXPComponent_eventEarnEXP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEXPComponent_EarnEXP_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEXPComponent_EarnEXP_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEXPComponent_EarnEXP_Statics::EXPComponent_eventEarnEXP_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEXPComponent_EarnEXP()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEXPComponent_EarnEXP_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEXPComponent::execEarnEXP)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_EXPToEarn);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EarnEXP(Z_Param_EXPToEarn);
	P_NATIVE_END;
}
// End Class UEXPComponent Function EarnEXP

// Begin Class UEXPComponent Function LevelUp
struct Z_Construct_UFunction_UEXPComponent_LevelUp_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "EXPComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEXPComponent_LevelUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEXPComponent, nullptr, "LevelUp", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEXPComponent_LevelUp_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEXPComponent_LevelUp_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UEXPComponent_LevelUp()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEXPComponent_LevelUp_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEXPComponent::execLevelUp)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LevelUp();
	P_NATIVE_END;
}
// End Class UEXPComponent Function LevelUp

// Begin Class UEXPComponent
void UEXPComponent::StaticRegisterNativesUEXPComponent()
{
	UClass* Class = UEXPComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "EarnEXP", &UEXPComponent::execEarnEXP },
		{ "LevelUp", &UEXPComponent::execLevelUp },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEXPComponent);
UClass* Z_Construct_UClass_UEXPComponent_NoRegister()
{
	return UEXPComponent::StaticClass();
}
struct Z_Construct_UClass_UEXPComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "EXPComponent.h" },
		{ "ModuleRelativePath", "EXPComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnEXPEarned_MetaData[] = {
		{ "ModuleRelativePath", "EXPComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentEXP_MetaData[] = {
		{ "Category", "Experience Stats" },
		{ "ModuleRelativePath", "EXPComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxEXP_MetaData[] = {
		{ "Category", "Experience Stats" },
		{ "ModuleRelativePath", "EXPComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RequiredEXP_MetaData[] = {
		{ "Category", "Experience Stats" },
		{ "ModuleRelativePath", "EXPComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Level_MetaData[] = {
		{ "Category", "Experience Stats" },
		{ "ModuleRelativePath", "EXPComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnEXPEarned;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentEXP;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxEXP;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RequiredEXP;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Level;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UEXPComponent_EarnEXP, "EarnEXP" }, // 3002995708
		{ &Z_Construct_UFunction_UEXPComponent_LevelUp, "LevelUp" }, // 1721358803
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEXPComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEXPComponent_Statics::NewProp_OnEXPEarned = { "OnEXPEarned", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEXPComponent, OnEXPEarned), Z_Construct_UDelegateFunction_NewRPG_OnEXPEarned__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnEXPEarned_MetaData), NewProp_OnEXPEarned_MetaData) }; // 2352271353
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEXPComponent_Statics::NewProp_CurrentEXP = { "CurrentEXP", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEXPComponent, CurrentEXP), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentEXP_MetaData), NewProp_CurrentEXP_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEXPComponent_Statics::NewProp_MaxEXP = { "MaxEXP", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEXPComponent, MaxEXP), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxEXP_MetaData), NewProp_MaxEXP_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEXPComponent_Statics::NewProp_RequiredEXP = { "RequiredEXP", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEXPComponent, RequiredEXP), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RequiredEXP_MetaData), NewProp_RequiredEXP_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UEXPComponent_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEXPComponent, Level), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Level_MetaData), NewProp_Level_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEXPComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEXPComponent_Statics::NewProp_OnEXPEarned,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEXPComponent_Statics::NewProp_CurrentEXP,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEXPComponent_Statics::NewProp_MaxEXP,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEXPComponent_Statics::NewProp_RequiredEXP,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEXPComponent_Statics::NewProp_Level,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEXPComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEXPComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_NewRPG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEXPComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEXPComponent_Statics::ClassParams = {
	&UEXPComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UEXPComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UEXPComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEXPComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UEXPComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEXPComponent()
{
	if (!Z_Registration_Info_UClass_UEXPComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEXPComponent.OuterSingleton, Z_Construct_UClass_UEXPComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEXPComponent.OuterSingleton;
}
template<> NEWRPG_API UClass* StaticClass<UEXPComponent>()
{
	return UEXPComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEXPComponent);
UEXPComponent::~UEXPComponent() {}
// End Class UEXPComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_NewRPG_Source_NewRPG_EXPComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEXPComponent, UEXPComponent::StaticClass, TEXT("UEXPComponent"), &Z_Registration_Info_UClass_UEXPComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEXPComponent), 3895395199U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_NewRPG_Source_NewRPG_EXPComponent_h_3579862240(TEXT("/Script/NewRPG"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_NewRPG_Source_NewRPG_EXPComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_NewRPG_Source_NewRPG_EXPComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
