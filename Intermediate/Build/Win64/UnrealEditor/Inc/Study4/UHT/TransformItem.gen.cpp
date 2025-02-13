// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Study4/Public/TransformItem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTransformItem() {}

// Begin Cross Module References
STUDY4_API UClass* Z_Construct_UClass_ABaseItem();
STUDY4_API UClass* Z_Construct_UClass_ATransformItem();
STUDY4_API UClass* Z_Construct_UClass_ATransformItem_NoRegister();
UPackage* Z_Construct_UPackage__Script_Study4();
// End Cross Module References

// Begin Class ATransformItem
void ATransformItem::StaticRegisterNativesATransformItem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATransformItem);
UClass* Z_Construct_UClass_ATransformItem_NoRegister()
{
	return ATransformItem::StaticClass();
}
struct Z_Construct_UClass_ATransformItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "TransformItem.h" },
		{ "ModuleRelativePath", "Public/TransformItem.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATransformItem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ATransformItem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ABaseItem,
	(UObject* (*)())Z_Construct_UPackage__Script_Study4,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATransformItem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATransformItem_Statics::ClassParams = {
	&ATransformItem::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATransformItem_Statics::Class_MetaDataParams), Z_Construct_UClass_ATransformItem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATransformItem()
{
	if (!Z_Registration_Info_UClass_ATransformItem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATransformItem.OuterSingleton, Z_Construct_UClass_ATransformItem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATransformItem.OuterSingleton;
}
template<> STUDY4_API UClass* StaticClass<ATransformItem>()
{
	return ATransformItem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATransformItem);
ATransformItem::~ATransformItem() {}
// End Class ATransformItem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_heath_Documents_Unreal_Projects_Study4_Source_Study4_Public_TransformItem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATransformItem, ATransformItem::StaticClass, TEXT("ATransformItem"), &Z_Registration_Info_UClass_ATransformItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATransformItem), 1356206499U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_heath_Documents_Unreal_Projects_Study4_Source_Study4_Public_TransformItem_h_1516467089(TEXT("/Script/Study4"),
	Z_CompiledInDeferFile_FID_Users_heath_Documents_Unreal_Projects_Study4_Source_Study4_Public_TransformItem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_heath_Documents_Unreal_Projects_Study4_Source_Study4_Public_TransformItem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
