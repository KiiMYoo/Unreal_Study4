// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "StudyPlayerController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UUserWidget;
#ifdef STUDY4_StudyPlayerController_generated_h
#error "StudyPlayerController.generated.h already included, missing '#pragma once' in StudyPlayerController.h"
#endif
#define STUDY4_StudyPlayerController_generated_h

#define FID_Users_heath_Documents_Unreal_Projects_Study4_Source_Study4_Public_StudyPlayerController_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execStartAdvancedLevel); \
	DECLARE_FUNCTION(execStartIntermediateLevel); \
	DECLARE_FUNCTION(execStartGame); \
	DECLARE_FUNCTION(execShowMainMenu); \
	DECLARE_FUNCTION(execShowGameHUD); \
	DECLARE_FUNCTION(execGetHUDWidget);


#define FID_Users_heath_Documents_Unreal_Projects_Study4_Source_Study4_Public_StudyPlayerController_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAStudyPlayerController(); \
	friend struct Z_Construct_UClass_AStudyPlayerController_Statics; \
public: \
	DECLARE_CLASS(AStudyPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Study4"), NO_API) \
	DECLARE_SERIALIZER(AStudyPlayerController)


#define FID_Users_heath_Documents_Unreal_Projects_Study4_Source_Study4_Public_StudyPlayerController_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AStudyPlayerController(AStudyPlayerController&&); \
	AStudyPlayerController(const AStudyPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AStudyPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AStudyPlayerController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AStudyPlayerController) \
	NO_API virtual ~AStudyPlayerController();


#define FID_Users_heath_Documents_Unreal_Projects_Study4_Source_Study4_Public_StudyPlayerController_h_11_PROLOG
#define FID_Users_heath_Documents_Unreal_Projects_Study4_Source_Study4_Public_StudyPlayerController_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_heath_Documents_Unreal_Projects_Study4_Source_Study4_Public_StudyPlayerController_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_heath_Documents_Unreal_Projects_Study4_Source_Study4_Public_StudyPlayerController_h_14_INCLASS_NO_PURE_DECLS \
	FID_Users_heath_Documents_Unreal_Projects_Study4_Source_Study4_Public_StudyPlayerController_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STUDY4_API UClass* StaticClass<class AStudyPlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_heath_Documents_Unreal_Projects_Study4_Source_Study4_Public_StudyPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
