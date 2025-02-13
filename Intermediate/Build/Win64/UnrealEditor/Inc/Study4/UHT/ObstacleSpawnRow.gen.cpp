// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Study4/Public/ObstacleSpawnRow.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeObstacleSpawnRow() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
STUDY4_API UScriptStruct* Z_Construct_UScriptStruct_FObstacleSpawnRow();
UPackage* Z_Construct_UPackage__Script_Study4();
// End Cross Module References

// Begin ScriptStruct FObstacleSpawnRow
static_assert(std::is_polymorphic<FObstacleSpawnRow>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FObstacleSpawnRow cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ObstacleSpawnRow;
class UScriptStruct* FObstacleSpawnRow::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ObstacleSpawnRow.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ObstacleSpawnRow.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FObstacleSpawnRow, (UObject*)Z_Construct_UPackage__Script_Study4(), TEXT("ObstacleSpawnRow"));
	}
	return Z_Registration_Info_UScriptStruct_ObstacleSpawnRow.OuterSingleton;
}
template<> STUDY4_API UScriptStruct* StaticStruct<FObstacleSpawnRow>()
{
	return FObstacleSpawnRow::StaticStruct();
}
struct Z_Construct_UScriptStruct_FObstacleSpawnRow_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ObstacleSpawnRow.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObstacleName_MetaData[] = {
		{ "Category", "ObstacleSpawnRow" },
		{ "ModuleRelativePath", "Public/ObstacleSpawnRow.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObstacleClass_MetaData[] = {
		{ "Category", "ObstacleSpawnRow" },
		{ "ModuleRelativePath", "Public/ObstacleSpawnRow.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnChance_MetaData[] = {
		{ "Category", "ObstacleSpawnRow" },
		{ "ModuleRelativePath", "Public/ObstacleSpawnRow.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ObstacleName;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ObstacleClass;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpawnChance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FObstacleSpawnRow>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FObstacleSpawnRow_Statics::NewProp_ObstacleName = { "ObstacleName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FObstacleSpawnRow, ObstacleName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObstacleName_MetaData), NewProp_ObstacleName_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FObstacleSpawnRow_Statics::NewProp_ObstacleClass = { "ObstacleClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FObstacleSpawnRow, ObstacleClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObstacleClass_MetaData), NewProp_ObstacleClass_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FObstacleSpawnRow_Statics::NewProp_SpawnChance = { "SpawnChance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FObstacleSpawnRow, SpawnChance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnChance_MetaData), NewProp_SpawnChance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FObstacleSpawnRow_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FObstacleSpawnRow_Statics::NewProp_ObstacleName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FObstacleSpawnRow_Statics::NewProp_ObstacleClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FObstacleSpawnRow_Statics::NewProp_SpawnChance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FObstacleSpawnRow_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FObstacleSpawnRow_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Study4,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"ObstacleSpawnRow",
	Z_Construct_UScriptStruct_FObstacleSpawnRow_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FObstacleSpawnRow_Statics::PropPointers),
	sizeof(FObstacleSpawnRow),
	alignof(FObstacleSpawnRow),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FObstacleSpawnRow_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FObstacleSpawnRow_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FObstacleSpawnRow()
{
	if (!Z_Registration_Info_UScriptStruct_ObstacleSpawnRow.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ObstacleSpawnRow.InnerSingleton, Z_Construct_UScriptStruct_FObstacleSpawnRow_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ObstacleSpawnRow.InnerSingleton;
}
// End ScriptStruct FObstacleSpawnRow

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_heath_Documents_Unreal_Projects_Study4_Source_Study4_Public_ObstacleSpawnRow_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FObstacleSpawnRow::StaticStruct, Z_Construct_UScriptStruct_FObstacleSpawnRow_Statics::NewStructOps, TEXT("ObstacleSpawnRow"), &Z_Registration_Info_UScriptStruct_ObstacleSpawnRow, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FObstacleSpawnRow), 2104584498U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_heath_Documents_Unreal_Projects_Study4_Source_Study4_Public_ObstacleSpawnRow_h_722622083(TEXT("/Script/Study4"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_heath_Documents_Unreal_Projects_Study4_Source_Study4_Public_ObstacleSpawnRow_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_heath_Documents_Unreal_Projects_Study4_Source_Study4_Public_ObstacleSpawnRow_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
