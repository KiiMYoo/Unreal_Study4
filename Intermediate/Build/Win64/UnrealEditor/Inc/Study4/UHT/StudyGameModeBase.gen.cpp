// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Study4/Public/StudyGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStudyGameModeBase() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
STUDY4_API UClass* Z_Construct_UClass_AStudyGameModeBase();
STUDY4_API UClass* Z_Construct_UClass_AStudyGameModeBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_Study4();
// End Cross Module References

// Begin Class AStudyGameModeBase
void AStudyGameModeBase::StaticRegisterNativesAStudyGameModeBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AStudyGameModeBase);
UClass* Z_Construct_UClass_AStudyGameModeBase_NoRegister()
{
	return AStudyGameModeBase::StaticClass();
}
struct Z_Construct_UClass_AStudyGameModeBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "StudyGameModeBase.h" },
		{ "ModuleRelativePath", "Public/StudyGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AStudyGameModeBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AStudyGameModeBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Study4,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AStudyGameModeBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AStudyGameModeBase_Statics::ClassParams = {
	&AStudyGameModeBase::StaticClass,
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
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AStudyGameModeBase_Statics::Class_MetaDataParams), Z_Construct_UClass_AStudyGameModeBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AStudyGameModeBase()
{
	if (!Z_Registration_Info_UClass_AStudyGameModeBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AStudyGameModeBase.OuterSingleton, Z_Construct_UClass_AStudyGameModeBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AStudyGameModeBase.OuterSingleton;
}
template<> STUDY4_API UClass* StaticClass<AStudyGameModeBase>()
{
	return AStudyGameModeBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AStudyGameModeBase);
AStudyGameModeBase::~AStudyGameModeBase() {}
// End Class AStudyGameModeBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_heath_Documents_Unreal_Projects_Study4_Source_Study4_Public_StudyGameModeBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AStudyGameModeBase, AStudyGameModeBase::StaticClass, TEXT("AStudyGameModeBase"), &Z_Registration_Info_UClass_AStudyGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AStudyGameModeBase), 746577228U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_heath_Documents_Unreal_Projects_Study4_Source_Study4_Public_StudyGameModeBase_h_638512335(TEXT("/Script/Study4"),
	Z_CompiledInDeferFile_FID_Users_heath_Documents_Unreal_Projects_Study4_Source_Study4_Public_StudyGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_heath_Documents_Unreal_Projects_Study4_Source_Study4_Public_StudyGameModeBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
