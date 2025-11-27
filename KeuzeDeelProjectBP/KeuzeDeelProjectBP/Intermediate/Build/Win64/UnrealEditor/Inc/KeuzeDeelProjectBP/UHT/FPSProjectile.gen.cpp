// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KeuzeDeelProjectBP/FPSProjectile.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeFPSProjectile() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
KEUZEDEELPROJECTBP_API UClass* Z_Construct_UClass_AFPSProjectile();
KEUZEDEELPROJECTBP_API UClass* Z_Construct_UClass_AFPSProjectile_NoRegister();
UPackage* Z_Construct_UPackage__Script_KeuzeDeelProjectBP();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AFPSProjectile ***********************************************************
void AFPSProjectile::StaticRegisterNativesAFPSProjectile()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AFPSProjectile;
UClass* AFPSProjectile::GetPrivateStaticClass()
{
	using TClass = AFPSProjectile;
	if (!Z_Registration_Info_UClass_AFPSProjectile.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("FPSProjectile"),
			Z_Registration_Info_UClass_AFPSProjectile.InnerSingleton,
			StaticRegisterNativesAFPSProjectile,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_AFPSProjectile.InnerSingleton;
}
UClass* Z_Construct_UClass_AFPSProjectile_NoRegister()
{
	return AFPSProjectile::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AFPSProjectile_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "FPSProjectile.h" },
		{ "ModuleRelativePath", "FPSProjectile.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFPSProjectile>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AFPSProjectile_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_KeuzeDeelProjectBP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFPSProjectile_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AFPSProjectile_Statics::ClassParams = {
	&AFPSProjectile::StaticClass,
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
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFPSProjectile_Statics::Class_MetaDataParams), Z_Construct_UClass_AFPSProjectile_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AFPSProjectile()
{
	if (!Z_Registration_Info_UClass_AFPSProjectile.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFPSProjectile.OuterSingleton, Z_Construct_UClass_AFPSProjectile_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AFPSProjectile.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AFPSProjectile);
AFPSProjectile::~AFPSProjectile() {}
// ********** End Class AFPSProjectile *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Bureaublad_Verdieping_software_2_KeuzeDeelProjectBP_KeuzeDeelProjectBP_Source_KeuzeDeelProjectBP_FPSProjectile_h__Script_KeuzeDeelProjectBP_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AFPSProjectile, AFPSProjectile::StaticClass, TEXT("AFPSProjectile"), &Z_Registration_Info_UClass_AFPSProjectile, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFPSProjectile), 762460820U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Bureaublad_Verdieping_software_2_KeuzeDeelProjectBP_KeuzeDeelProjectBP_Source_KeuzeDeelProjectBP_FPSProjectile_h__Script_KeuzeDeelProjectBP_1001710651(TEXT("/Script/KeuzeDeelProjectBP"),
	Z_CompiledInDeferFile_FID_Bureaublad_Verdieping_software_2_KeuzeDeelProjectBP_KeuzeDeelProjectBP_Source_KeuzeDeelProjectBP_FPSProjectile_h__Script_KeuzeDeelProjectBP_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Bureaublad_Verdieping_software_2_KeuzeDeelProjectBP_KeuzeDeelProjectBP_Source_KeuzeDeelProjectBP_FPSProjectile_h__Script_KeuzeDeelProjectBP_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
