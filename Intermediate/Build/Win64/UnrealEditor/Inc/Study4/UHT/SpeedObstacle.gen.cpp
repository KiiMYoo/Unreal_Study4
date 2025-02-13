// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Study4/Public/SpeedObstacle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpeedObstacle() {}

// Begin Cross Module References
STUDY4_API UClass* Z_Construct_UClass_ABaseObstacle();
STUDY4_API UClass* Z_Construct_UClass_ASpeedObstacle();
STUDY4_API UClass* Z_Construct_UClass_ASpeedObstacle_NoRegister();
UPackage* Z_Construct_UPackage__Script_Study4();
// End Cross Module References

// Begin Class ASpeedObstacle
void ASpeedObstacle::StaticRegisterNativesASpeedObstacle()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASpeedObstacle);
UClass* Z_Construct_UClass_ASpeedObstacle_NoRegister()
{
	return ASpeedObstacle::StaticClass();
}
struct Z_Construct_UClass_ASpeedObstacle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "SpeedObstacle.h" },
		{ "ModuleRelativePath", "Public/SpeedObstacle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpeedUpIntensity_MetaData[] = {
		{ "Category", "Obstacle" },
		{ "ModuleRelativePath", "Public/SpeedObstacle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpeedUpDuration_MetaData[] = {
		{ "Category", "Obstacle" },
		{ "ModuleRelativePath", "Public/SpeedObstacle.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpeedUpIntensity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpeedUpDuration;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASpeedObstacle>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASpeedObstacle_Statics::NewProp_SpeedUpIntensity = { "SpeedUpIntensity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpeedObstacle, SpeedUpIntensity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpeedUpIntensity_MetaData), NewProp_SpeedUpIntensity_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASpeedObstacle_Statics::NewProp_SpeedUpDuration = { "SpeedUpDuration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpeedObstacle, SpeedUpDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpeedUpDuration_MetaData), NewProp_SpeedUpDuration_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASpeedObstacle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpeedObstacle_Statics::NewProp_SpeedUpIntensity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpeedObstacle_Statics::NewProp_SpeedUpDuration,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASpeedObstacle_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ASpeedObstacle_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ABaseObstacle,
	(UObject* (*)())Z_Construct_UPackage__Script_Study4,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASpeedObstacle_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASpeedObstacle_Statics::ClassParams = {
	&ASpeedObstacle::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ASpeedObstacle_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ASpeedObstacle_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASpeedObstacle_Statics::Class_MetaDataParams), Z_Construct_UClass_ASpeedObstacle_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASpeedObstacle()
{
	if (!Z_Registration_Info_UClass_ASpeedObstacle.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASpeedObstacle.OuterSingleton, Z_Construct_UClass_ASpeedObstacle_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASpeedObstacle.OuterSingleton;
}
template<> STUDY4_API UClass* StaticClass<ASpeedObstacle>()
{
	return ASpeedObstacle::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASpeedObstacle);
ASpeedObstacle::~ASpeedObstacle() {}
// End Class ASpeedObstacle

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_heath_Documents_Unreal_Projects_Study4_Source_Study4_Public_SpeedObstacle_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASpeedObstacle, ASpeedObstacle::StaticClass, TEXT("ASpeedObstacle"), &Z_Registration_Info_UClass_ASpeedObstacle, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASpeedObstacle), 2902437637U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_heath_Documents_Unreal_Projects_Study4_Source_Study4_Public_SpeedObstacle_h_3203736057(TEXT("/Script/Study4"),
	Z_CompiledInDeferFile_FID_Users_heath_Documents_Unreal_Projects_Study4_Source_Study4_Public_SpeedObstacle_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_heath_Documents_Unreal_Projects_Study4_Source_Study4_Public_SpeedObstacle_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
