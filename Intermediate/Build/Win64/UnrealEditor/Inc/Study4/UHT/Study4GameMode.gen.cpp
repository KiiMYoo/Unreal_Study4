// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Study4/Study4GameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStudy4GameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
STUDY4_API UClass* Z_Construct_UClass_AStudy4GameMode();
STUDY4_API UClass* Z_Construct_UClass_AStudy4GameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_Study4();
// End Cross Module References

// Begin Class AStudy4GameMode
void AStudy4GameMode::StaticRegisterNativesAStudy4GameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AStudy4GameMode);
UClass* Z_Construct_UClass_AStudy4GameMode_NoRegister()
{
	return AStudy4GameMode::StaticClass();
}
struct Z_Construct_UClass_AStudy4GameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Study4GameMode.h" },
		{ "ModuleRelativePath", "Study4GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AStudy4GameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AStudy4GameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Study4,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AStudy4GameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AStudy4GameMode_Statics::ClassParams = {
	&AStudy4GameMode::StaticClass,
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
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AStudy4GameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AStudy4GameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AStudy4GameMode()
{
	if (!Z_Registration_Info_UClass_AStudy4GameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AStudy4GameMode.OuterSingleton, Z_Construct_UClass_AStudy4GameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AStudy4GameMode.OuterSingleton;
}
template<> STUDY4_API UClass* StaticClass<AStudy4GameMode>()
{
	return AStudy4GameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AStudy4GameMode);
AStudy4GameMode::~AStudy4GameMode() {}
// End Class AStudy4GameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_heath_Documents_Unreal_Projects_Study4_Source_Study4_Study4GameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AStudy4GameMode, AStudy4GameMode::StaticClass, TEXT("AStudy4GameMode"), &Z_Registration_Info_UClass_AStudy4GameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AStudy4GameMode), 2034176597U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_heath_Documents_Unreal_Projects_Study4_Source_Study4_Study4GameMode_h_1916302279(TEXT("/Script/Study4"),
	Z_CompiledInDeferFile_FID_Users_heath_Documents_Unreal_Projects_Study4_Source_Study4_Study4GameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_heath_Documents_Unreal_Projects_Study4_Source_Study4_Study4GameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
