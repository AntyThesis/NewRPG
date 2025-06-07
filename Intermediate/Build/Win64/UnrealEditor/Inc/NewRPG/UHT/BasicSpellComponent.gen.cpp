// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NewRPG/BasicSpellComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBasicSpellComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
NEWRPG_API UClass* Z_Construct_UClass_UBasicSpellComponent();
NEWRPG_API UClass* Z_Construct_UClass_UBasicSpellComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_NewRPG();
// End Cross Module References

// Begin Class UBasicSpellComponent Function CastSpell
struct Z_Construct_UFunction_UBasicSpellComponent_CastSpell_Statics
{
	struct BasicSpellComponent_eventCastSpell_Parms
	{
		ACharacter* CastTarget;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BasicSpellComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CastTarget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBasicSpellComponent_CastSpell_Statics::NewProp_CastTarget = { "CastTarget", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BasicSpellComponent_eventCastSpell_Parms, CastTarget), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBasicSpellComponent_CastSpell_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBasicSpellComponent_CastSpell_Statics::NewProp_CastTarget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBasicSpellComponent_CastSpell_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBasicSpellComponent_CastSpell_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBasicSpellComponent, nullptr, "CastSpell", nullptr, nullptr, Z_Construct_UFunction_UBasicSpellComponent_CastSpell_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBasicSpellComponent_CastSpell_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBasicSpellComponent_CastSpell_Statics::BasicSpellComponent_eventCastSpell_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBasicSpellComponent_CastSpell_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBasicSpellComponent_CastSpell_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBasicSpellComponent_CastSpell_Statics::BasicSpellComponent_eventCastSpell_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBasicSpellComponent_CastSpell()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBasicSpellComponent_CastSpell_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBasicSpellComponent::execCastSpell)
{
	P_GET_OBJECT(ACharacter,Z_Param_CastTarget);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CastSpell(Z_Param_CastTarget);
	P_NATIVE_END;
}
// End Class UBasicSpellComponent Function CastSpell

// Begin Class UBasicSpellComponent Function ToggleCooldown
struct Z_Construct_UFunction_UBasicSpellComponent_ToggleCooldown_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BasicSpellComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBasicSpellComponent_ToggleCooldown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBasicSpellComponent, nullptr, "ToggleCooldown", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBasicSpellComponent_ToggleCooldown_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBasicSpellComponent_ToggleCooldown_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UBasicSpellComponent_ToggleCooldown()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBasicSpellComponent_ToggleCooldown_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBasicSpellComponent::execToggleCooldown)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ToggleCooldown();
	P_NATIVE_END;
}
// End Class UBasicSpellComponent Function ToggleCooldown

// Begin Class UBasicSpellComponent
void UBasicSpellComponent::StaticRegisterNativesUBasicSpellComponent()
{
	UClass* Class = UBasicSpellComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CastSpell", &UBasicSpellComponent::execCastSpell },
		{ "ToggleCooldown", &UBasicSpellComponent::execToggleCooldown },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBasicSpellComponent);
UClass* Z_Construct_UClass_UBasicSpellComponent_NoRegister()
{
	return UBasicSpellComponent::StaticClass();
}
struct Z_Construct_UClass_UBasicSpellComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "BasicSpellComponent.h" },
		{ "ModuleRelativePath", "BasicSpellComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOnCooldown_MetaData[] = {
		{ "Category", "Spell State" },
		{ "ModuleRelativePath", "BasicSpellComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpellName_MetaData[] = {
		{ "Category", "Spell Properties" },
		{ "ModuleRelativePath", "BasicSpellComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Image_MetaData[] = {
		{ "Category", "Spell Properties" },
		{ "ModuleRelativePath", "BasicSpellComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ManaCost_MetaData[] = {
		{ "Category", "Spell Properties" },
		{ "ModuleRelativePath", "BasicSpellComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CoolDown_MetaData[] = {
		{ "Category", "Spell Properties" },
		{ "ModuleRelativePath", "BasicSpellComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpellDamage_MetaData[] = {
		{ "Category", "Spell Properties" },
		{ "ModuleRelativePath", "BasicSpellComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bOnCooldown_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOnCooldown;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SpellName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Image;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ManaCost;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CoolDown;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpellDamage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBasicSpellComponent_CastSpell, "CastSpell" }, // 3754491617
		{ &Z_Construct_UFunction_UBasicSpellComponent_ToggleCooldown, "ToggleCooldown" }, // 3568394259
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBasicSpellComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UBasicSpellComponent_Statics::NewProp_bOnCooldown_SetBit(void* Obj)
{
	((UBasicSpellComponent*)Obj)->bOnCooldown = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBasicSpellComponent_Statics::NewProp_bOnCooldown = { "bOnCooldown", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBasicSpellComponent), &Z_Construct_UClass_UBasicSpellComponent_Statics::NewProp_bOnCooldown_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOnCooldown_MetaData), NewProp_bOnCooldown_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBasicSpellComponent_Statics::NewProp_SpellName = { "SpellName", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBasicSpellComponent, SpellName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpellName_MetaData), NewProp_SpellName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBasicSpellComponent_Statics::NewProp_Image = { "Image", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBasicSpellComponent, Image), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Image_MetaData), NewProp_Image_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBasicSpellComponent_Statics::NewProp_ManaCost = { "ManaCost", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBasicSpellComponent, ManaCost), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ManaCost_MetaData), NewProp_ManaCost_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBasicSpellComponent_Statics::NewProp_CoolDown = { "CoolDown", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBasicSpellComponent, CoolDown), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CoolDown_MetaData), NewProp_CoolDown_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBasicSpellComponent_Statics::NewProp_SpellDamage = { "SpellDamage", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBasicSpellComponent, SpellDamage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpellDamage_MetaData), NewProp_SpellDamage_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBasicSpellComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBasicSpellComponent_Statics::NewProp_bOnCooldown,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBasicSpellComponent_Statics::NewProp_SpellName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBasicSpellComponent_Statics::NewProp_Image,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBasicSpellComponent_Statics::NewProp_ManaCost,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBasicSpellComponent_Statics::NewProp_CoolDown,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBasicSpellComponent_Statics::NewProp_SpellDamage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBasicSpellComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBasicSpellComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_NewRPG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBasicSpellComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBasicSpellComponent_Statics::ClassParams = {
	&UBasicSpellComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UBasicSpellComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UBasicSpellComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBasicSpellComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UBasicSpellComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBasicSpellComponent()
{
	if (!Z_Registration_Info_UClass_UBasicSpellComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBasicSpellComponent.OuterSingleton, Z_Construct_UClass_UBasicSpellComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBasicSpellComponent.OuterSingleton;
}
template<> NEWRPG_API UClass* StaticClass<UBasicSpellComponent>()
{
	return UBasicSpellComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBasicSpellComponent);
UBasicSpellComponent::~UBasicSpellComponent() {}
// End Class UBasicSpellComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_NewRPG_Source_NewRPG_BasicSpellComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBasicSpellComponent, UBasicSpellComponent::StaticClass, TEXT("UBasicSpellComponent"), &Z_Registration_Info_UClass_UBasicSpellComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBasicSpellComponent), 1774997664U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_NewRPG_Source_NewRPG_BasicSpellComponent_h_343933138(TEXT("/Script/NewRPG"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_NewRPG_Source_NewRPG_BasicSpellComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_NewRPG_Source_NewRPG_BasicSpellComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
