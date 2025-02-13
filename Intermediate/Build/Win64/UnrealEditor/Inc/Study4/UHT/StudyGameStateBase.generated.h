// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "StudyGameStateBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STUDY4_StudyGameStateBase_generated_h
#error "StudyGameStateBase.generated.h already included, missing '#pragma once' in StudyGameStateBase.h"
#endif
#define STUDY4_StudyGameStateBase_generated_h

#define FID_Users_heath_Documents_Unreal_Projects_Study4_Source_Study4_Public_StudyGameStateBase_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnGameOver); \
	DECLARE_FUNCTION(execAddScore); \
	DECLARE_FUNCTION(execGetScore);


#define FID_Users_heath_Documents_Unreal_Projects_Study4_Source_Study4_Public_StudyGameStateBase_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAStudyGameStateBase(); \
	friend struct Z_Construct_UClass_AStudyGameStateBase_Statics; \
public: \
	DECLARE_CLASS(AStudyGameStateBase, AGameStateBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Study4"), NO_API) \
	DECLARE_SERIALIZER(AStudyGameStateBase)


#define FID_Users_heath_Documents_Unreal_Projects_Study4_Source_Study4_Public_StudyGameStateBase_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AStudyGameStateBase(AStudyGameStateBase&&); \
	AStudyGameStateBase(const AStudyGameStateBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AStudyGameStateBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AStudyGameStateBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AStudyGameStateBase) \
	NO_API virtual ~AStudyGameStateBase();


#define FID_Users_heath_Documents_Unreal_Projects_Study4_Source_Study4_Public_StudyGameStateBase_h_7_PROLOG
#define FID_Users_heath_Documents_Unreal_Projects_Study4_Source_Study4_Public_StudyGameStateBase_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_heath_Documents_Unreal_Projects_Study4_Source_Study4_Public_StudyGameStateBase_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_heath_Documents_Unreal_Projects_Study4_Source_Study4_Public_StudyGameStateBase_h_10_INCLASS_NO_PURE_DECLS \
	FID_Users_heath_Documents_Unreal_Projects_Study4_Source_Study4_Public_StudyGameStateBase_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STUDY4_API UClass* StaticClass<class AStudyGameStateBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_heath_Documents_Unreal_Projects_Study4_Source_Study4_Public_StudyGameStateBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
