// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NewRPGGameMode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NEWRPG_NewRPGGameMode_generated_h
#error "NewRPGGameMode.generated.h already included, missing '#pragma once' in NewRPGGameMode.h"
#endif
#define NEWRPG_NewRPGGameMode_generated_h

#define FID_Unreal_Projects_NewRPG_Source_NewRPG_NewRPGGameMode_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANewRPGGameMode(); \
	friend struct Z_Construct_UClass_ANewRPGGameMode_Statics; \
public: \
	DECLARE_CLASS(ANewRPGGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/NewRPG"), NEWRPG_API) \
	DECLARE_SERIALIZER(ANewRPGGameMode)


#define FID_Unreal_Projects_NewRPG_Source_NewRPG_NewRPGGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ANewRPGGameMode(ANewRPGGameMode&&); \
	ANewRPGGameMode(const ANewRPGGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NEWRPG_API, ANewRPGGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANewRPGGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ANewRPGGameMode) \
	NEWRPG_API virtual ~ANewRPGGameMode();


#define FID_Unreal_Projects_NewRPG_Source_NewRPG_NewRPGGameMode_h_9_PROLOG
#define FID_Unreal_Projects_NewRPG_Source_NewRPG_NewRPGGameMode_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_NewRPG_Source_NewRPG_NewRPGGameMode_h_12_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_NewRPG_Source_NewRPG_NewRPGGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NEWRPG_API UClass* StaticClass<class ANewRPGGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_NewRPG_Source_NewRPG_NewRPGGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
