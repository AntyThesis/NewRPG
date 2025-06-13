// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NewRPG/AlignmentComponent.h"
#include "NewRPG/FAlignment.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAlignmentComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
NEWRPG_API UClass* Z_Construct_UClass_UAlignmentComponent();
NEWRPG_API UClass* Z_Construct_UClass_UAlignmentComponent_NoRegister();
NEWRPG_API UScriptStruct* Z_Construct_UScriptStruct_FAlignment();
UPackage* Z_Construct_UPackage__Script_NewRPG();
// End Cross Module References

// Begin Class UAlignmentComponent Function AffectBlue
struct Z_Construct_UFunction_UAlignmentComponent_AffectBlue_Statics
{
	struct AlignmentComponent_eventAffectBlue_Parms
	{
		float BlueChangeAmount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AlignmentComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BlueChangeAmount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAlignmentComponent_AffectBlue_Statics::NewProp_BlueChangeAmount = { "BlueChangeAmount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlignmentComponent_eventAffectBlue_Parms, BlueChangeAmount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAlignmentComponent_AffectBlue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlignmentComponent_AffectBlue_Statics::NewProp_BlueChangeAmount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlignmentComponent_AffectBlue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAlignmentComponent_AffectBlue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAlignmentComponent, nullptr, "AffectBlue", nullptr, nullptr, Z_Construct_UFunction_UAlignmentComponent_AffectBlue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAlignmentComponent_AffectBlue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAlignmentComponent_AffectBlue_Statics::AlignmentComponent_eventAffectBlue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlignmentComponent_AffectBlue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAlignmentComponent_AffectBlue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAlignmentComponent_AffectBlue_Statics::AlignmentComponent_eventAffectBlue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAlignmentComponent_AffectBlue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAlignmentComponent_AffectBlue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAlignmentComponent::execAffectBlue)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_BlueChangeAmount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AffectBlue(Z_Param_BlueChangeAmount);
	P_NATIVE_END;
}
// End Class UAlignmentComponent Function AffectBlue

// Begin Class UAlignmentComponent Function AffectGreen
struct Z_Construct_UFunction_UAlignmentComponent_AffectGreen_Statics
{
	struct AlignmentComponent_eventAffectGreen_Parms
	{
		float GreenChangeAmount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AlignmentComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GreenChangeAmount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAlignmentComponent_AffectGreen_Statics::NewProp_GreenChangeAmount = { "GreenChangeAmount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlignmentComponent_eventAffectGreen_Parms, GreenChangeAmount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAlignmentComponent_AffectGreen_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlignmentComponent_AffectGreen_Statics::NewProp_GreenChangeAmount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlignmentComponent_AffectGreen_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAlignmentComponent_AffectGreen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAlignmentComponent, nullptr, "AffectGreen", nullptr, nullptr, Z_Construct_UFunction_UAlignmentComponent_AffectGreen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAlignmentComponent_AffectGreen_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAlignmentComponent_AffectGreen_Statics::AlignmentComponent_eventAffectGreen_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlignmentComponent_AffectGreen_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAlignmentComponent_AffectGreen_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAlignmentComponent_AffectGreen_Statics::AlignmentComponent_eventAffectGreen_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAlignmentComponent_AffectGreen()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAlignmentComponent_AffectGreen_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAlignmentComponent::execAffectGreen)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_GreenChangeAmount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AffectGreen(Z_Param_GreenChangeAmount);
	P_NATIVE_END;
}
// End Class UAlignmentComponent Function AffectGreen

// Begin Class UAlignmentComponent Function AffectRed
struct Z_Construct_UFunction_UAlignmentComponent_AffectRed_Statics
{
	struct AlignmentComponent_eventAffectRed_Parms
	{
		float RedChangeAmount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Declare functions to manipulate the FAlignment variables\n" },
#endif
		{ "ModuleRelativePath", "AlignmentComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Declare functions to manipulate the FAlignment variables" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RedChangeAmount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAlignmentComponent_AffectRed_Statics::NewProp_RedChangeAmount = { "RedChangeAmount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlignmentComponent_eventAffectRed_Parms, RedChangeAmount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAlignmentComponent_AffectRed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlignmentComponent_AffectRed_Statics::NewProp_RedChangeAmount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlignmentComponent_AffectRed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAlignmentComponent_AffectRed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAlignmentComponent, nullptr, "AffectRed", nullptr, nullptr, Z_Construct_UFunction_UAlignmentComponent_AffectRed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAlignmentComponent_AffectRed_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAlignmentComponent_AffectRed_Statics::AlignmentComponent_eventAffectRed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlignmentComponent_AffectRed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAlignmentComponent_AffectRed_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAlignmentComponent_AffectRed_Statics::AlignmentComponent_eventAffectRed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAlignmentComponent_AffectRed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAlignmentComponent_AffectRed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAlignmentComponent::execAffectRed)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_RedChangeAmount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AffectRed(Z_Param_RedChangeAmount);
	P_NATIVE_END;
}
// End Class UAlignmentComponent Function AffectRed

// Begin Class UAlignmentComponent Function AffectYellow
struct Z_Construct_UFunction_UAlignmentComponent_AffectYellow_Statics
{
	struct AlignmentComponent_eventAffectYellow_Parms
	{
		float YellowChangeAmount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AlignmentComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_YellowChangeAmount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAlignmentComponent_AffectYellow_Statics::NewProp_YellowChangeAmount = { "YellowChangeAmount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlignmentComponent_eventAffectYellow_Parms, YellowChangeAmount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAlignmentComponent_AffectYellow_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlignmentComponent_AffectYellow_Statics::NewProp_YellowChangeAmount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlignmentComponent_AffectYellow_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAlignmentComponent_AffectYellow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAlignmentComponent, nullptr, "AffectYellow", nullptr, nullptr, Z_Construct_UFunction_UAlignmentComponent_AffectYellow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAlignmentComponent_AffectYellow_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAlignmentComponent_AffectYellow_Statics::AlignmentComponent_eventAffectYellow_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlignmentComponent_AffectYellow_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAlignmentComponent_AffectYellow_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAlignmentComponent_AffectYellow_Statics::AlignmentComponent_eventAffectYellow_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAlignmentComponent_AffectYellow()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAlignmentComponent_AffectYellow_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAlignmentComponent::execAffectYellow)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_YellowChangeAmount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AffectYellow(Z_Param_YellowChangeAmount);
	P_NATIVE_END;
}
// End Class UAlignmentComponent Function AffectYellow

// Begin Class UAlignmentComponent
void UAlignmentComponent::StaticRegisterNativesUAlignmentComponent()
{
	UClass* Class = UAlignmentComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AffectBlue", &UAlignmentComponent::execAffectBlue },
		{ "AffectGreen", &UAlignmentComponent::execAffectGreen },
		{ "AffectRed", &UAlignmentComponent::execAffectRed },
		{ "AffectYellow", &UAlignmentComponent::execAffectYellow },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAlignmentComponent);
UClass* Z_Construct_UClass_UAlignmentComponent_NoRegister()
{
	return UAlignmentComponent::StaticClass();
}
struct Z_Construct_UClass_UAlignmentComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "AlignmentComponent.h" },
		{ "ModuleRelativePath", "AlignmentComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AlignmentStats_MetaData[] = {
		{ "Category", "Alignment Properties" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Declare the structure containing the FAlignment variables\n" },
#endif
		{ "ModuleRelativePath", "AlignmentComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Declare the structure containing the FAlignment variables" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerID_MetaData[] = {
		{ "Category", "AlignmentComponent" },
		{ "ModuleRelativePath", "AlignmentComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AlignmentStats;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PlayerID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAlignmentComponent_AffectBlue, "AffectBlue" }, // 1166113538
		{ &Z_Construct_UFunction_UAlignmentComponent_AffectGreen, "AffectGreen" }, // 3956616208
		{ &Z_Construct_UFunction_UAlignmentComponent_AffectRed, "AffectRed" }, // 3927701378
		{ &Z_Construct_UFunction_UAlignmentComponent_AffectYellow, "AffectYellow" }, // 3122137267
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAlignmentComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAlignmentComponent_Statics::NewProp_AlignmentStats = { "AlignmentStats", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAlignmentComponent, AlignmentStats), Z_Construct_UScriptStruct_FAlignment, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AlignmentStats_MetaData), NewProp_AlignmentStats_MetaData) }; // 534200981
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAlignmentComponent_Statics::NewProp_PlayerID = { "PlayerID", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAlignmentComponent, PlayerID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerID_MetaData), NewProp_PlayerID_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAlignmentComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAlignmentComponent_Statics::NewProp_AlignmentStats,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAlignmentComponent_Statics::NewProp_PlayerID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAlignmentComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAlignmentComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_NewRPG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAlignmentComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAlignmentComponent_Statics::ClassParams = {
	&UAlignmentComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAlignmentComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAlignmentComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAlignmentComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UAlignmentComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAlignmentComponent()
{
	if (!Z_Registration_Info_UClass_UAlignmentComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAlignmentComponent.OuterSingleton, Z_Construct_UClass_UAlignmentComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAlignmentComponent.OuterSingleton;
}
template<> NEWRPG_API UClass* StaticClass<UAlignmentComponent>()
{
	return UAlignmentComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAlignmentComponent);
UAlignmentComponent::~UAlignmentComponent() {}
// End Class UAlignmentComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_NewRPG_Source_NewRPG_AlignmentComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAlignmentComponent, UAlignmentComponent::StaticClass, TEXT("UAlignmentComponent"), &Z_Registration_Info_UClass_UAlignmentComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAlignmentComponent), 409519986U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_NewRPG_Source_NewRPG_AlignmentComponent_h_333115603(TEXT("/Script/NewRPG"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_NewRPG_Source_NewRPG_AlignmentComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_NewRPG_Source_NewRPG_AlignmentComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
