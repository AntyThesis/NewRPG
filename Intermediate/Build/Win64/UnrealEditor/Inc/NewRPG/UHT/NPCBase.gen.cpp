// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NewRPG/NPCBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNPCBase() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
NEWRPG_API UClass* Z_Construct_UClass_ANPCBase();
NEWRPG_API UClass* Z_Construct_UClass_ANPCBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_NewRPG();
// End Cross Module References

// Begin Class ANPCBase
void ANPCBase::StaticRegisterNativesANPCBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANPCBase);
UClass* Z_Construct_UClass_ANPCBase_NoRegister()
{
	return ANPCBase::StaticClass();
}
struct Z_Construct_UClass_ANPCBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "NPCBase.h" },
		{ "ModuleRelativePath", "NPCBase.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANPCBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ANPCBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_NewRPG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANPCBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ANPCBase_Statics::ClassParams = {
	&ANPCBase::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANPCBase_Statics::Class_MetaDataParams), Z_Construct_UClass_ANPCBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ANPCBase()
{
	if (!Z_Registration_Info_UClass_ANPCBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANPCBase.OuterSingleton, Z_Construct_UClass_ANPCBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ANPCBase.OuterSingleton;
}
template<> NEWRPG_API UClass* StaticClass<ANPCBase>()
{
	return ANPCBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ANPCBase);
ANPCBase::~ANPCBase() {}
// End Class ANPCBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_NewRPG_Source_NewRPG_NPCBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ANPCBase, ANPCBase::StaticClass, TEXT("ANPCBase"), &Z_Registration_Info_UClass_ANPCBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANPCBase), 567215156U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_NewRPG_Source_NewRPG_NPCBase_h_1198099003(TEXT("/Script/NewRPG"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_NewRPG_Source_NewRPG_NPCBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_NewRPG_Source_NewRPG_NPCBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
