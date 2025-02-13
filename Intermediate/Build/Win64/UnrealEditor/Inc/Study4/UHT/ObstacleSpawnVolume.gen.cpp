// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Study4/Public/ObstacleSpawnVolume.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeObstacleSpawnVolume() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
STUDY4_API UClass* Z_Construct_UClass_AObstacleSpawnVolume();
STUDY4_API UClass* Z_Construct_UClass_AObstacleSpawnVolume_NoRegister();
UPackage* Z_Construct_UPackage__Script_Study4();
// End Cross Module References

// Begin Class AObstacleSpawnVolume Function SpawnRandomObstacle
struct Z_Construct_UFunction_AObstacleSpawnVolume_SpawnRandomObstacle_Statics
{
	struct ObstacleSpawnVolume_eventSpawnRandomObstacle_Parms
	{
		AActor* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Spawning" },
		{ "ModuleRelativePath", "Public/ObstacleSpawnVolume.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AObstacleSpawnVolume_SpawnRandomObstacle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ObstacleSpawnVolume_eventSpawnRandomObstacle_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AObstacleSpawnVolume_SpawnRandomObstacle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AObstacleSpawnVolume_SpawnRandomObstacle_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AObstacleSpawnVolume_SpawnRandomObstacle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AObstacleSpawnVolume_SpawnRandomObstacle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AObstacleSpawnVolume, nullptr, "SpawnRandomObstacle", nullptr, nullptr, Z_Construct_UFunction_AObstacleSpawnVolume_SpawnRandomObstacle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AObstacleSpawnVolume_SpawnRandomObstacle_Statics::PropPointers), sizeof(Z_Construct_UFunction_AObstacleSpawnVolume_SpawnRandomObstacle_Statics::ObstacleSpawnVolume_eventSpawnRandomObstacle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AObstacleSpawnVolume_SpawnRandomObstacle_Statics::Function_MetaDataParams), Z_Construct_UFunction_AObstacleSpawnVolume_SpawnRandomObstacle_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AObstacleSpawnVolume_SpawnRandomObstacle_Statics::ObstacleSpawnVolume_eventSpawnRandomObstacle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AObstacleSpawnVolume_SpawnRandomObstacle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AObstacleSpawnVolume_SpawnRandomObstacle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AObstacleSpawnVolume::execSpawnRandomObstacle)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AActor**)Z_Param__Result=P_THIS->SpawnRandomObstacle();
	P_NATIVE_END;
}
// End Class AObstacleSpawnVolume Function SpawnRandomObstacle

// Begin Class AObstacleSpawnVolume
void AObstacleSpawnVolume::StaticRegisterNativesAObstacleSpawnVolume()
{
	UClass* Class = AObstacleSpawnVolume::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SpawnRandomObstacle", &AObstacleSpawnVolume::execSpawnRandomObstacle },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AObstacleSpawnVolume);
UClass* Z_Construct_UClass_AObstacleSpawnVolume_NoRegister()
{
	return AObstacleSpawnVolume::StaticClass();
}
struct Z_Construct_UClass_AObstacleSpawnVolume_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "ObstacleSpawnVolume.h" },
		{ "ModuleRelativePath", "Public/ObstacleSpawnVolume.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Scene_MetaData[] = {
		{ "Category", "Spawning" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ObstacleSpawnVolume.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawningBox_MetaData[] = {
		{ "Category", "Spawning" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ObstacleSpawnVolume.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObstacleDataTable_MetaData[] = {
		{ "Category", "Spawning" },
		{ "ModuleRelativePath", "Public/ObstacleSpawnVolume.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Scene;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpawningBox;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ObstacleDataTable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AObstacleSpawnVolume_SpawnRandomObstacle, "SpawnRandomObstacle" }, // 818660466
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AObstacleSpawnVolume>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AObstacleSpawnVolume_Statics::NewProp_Scene = { "Scene", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AObstacleSpawnVolume, Scene), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Scene_MetaData), NewProp_Scene_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AObstacleSpawnVolume_Statics::NewProp_SpawningBox = { "SpawningBox", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AObstacleSpawnVolume, SpawningBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawningBox_MetaData), NewProp_SpawningBox_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AObstacleSpawnVolume_Statics::NewProp_ObstacleDataTable = { "ObstacleDataTable", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AObstacleSpawnVolume, ObstacleDataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObstacleDataTable_MetaData), NewProp_ObstacleDataTable_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AObstacleSpawnVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AObstacleSpawnVolume_Statics::NewProp_Scene,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AObstacleSpawnVolume_Statics::NewProp_SpawningBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AObstacleSpawnVolume_Statics::NewProp_ObstacleDataTable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AObstacleSpawnVolume_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AObstacleSpawnVolume_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Study4,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AObstacleSpawnVolume_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AObstacleSpawnVolume_Statics::ClassParams = {
	&AObstacleSpawnVolume::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AObstacleSpawnVolume_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AObstacleSpawnVolume_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AObstacleSpawnVolume_Statics::Class_MetaDataParams), Z_Construct_UClass_AObstacleSpawnVolume_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AObstacleSpawnVolume()
{
	if (!Z_Registration_Info_UClass_AObstacleSpawnVolume.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AObstacleSpawnVolume.OuterSingleton, Z_Construct_UClass_AObstacleSpawnVolume_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AObstacleSpawnVolume.OuterSingleton;
}
template<> STUDY4_API UClass* StaticClass<AObstacleSpawnVolume>()
{
	return AObstacleSpawnVolume::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AObstacleSpawnVolume);
AObstacleSpawnVolume::~AObstacleSpawnVolume() {}
// End Class AObstacleSpawnVolume

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_heath_Documents_Unreal_Projects_Study4_Source_Study4_Public_ObstacleSpawnVolume_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AObstacleSpawnVolume, AObstacleSpawnVolume::StaticClass, TEXT("AObstacleSpawnVolume"), &Z_Registration_Info_UClass_AObstacleSpawnVolume, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AObstacleSpawnVolume), 3097620803U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_heath_Documents_Unreal_Projects_Study4_Source_Study4_Public_ObstacleSpawnVolume_h_2756154912(TEXT("/Script/Study4"),
	Z_CompiledInDeferFile_FID_Users_heath_Documents_Unreal_Projects_Study4_Source_Study4_Public_ObstacleSpawnVolume_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_heath_Documents_Unreal_Projects_Study4_Source_Study4_Public_ObstacleSpawnVolume_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
