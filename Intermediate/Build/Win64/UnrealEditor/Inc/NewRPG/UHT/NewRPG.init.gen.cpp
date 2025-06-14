// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNewRPG_init() {}
	NEWRPG_API UFunction* Z_Construct_UDelegateFunction_NewRPG_OnDeath__DelegateSignature();
	NEWRPG_API UFunction* Z_Construct_UDelegateFunction_NewRPG_OnEXPEarned__DelegateSignature();
	NEWRPG_API UFunction* Z_Construct_UDelegateFunction_NewRPG_OnHealthChanged__DelegateSignature();
	NEWRPG_API UFunction* Z_Construct_UDelegateFunction_NewRPG_OnItemAdded__DelegateSignature();
	NEWRPG_API UFunction* Z_Construct_UDelegateFunction_NewRPG_OnItemRemoved__DelegateSignature();
	NEWRPG_API UFunction* Z_Construct_UDelegateFunction_NewRPG_OnLevelUp__DelegateSignature();
	NEWRPG_API UFunction* Z_Construct_UDelegateFunction_NewRPG_OnManaChanged__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_NewRPG;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_NewRPG()
	{
		if (!Z_Registration_Info_UPackage__Script_NewRPG.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_NewRPG_OnDeath__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_NewRPG_OnEXPEarned__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_NewRPG_OnHealthChanged__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_NewRPG_OnItemAdded__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_NewRPG_OnItemRemoved__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_NewRPG_OnLevelUp__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_NewRPG_OnManaChanged__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/NewRPG",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x8DFF21E4,
				0x8C46DCEF,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_NewRPG.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_NewRPG.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_NewRPG(Z_Construct_UPackage__Script_NewRPG, TEXT("/Script/NewRPG"), Z_Registration_Info_UPackage__Script_NewRPG, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x8DFF21E4, 0x8C46DCEF));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
