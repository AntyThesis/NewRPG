// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NPCBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ANewRPGCharacter;
#ifdef NEWRPG_NPCBase_generated_h
#error "NPCBase.generated.h already included, missing '#pragma once' in NPCBase.h"
#endif
#define NEWRPG_NPCBase_generated_h

#define FID_Unreal_Projects_NewRPG_Source_NewRPG_NPCBase_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execInteract);


#define FID_Unreal_Projects_NewRPG_Source_NewRPG_NPCBase_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANPCBase(); \
	friend struct Z_Construct_UClass_ANPCBase_Statics; \
public: \
	DECLARE_CLASS(ANPCBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NewRPG"), NO_API) \
	DECLARE_SERIALIZER(ANPCBase) \
	virtual UObject* _getUObject() const override { return const_cast<ANPCBase*>(this); }


#define FID_Unreal_Projects_NewRPG_Source_NewRPG_NPCBase_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ANPCBase(ANPCBase&&); \
	ANPCBase(const ANPCBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANPCBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANPCBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ANPCBase) \
	NO_API virtual ~ANPCBase();


#define FID_Unreal_Projects_NewRPG_Source_NewRPG_NPCBase_h_10_PROLOG
#define FID_Unreal_Projects_NewRPG_Source_NewRPG_NPCBase_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_NewRPG_Source_NewRPG_NPCBase_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_NewRPG_Source_NewRPG_NPCBase_h_13_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_NewRPG_Source_NewRPG_NPCBase_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NEWRPG_API UClass* StaticClass<class ANPCBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_NewRPG_Source_NewRPG_NPCBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
