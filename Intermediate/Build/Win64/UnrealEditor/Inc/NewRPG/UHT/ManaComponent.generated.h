// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ManaComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NEWRPG_ManaComponent_generated_h
#error "ManaComponent.generated.h already included, missing '#pragma once' in ManaComponent.h"
#endif
#define NEWRPG_ManaComponent_generated_h

#define FID_Unreal_Projects_NewRPG_Source_NewRPG_ManaComponent_h_10_DELEGATE \
NEWRPG_API void FOnManaChanged_DelegateWrapper(const FMulticastScriptDelegate& OnManaChanged);


#define FID_Unreal_Projects_NewRPG_Source_NewRPG_ManaComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execAffectMana);


#define FID_Unreal_Projects_NewRPG_Source_NewRPG_ManaComponent_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUManaComponent(); \
	friend struct Z_Construct_UClass_UManaComponent_Statics; \
public: \
	DECLARE_CLASS(UManaComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NewRPG"), NO_API) \
	DECLARE_SERIALIZER(UManaComponent)


#define FID_Unreal_Projects_NewRPG_Source_NewRPG_ManaComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UManaComponent(UManaComponent&&); \
	UManaComponent(const UManaComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UManaComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UManaComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UManaComponent) \
	NO_API virtual ~UManaComponent();


#define FID_Unreal_Projects_NewRPG_Source_NewRPG_ManaComponent_h_12_PROLOG
#define FID_Unreal_Projects_NewRPG_Source_NewRPG_ManaComponent_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_NewRPG_Source_NewRPG_ManaComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_NewRPG_Source_NewRPG_ManaComponent_h_15_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_NewRPG_Source_NewRPG_ManaComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NEWRPG_API UClass* StaticClass<class UManaComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_NewRPG_Source_NewRPG_ManaComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
