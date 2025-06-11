// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ItemBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ANewRPGCharacter;
#ifdef NEWRPG_ItemBase_generated_h
#error "ItemBase.generated.h already included, missing '#pragma once' in ItemBase.h"
#endif
#define NEWRPG_ItemBase_generated_h

#define FID_Unreal_Projects_NewRPG_Source_NewRPG_ItemBase_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execInteract); \
	DECLARE_FUNCTION(execPickedUp);


#define FID_Unreal_Projects_NewRPG_Source_NewRPG_ItemBase_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAItemBase(); \
	friend struct Z_Construct_UClass_AItemBase_Statics; \
public: \
	DECLARE_CLASS(AItemBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NewRPG"), NO_API) \
	DECLARE_SERIALIZER(AItemBase) \
	virtual UObject* _getUObject() const override { return const_cast<AItemBase*>(this); }


#define FID_Unreal_Projects_NewRPG_Source_NewRPG_ItemBase_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AItemBase(AItemBase&&); \
	AItemBase(const AItemBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AItemBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AItemBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AItemBase) \
	NO_API virtual ~AItemBase();


#define FID_Unreal_Projects_NewRPG_Source_NewRPG_ItemBase_h_16_PROLOG
#define FID_Unreal_Projects_NewRPG_Source_NewRPG_ItemBase_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_NewRPG_Source_NewRPG_ItemBase_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_NewRPG_Source_NewRPG_ItemBase_h_19_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_NewRPG_Source_NewRPG_ItemBase_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NEWRPG_API UClass* StaticClass<class AItemBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_NewRPG_Source_NewRPG_ItemBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
