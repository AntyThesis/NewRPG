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
NEWRPG_API UClass* Z_Construct_UClass_ANewRPGCharacter_NoRegister();
NEWRPG_API UClass* Z_Construct_UClass_UHealthComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_NewRPG();
// End Cross Module References

// Begin Class AEnemyBase Function EnemyKilled
struct Z_Construct_UFunction_AEnemyBase_EnemyKilled_Statics
{
	struct EnemyBase_eventEnemyKilled_Parms
	{
		ANewRPGCharacter* AttackingCharacter;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "EnemyBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AttackingCharacter;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEnemyBase_EnemyKilled_Statics::NewProp_AttackingCharacter = { "AttackingCharacter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnemyBase_eventEnemyKilled_Parms, AttackingCharacter), Z_Construct_UClass_ANewRPGCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEnemyBase_EnemyKilled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyBase_EnemyKilled_Statics::NewProp_AttackingCharacter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyBase_EnemyKilled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemyBase_EnemyKilled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemyBase, nullptr, "EnemyKilled", nullptr, nullptr, Z_Construct_UFunction_AEnemyBase_EnemyKilled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyBase_EnemyKilled_Statics::PropPointers), sizeof(Z_Construct_UFunction_AEnemyBase_EnemyKilled_Statics::EnemyBase_eventEnemyKilled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyBase_EnemyKilled_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEnemyBase_EnemyKilled_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AEnemyBase_EnemyKilled_Statics::EnemyBase_eventEnemyKilled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AEnemyBase_EnemyKilled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEnemyBase_EnemyKilled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AEnemyBase::execEnemyKilled)
{
	P_GET_OBJECT(ANewRPGCharacter,Z_Param_AttackingCharacter);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EnemyKilled(Z_Param_AttackingCharacter);
	P_NATIVE_END;
}
// End Class AEnemyBase Function EnemyKilled

// Begin Class AEnemyBase
void AEnemyBase::StaticRegisterNativesAEnemyBase()
{
	UClass* Class = AEnemyBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "EnemyKilled", &AEnemyBase::execEnemyKilled },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExperienceToGive_MetaData[] = {
		{ "Category", "EnemyBase" },
		{ "ModuleRelativePath", "EnemyBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HealthComponent_MetaData[] = {
		{ "Category", "EnemyBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "EnemyBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ExperienceToGive;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HealthComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AEnemyBase_EnemyKilled, "EnemyKilled" }, // 3061538753
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemyBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemyBase_Statics::NewProp_ExperienceToGive = { "ExperienceToGive", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemyBase, ExperienceToGive), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExperienceToGive_MetaData), NewProp_ExperienceToGive_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemyBase_Statics::NewProp_HealthComponent = { "HealthComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemyBase, HealthComponent), Z_Construct_UClass_UHealthComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HealthComponent_MetaData), NewProp_HealthComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEnemyBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyBase_Statics::NewProp_ExperienceToGive,
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
	FuncInfo,
	Z_Construct_UClass_AEnemyBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
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
		{ Z_Construct_UClass_AEnemyBase, AEnemyBase::StaticClass, TEXT("AEnemyBase"), &Z_Registration_Info_UClass_AEnemyBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEnemyBase), 1317253877U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_NewRPG_Source_NewRPG_EnemyBase_h_3034440489(TEXT("/Script/NewRPG"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_NewRPG_Source_NewRPG_EnemyBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_NewRPG_Source_NewRPG_EnemyBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
