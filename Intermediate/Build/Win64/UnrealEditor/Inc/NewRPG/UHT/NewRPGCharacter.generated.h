// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NewRPGCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NEWRPG_NewRPGCharacter_generated_h
#error "NewRPGCharacter.generated.h already included, missing '#pragma once' in NewRPGCharacter.h"
#endif
#define NEWRPG_NewRPGCharacter_generated_h

#define FID_Unreal_Projects_NewRPG_Source_NewRPG_NewRPGCharacter_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSphereOverlap);


#define FID_Unreal_Projects_NewRPG_Source_NewRPG_NewRPGCharacter_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANewRPGCharacter(); \
	friend struct Z_Construct_UClass_ANewRPGCharacter_Statics; \
public: \
	DECLARE_CLASS(ANewRPGCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NewRPG"), NO_API) \
	DECLARE_SERIALIZER(ANewRPGCharacter)


#define FID_Unreal_Projects_NewRPG_Source_NewRPG_NewRPGCharacter_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ANewRPGCharacter(ANewRPGCharacter&&); \
	ANewRPGCharacter(const ANewRPGCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANewRPGCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANewRPGCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ANewRPGCharacter) \
	NO_API virtual ~ANewRPGCharacter();


#define FID_Unreal_Projects_NewRPG_Source_NewRPG_NewRPGCharacter_h_15_PROLOG
#define FID_Unreal_Projects_NewRPG_Source_NewRPG_NewRPGCharacter_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_NewRPG_Source_NewRPG_NewRPGCharacter_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_NewRPG_Source_NewRPG_NewRPGCharacter_h_18_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_NewRPG_Source_NewRPG_NewRPGCharacter_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NEWRPG_API UClass* StaticClass<class ANewRPGCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_NewRPG_Source_NewRPG_NewRPGCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
