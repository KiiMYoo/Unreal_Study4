// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ObstacleInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef STUDY4_ObstacleInterface_generated_h
#error "ObstacleInterface.generated.h already included, missing '#pragma once' in ObstacleInterface.h"
#endif
#define STUDY4_ObstacleInterface_generated_h

#define FID_Users_heath_Documents_Unreal_Projects_Study4_Source_Study4_Public_ObstacleInterface_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnObstacleOverlap);


#define FID_Users_heath_Documents_Unreal_Projects_Study4_Source_Study4_Public_ObstacleInterface_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	STUDY4_API UObstacleInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UObstacleInterface(UObstacleInterface&&); \
	UObstacleInterface(const UObstacleInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(STUDY4_API, UObstacleInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UObstacleInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UObstacleInterface) \
	STUDY4_API virtual ~UObstacleInterface();


#define FID_Users_heath_Documents_Unreal_Projects_Study4_Source_Study4_Public_ObstacleInterface_h_11_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUObstacleInterface(); \
	friend struct Z_Construct_UClass_UObstacleInterface_Statics; \
public: \
	DECLARE_CLASS(UObstacleInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Study4"), STUDY4_API) \
	DECLARE_SERIALIZER(UObstacleInterface)


#define FID_Users_heath_Documents_Unreal_Projects_Study4_Source_Study4_Public_ObstacleInterface_h_11_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Users_heath_Documents_Unreal_Projects_Study4_Source_Study4_Public_ObstacleInterface_h_11_GENERATED_UINTERFACE_BODY() \
	FID_Users_heath_Documents_Unreal_Projects_Study4_Source_Study4_Public_ObstacleInterface_h_11_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_heath_Documents_Unreal_Projects_Study4_Source_Study4_Public_ObstacleInterface_h_11_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IObstacleInterface() {} \
public: \
	typedef UObstacleInterface UClassType; \
	typedef IObstacleInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Users_heath_Documents_Unreal_Projects_Study4_Source_Study4_Public_ObstacleInterface_h_8_PROLOG
#define FID_Users_heath_Documents_Unreal_Projects_Study4_Source_Study4_Public_ObstacleInterface_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_heath_Documents_Unreal_Projects_Study4_Source_Study4_Public_ObstacleInterface_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_heath_Documents_Unreal_Projects_Study4_Source_Study4_Public_ObstacleInterface_h_11_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STUDY4_API UClass* StaticClass<class UObstacleInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_heath_Documents_Unreal_Projects_Study4_Source_Study4_Public_ObstacleInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
