// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EXPComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NEWRPG_EXPComponent_generated_h
#error "EXPComponent.generated.h already included, missing '#pragma once' in EXPComponent.h"
#endif
#define NEWRPG_EXPComponent_generated_h

#define FID_Unreal_Projects_NewRPG_Source_NewRPG_EXPComponent_h_9_DELEGATE \
NEWRPG_API void FOnEXPEarned_DelegateWrapper(const FMulticastScriptDelegate& OnEXPEarned);


#define FID_Unreal_Projects_NewRPG_Source_NewRPG_EXPComponent_h_10_DELEGATE \
NEWRPG_API void FOnLevelUp_DelegateWrapper(const FMulticastScriptDelegate& OnLevelUp);


#define FID_Unreal_Projects_NewRPG_Source_NewRPG_EXPComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execLevelUp); \
	DECLARE_FUNCTION(execEarnEXP);


#define FID_Unreal_Projects_NewRPG_Source_NewRPG_EXPComponent_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEXPComponent(); \
	friend struct Z_Construct_UClass_UEXPComponent_Statics; \
public: \
	DECLARE_CLASS(UEXPComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NewRPG"), NO_API) \
	DECLARE_SERIALIZER(UEXPComponent)


#define FID_Unreal_Projects_NewRPG_Source_NewRPG_EXPComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UEXPComponent(UEXPComponent&&); \
	UEXPComponent(const UEXPComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEXPComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEXPComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UEXPComponent) \
	NO_API virtual ~UEXPComponent();


#define FID_Unreal_Projects_NewRPG_Source_NewRPG_EXPComponent_h_12_PROLOG
#define FID_Unreal_Projects_NewRPG_Source_NewRPG_EXPComponent_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_NewRPG_Source_NewRPG_EXPComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_NewRPG_Source_NewRPG_EXPComponent_h_15_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_NewRPG_Source_NewRPG_EXPComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NEWRPG_API UClass* StaticClass<class UEXPComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_NewRPG_Source_NewRPG_EXPComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
