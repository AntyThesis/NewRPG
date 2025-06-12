// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AlignmentComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NEWRPG_AlignmentComponent_generated_h
#error "AlignmentComponent.generated.h already included, missing '#pragma once' in AlignmentComponent.h"
#endif
#define NEWRPG_AlignmentComponent_generated_h

#define FID_Unreal_Projects_NewRPG_Source_NewRPG_AlignmentComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execAffectGreen); \
	DECLARE_FUNCTION(execAffectYellow); \
	DECLARE_FUNCTION(execAffectBlue); \
	DECLARE_FUNCTION(execAffectRed);


#define FID_Unreal_Projects_NewRPG_Source_NewRPG_AlignmentComponent_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAlignmentComponent(); \
	friend struct Z_Construct_UClass_UAlignmentComponent_Statics; \
public: \
	DECLARE_CLASS(UAlignmentComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NewRPG"), NO_API) \
	DECLARE_SERIALIZER(UAlignmentComponent)


#define FID_Unreal_Projects_NewRPG_Source_NewRPG_AlignmentComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAlignmentComponent(UAlignmentComponent&&); \
	UAlignmentComponent(const UAlignmentComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAlignmentComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAlignmentComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAlignmentComponent) \
	NO_API virtual ~UAlignmentComponent();


#define FID_Unreal_Projects_NewRPG_Source_NewRPG_AlignmentComponent_h_11_PROLOG
#define FID_Unreal_Projects_NewRPG_Source_NewRPG_AlignmentComponent_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_NewRPG_Source_NewRPG_AlignmentComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_NewRPG_Source_NewRPG_AlignmentComponent_h_14_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_NewRPG_Source_NewRPG_AlignmentComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NEWRPG_API UClass* StaticClass<class UAlignmentComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_NewRPG_Source_NewRPG_AlignmentComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
