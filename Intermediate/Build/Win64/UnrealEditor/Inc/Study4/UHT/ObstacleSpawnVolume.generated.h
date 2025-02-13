// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ObstacleSpawnVolume.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef STUDY4_ObstacleSpawnVolume_generated_h
#error "ObstacleSpawnVolume.generated.h already included, missing '#pragma once' in ObstacleSpawnVolume.h"
#endif
#define STUDY4_ObstacleSpawnVolume_generated_h

#define FID_Users_heath_Documents_Unreal_Projects_Study4_Source_Study4_Public_ObstacleSpawnVolume_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSpawnRandomObstacle);


#define FID_Users_heath_Documents_Unreal_Projects_Study4_Source_Study4_Public_ObstacleSpawnVolume_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAObstacleSpawnVolume(); \
	friend struct Z_Construct_UClass_AObstacleSpawnVolume_Statics; \
public: \
	DECLARE_CLASS(AObstacleSpawnVolume, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Study4"), NO_API) \
	DECLARE_SERIALIZER(AObstacleSpawnVolume)


#define FID_Users_heath_Documents_Unreal_Projects_Study4_Source_Study4_Public_ObstacleSpawnVolume_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AObstacleSpawnVolume(AObstacleSpawnVolume&&); \
	AObstacleSpawnVolume(const AObstacleSpawnVolume&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AObstacleSpawnVolume); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AObstacleSpawnVolume); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AObstacleSpawnVolume) \
	NO_API virtual ~AObstacleSpawnVolume();


#define FID_Users_heath_Documents_Unreal_Projects_Study4_Source_Study4_Public_ObstacleSpawnVolume_h_10_PROLOG
#define FID_Users_heath_Documents_Unreal_Projects_Study4_Source_Study4_Public_ObstacleSpawnVolume_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_heath_Documents_Unreal_Projects_Study4_Source_Study4_Public_ObstacleSpawnVolume_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_heath_Documents_Unreal_Projects_Study4_Source_Study4_Public_ObstacleSpawnVolume_h_13_INCLASS_NO_PURE_DECLS \
	FID_Users_heath_Documents_Unreal_Projects_Study4_Source_Study4_Public_ObstacleSpawnVolume_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STUDY4_API UClass* StaticClass<class AObstacleSpawnVolume>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_heath_Documents_Unreal_Projects_Study4_Source_Study4_Public_ObstacleSpawnVolume_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
