// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SpellProjectile.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NEWRPG_SpellProjectile_generated_h
#error "SpellProjectile.generated.h already included, missing '#pragma once' in SpellProjectile.h"
#endif
#define NEWRPG_SpellProjectile_generated_h

#define FID_Unreal_Projects_NewRPG_Source_NewRPG_SpellProjectile_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASpellProjectile(); \
	friend struct Z_Construct_UClass_ASpellProjectile_Statics; \
public: \
	DECLARE_CLASS(ASpellProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NewRPG"), NO_API) \
	DECLARE_SERIALIZER(ASpellProjectile)


#define FID_Unreal_Projects_NewRPG_Source_NewRPG_SpellProjectile_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ASpellProjectile(ASpellProjectile&&); \
	ASpellProjectile(const ASpellProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASpellProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASpellProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASpellProjectile) \
	NO_API virtual ~ASpellProjectile();


#define FID_Unreal_Projects_NewRPG_Source_NewRPG_SpellProjectile_h_10_PROLOG
#define FID_Unreal_Projects_NewRPG_Source_NewRPG_SpellProjectile_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_NewRPG_Source_NewRPG_SpellProjectile_h_13_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_NewRPG_Source_NewRPG_SpellProjectile_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NEWRPG_API UClass* StaticClass<class ASpellProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_NewRPG_Source_NewRPG_SpellProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
