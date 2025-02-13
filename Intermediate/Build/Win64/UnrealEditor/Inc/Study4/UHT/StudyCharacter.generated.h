// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "StudyCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FInputActionValue;
#ifdef STUDY4_StudyCharacter_generated_h
#error "StudyCharacter.generated.h already included, missing '#pragma once' in StudyCharacter.h"
#endif
#define STUDY4_StudyCharacter_generated_h

#define FID_Users_heath_Documents_Unreal_Projects_Study4_Source_Study4_Public_StudyCharacter_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execStopSprint); \
	DECLARE_FUNCTION(execStartSprint); \
	DECLARE_FUNCTION(execLook); \
	DECLARE_FUNCTION(execStopJump); \
	DECLARE_FUNCTION(execStartJump); \
	DECLARE_FUNCTION(execMove); \
	DECLARE_FUNCTION(execResetSize); \
	DECLARE_FUNCTION(execChangeSize); \
	DECLARE_FUNCTION(execChangeSpeed); \
	DECLARE_FUNCTION(execResetSpeed); \
	DECLARE_FUNCTION(execAddHealth); \
	DECLARE_FUNCTION(execGetHealth); \
	DECLARE_FUNCTION(execGetSpeed);


#define FID_Users_heath_Documents_Unreal_Projects_Study4_Source_Study4_Public_StudyCharacter_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAStudyCharacter(); \
	friend struct Z_Construct_UClass_AStudyCharacter_Statics; \
public: \
	DECLARE_CLASS(AStudyCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Study4"), NO_API) \
	DECLARE_SERIALIZER(AStudyCharacter)


#define FID_Users_heath_Documents_Unreal_Projects_Study4_Source_Study4_Public_StudyCharacter_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AStudyCharacter(AStudyCharacter&&); \
	AStudyCharacter(const AStudyCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AStudyCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AStudyCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AStudyCharacter) \
	NO_API virtual ~AStudyCharacter();


#define FID_Users_heath_Documents_Unreal_Projects_Study4_Source_Study4_Public_StudyCharacter_h_13_PROLOG
#define FID_Users_heath_Documents_Unreal_Projects_Study4_Source_Study4_Public_StudyCharacter_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_heath_Documents_Unreal_Projects_Study4_Source_Study4_Public_StudyCharacter_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_heath_Documents_Unreal_Projects_Study4_Source_Study4_Public_StudyCharacter_h_16_INCLASS_NO_PURE_DECLS \
	FID_Users_heath_Documents_Unreal_Projects_Study4_Source_Study4_Public_StudyCharacter_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STUDY4_API UClass* StaticClass<class AStudyCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_heath_Documents_Unreal_Projects_Study4_Source_Study4_Public_StudyCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
