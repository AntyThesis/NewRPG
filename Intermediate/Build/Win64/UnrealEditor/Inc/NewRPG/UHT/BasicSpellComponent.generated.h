// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BasicSpellComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ACharacter;
#ifdef NEWRPG_BasicSpellComponent_generated_h
#error "BasicSpellComponent.generated.h already included, missing '#pragma once' in BasicSpellComponent.h"
#endif
#define NEWRPG_BasicSpellComponent_generated_h

#define FID_Unreal_Projects_NewRPG_Source_NewRPG_BasicSpellComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execToggleCooldown); \
	DECLARE_FUNCTION(execCastSpell);


#define FID_Unreal_Projects_NewRPG_Source_NewRPG_BasicSpellComponent_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBasicSpellComponent(); \
	friend struct Z_Construct_UClass_UBasicSpellComponent_Statics; \
public: \
	DECLARE_CLASS(UBasicSpellComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NewRPG"), NO_API) \
	DECLARE_SERIALIZER(UBasicSpellComponent)


#define FID_Unreal_Projects_NewRPG_Source_NewRPG_BasicSpellComponent_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UBasicSpellComponent(UBasicSpellComponent&&); \
	UBasicSpellComponent(const UBasicSpellComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBasicSpellComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBasicSpellComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UBasicSpellComponent) \
	NO_API virtual ~UBasicSpellComponent();


#define FID_Unreal_Projects_NewRPG_Source_NewRPG_BasicSpellComponent_h_13_PROLOG
#define FID_Unreal_Projects_NewRPG_Source_NewRPG_BasicSpellComponent_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_NewRPG_Source_NewRPG_BasicSpellComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_NewRPG_Source_NewRPG_BasicSpellComponent_h_16_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_NewRPG_Source_NewRPG_BasicSpellComponent_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NEWRPG_API UClass* StaticClass<class UBasicSpellComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_NewRPG_Source_NewRPG_BasicSpellComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
