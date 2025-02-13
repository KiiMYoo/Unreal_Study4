// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Study4/Public/RoatatingObstacle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRoatatingObstacle() {}

// Begin Cross Module References
STUDY4_API UClass* Z_Construct_UClass_ABaseObstacle();
STUDY4_API UClass* Z_Construct_UClass_ARoatatingObstacle();
STUDY4_API UClass* Z_Construct_UClass_ARoatatingObstacle_NoRegister();
UPackage* Z_Construct_UPackage__Script_Study4();
// End Cross Module References

// Begin Class ARoatatingObstacle
void ARoatatingObstacle::StaticRegisterNativesARoatatingObstacle()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARoatatingObstacle);
UClass* Z_Construct_UClass_ARoatatingObstacle_NoRegister()
{
	return ARoatatingObstacle::StaticClass();
}
struct Z_Construct_UClass_ARoatatingObstacle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "RoatatingObstacle.h" },
		{ "ModuleRelativePath", "Public/RoatatingObstacle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationSpeed_MetaData[] = {
		{ "Category", "Obstacle" },
		{ "ModuleRelativePath", "Public/RoatatingObstacle.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RotationSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARoatatingObstacle>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARoatatingObstacle_Statics::NewProp_RotationSpeed = { "RotationSpeed", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARoatatingObstacle, RotationSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationSpeed_MetaData), NewProp_RotationSpeed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARoatatingObstacle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoatatingObstacle_Statics::NewProp_RotationSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARoatatingObstacle_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ARoatatingObstacle_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ABaseObstacle,
	(UObject* (*)())Z_Construct_UPackage__Script_Study4,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARoatatingObstacle_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ARoatatingObstacle_Statics::ClassParams = {
	&ARoatatingObstacle::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ARoatatingObstacle_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ARoatatingObstacle_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARoatatingObstacle_Statics::Class_MetaDataParams), Z_Construct_UClass_ARoatatingObstacle_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ARoatatingObstacle()
{
	if (!Z_Registration_Info_UClass_ARoatatingObstacle.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARoatatingObstacle.OuterSingleton, Z_Construct_UClass_ARoatatingObstacle_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ARoatatingObstacle.OuterSingleton;
}
template<> STUDY4_API UClass* StaticClass<ARoatatingObstacle>()
{
	return ARoatatingObstacle::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ARoatatingObstacle);
ARoatatingObstacle::~ARoatatingObstacle() {}
// End Class ARoatatingObstacle

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_heath_Documents_Unreal_Projects_Study4_Source_Study4_Public_RoatatingObstacle_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ARoatatingObstacle, ARoatatingObstacle::StaticClass, TEXT("ARoatatingObstacle"), &Z_Registration_Info_UClass_ARoatatingObstacle, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARoatatingObstacle), 1144978016U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_heath_Documents_Unreal_Projects_Study4_Source_Study4_Public_RoatatingObstacle_h_2673661818(TEXT("/Script/Study4"),
	Z_CompiledInDeferFile_FID_Users_heath_Documents_Unreal_Projects_Study4_Source_Study4_Public_RoatatingObstacle_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_heath_Documents_Unreal_Projects_Study4_Source_Study4_Public_RoatatingObstacle_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
