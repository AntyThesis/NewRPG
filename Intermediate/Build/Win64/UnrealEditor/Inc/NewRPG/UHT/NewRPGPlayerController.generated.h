// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NewRPGPlayerController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NEWRPG_NewRPGPlayerController_generated_h
#error "NewRPGPlayerController.generated.h already included, missing '#pragma once' in NewRPGPlayerController.h"
#endif
#define NEWRPG_NewRPGPlayerController_generated_h

#define FID_Unreal_Projects_NewRPG_Source_NewRPG_NewRPGPlayerController_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execPerformOverlap);


#define FID_Unreal_Projects_NewRPG_Source_NewRPG_NewRPGPlayerController_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANewRPGPlayerController(); \
	friend struct Z_Construct_UClass_ANewRPGPlayerController_Statics; \
public: \
	DECLARE_CLASS(ANewRPGPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NewRPG"), NO_API) \
	DECLARE_SERIALIZER(ANewRPGPlayerController)


#define FID_Unreal_Projects_NewRPG_Source_NewRPG_NewRPGPlayerController_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ANewRPGPlayerController(ANewRPGPlayerController&&); \
	ANewRPGPlayerController(const ANewRPGPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANewRPGPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANewRPGPlayerController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ANewRPGPlayerController) \
	NO_API virtual ~ANewRPGPlayerController();


#define FID_Unreal_Projects_NewRPG_Source_NewRPG_NewRPGPlayerController_h_17_PROLOG
#define FID_Unreal_Projects_NewRPG_Source_NewRPG_NewRPGPlayerController_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_NewRPG_Source_NewRPG_NewRPGPlayerController_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_NewRPG_Source_NewRPG_NewRPGPlayerController_h_20_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_NewRPG_Source_NewRPG_NewRPGPlayerController_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NEWRPG_API UClass* StaticClass<class ANewRPGPlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_NewRPG_Source_NewRPG_NewRPGPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
