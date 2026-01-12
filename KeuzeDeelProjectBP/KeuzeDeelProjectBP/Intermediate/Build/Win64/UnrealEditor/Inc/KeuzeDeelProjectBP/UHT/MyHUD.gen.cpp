// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KeuzeDeelProjectBP/MyHUD.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMyHUD() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AHUD();
KEUZEDEELPROJECTBP_API UClass* Z_Construct_UClass_AMyHUD();
KEUZEDEELPROJECTBP_API UClass* Z_Construct_UClass_AMyHUD_NoRegister();
UPackage* Z_Construct_UPackage__Script_KeuzeDeelProjectBP();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AMyHUD *******************************************************************
void AMyHUD::StaticRegisterNativesAMyHUD()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AMyHUD;
UClass* AMyHUD::GetPrivateStaticClass()
{
	using TClass = AMyHUD;
	if (!Z_Registration_Info_UClass_AMyHUD.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MyHUD"),
			Z_Registration_Info_UClass_AMyHUD.InnerSingleton,
			StaticRegisterNativesAMyHUD,
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
	return Z_Registration_Info_UClass_AMyHUD.InnerSingleton;
}
UClass* Z_Construct_UClass_AMyHUD_NoRegister()
{
	return AMyHUD::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AMyHUD_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "MyHUD.h" },
		{ "ModuleRelativePath", "MyHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyHUD>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AMyHUD_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AHUD,
	(UObject* (*)())Z_Construct_UPackage__Script_KeuzeDeelProjectBP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyHUD_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyHUD_Statics::ClassParams = {
	&AMyHUD::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009003ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyHUD_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyHUD_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMyHUD()
{
	if (!Z_Registration_Info_UClass_AMyHUD.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyHUD.OuterSingleton, Z_Construct_UClass_AMyHUD_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMyHUD.OuterSingleton;
}
AMyHUD::AMyHUD(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMyHUD);
AMyHUD::~AMyHUD() {}
// ********** End Class AMyHUD *********************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Bureaublad_Verdieping_software_2_KeuzeDeelProjectBP_KeuzeDeelProjectBP_Source_KeuzeDeelProjectBP_MyHUD_h__Script_KeuzeDeelProjectBP_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMyHUD, AMyHUD::StaticClass, TEXT("AMyHUD"), &Z_Registration_Info_UClass_AMyHUD, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyHUD), 256507535U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Bureaublad_Verdieping_software_2_KeuzeDeelProjectBP_KeuzeDeelProjectBP_Source_KeuzeDeelProjectBP_MyHUD_h__Script_KeuzeDeelProjectBP_891928780(TEXT("/Script/KeuzeDeelProjectBP"),
	Z_CompiledInDeferFile_FID_Bureaublad_Verdieping_software_2_KeuzeDeelProjectBP_KeuzeDeelProjectBP_Source_KeuzeDeelProjectBP_MyHUD_h__Script_KeuzeDeelProjectBP_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Bureaublad_Verdieping_software_2_KeuzeDeelProjectBP_KeuzeDeelProjectBP_Source_KeuzeDeelProjectBP_MyHUD_h__Script_KeuzeDeelProjectBP_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
