// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NewRPG/NPCBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNPCBase() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor();
NEWRPG_API UClass* Z_Construct_UClass_ANewRPGCharacter_NoRegister();
NEWRPG_API UClass* Z_Construct_UClass_ANPCBase();
NEWRPG_API UClass* Z_Construct_UClass_ANPCBase_NoRegister();
NEWRPG_API UClass* Z_Construct_UClass_UInteractable_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_NewRPG();
// End Cross Module References

// Begin Class ANPCBase Function Interact
struct Z_Construct_UFunction_ANPCBase_Interact_Statics
{
	struct NPCBase_eventInteract_Parms
	{
		ANewRPGCharacter* InteractingCharacter;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interaction" },
		{ "ModuleRelativePath", "NPCBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractingCharacter;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANPCBase_Interact_Statics::NewProp_InteractingCharacter = { "InteractingCharacter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NPCBase_eventInteract_Parms, InteractingCharacter), Z_Construct_UClass_ANewRPGCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANPCBase_Interact_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANPCBase_Interact_Statics::NewProp_InteractingCharacter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANPCBase_Interact_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANPCBase_Interact_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANPCBase, nullptr, "Interact", nullptr, nullptr, Z_Construct_UFunction_ANPCBase_Interact_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANPCBase_Interact_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANPCBase_Interact_Statics::NPCBase_eventInteract_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANPCBase_Interact_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANPCBase_Interact_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ANPCBase_Interact_Statics::NPCBase_eventInteract_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANPCBase_Interact()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANPCBase_Interact_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANPCBase::execInteract)
{
	P_GET_OBJECT(ANewRPGCharacter,Z_Param_InteractingCharacter);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Interact(Z_Param_InteractingCharacter);
	P_NATIVE_END;
}
// End Class ANPCBase Function Interact

// Begin Class ANPCBase
void ANPCBase::StaticRegisterNativesANPCBase()
{
	UClass* Class = ANPCBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Interact", &ANPCBase::execInteract },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANPCBase);
UClass* Z_Construct_UClass_ANPCBase_NoRegister()
{
	return ANPCBase::StaticClass();
}
struct Z_Construct_UClass_ANPCBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "NPCBase.h" },
		{ "ModuleRelativePath", "NPCBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WidgetClass_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "NPCBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_WidgetClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ANPCBase_Interact, "Interact" }, // 1693775687
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANPCBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ANPCBase_Statics::NewProp_WidgetClass = { "WidgetClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANPCBase, WidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WidgetClass_MetaData), NewProp_WidgetClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANPCBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANPCBase_Statics::NewProp_WidgetClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANPCBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ANPCBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_NewRPG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANPCBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ANPCBase_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UInteractable_NoRegister, (int32)VTABLE_OFFSET(ANPCBase, IInteractable), false },  // 3384606801
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ANPCBase_Statics::ClassParams = {
	&ANPCBase::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ANPCBase_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ANPCBase_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANPCBase_Statics::Class_MetaDataParams), Z_Construct_UClass_ANPCBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ANPCBase()
{
	if (!Z_Registration_Info_UClass_ANPCBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANPCBase.OuterSingleton, Z_Construct_UClass_ANPCBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ANPCBase.OuterSingleton;
}
template<> NEWRPG_API UClass* StaticClass<ANPCBase>()
{
	return ANPCBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ANPCBase);
ANPCBase::~ANPCBase() {}
// End Class ANPCBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_NewRPG_Source_NewRPG_NPCBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ANPCBase, ANPCBase::StaticClass, TEXT("ANPCBase"), &Z_Registration_Info_UClass_ANPCBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANPCBase), 3140301068U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_NewRPG_Source_NewRPG_NPCBase_h_245904838(TEXT("/Script/NewRPG"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_NewRPG_Source_NewRPG_NPCBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_NewRPG_Source_NewRPG_NPCBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
