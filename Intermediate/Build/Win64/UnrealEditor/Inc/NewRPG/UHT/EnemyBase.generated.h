// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EnemyBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NEWRPG_EnemyBase_generated_h
#error "EnemyBase.generated.h already included, missing '#pragma once' in EnemyBase.h"
#endif
#define NEWRPG_EnemyBase_generated_h

#define FID_Unreal_Projects_NewRPG_Source_NewRPG_EnemyBase_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEnemyBase(); \
	friend struct Z_Construct_UClass_AEnemyBase_Statics; \
public: \
	DECLARE_CLASS(AEnemyBase, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NewRPG"), NO_API) \
	DECLARE_SERIALIZER(AEnemyBase)


#define FID_Unreal_Projects_NewRPG_Source_NewRPG_EnemyBase_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AEnemyBase(AEnemyBase&&); \
	AEnemyBase(const AEnemyBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemyBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemyBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AEnemyBase) \
	NO_API virtual ~AEnemyBase();


#define FID_Unreal_Projects_NewRPG_Source_NewRPG_EnemyBase_h_11_PROLOG
#define FID_Unreal_Projects_NewRPG_Source_NewRPG_EnemyBase_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_NewRPG_Source_NewRPG_EnemyBase_h_14_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_NewRPG_Source_NewRPG_EnemyBase_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NEWRPG_API UClass* StaticClass<class AEnemyBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_NewRPG_Source_NewRPG_EnemyBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
