// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef XUNFEIPLUGIN_SpeechActor_generated_h
#error "SpeechActor.generated.h already included, missing '#pragma once' in SpeechActor.h"
#endif
#define XUNFEIPLUGIN_SpeechActor_generated_h

#define TestSpeechPlugin_Plugins_XunFeiPlugin_Source_XunFeiPlugin_Public_SpeechActor_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSpeechResult) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->SpeechResult(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSpeechQuit) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SpeechQuit(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSpeechStop) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SpeechStop(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSpeechOpen) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SpeechOpen(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSpeechInit) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SpeechInit(); \
		P_NATIVE_END; \
	}


#define TestSpeechPlugin_Plugins_XunFeiPlugin_Source_XunFeiPlugin_Public_SpeechActor_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSpeechResult) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->SpeechResult(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSpeechQuit) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SpeechQuit(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSpeechStop) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SpeechStop(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSpeechOpen) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SpeechOpen(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSpeechInit) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SpeechInit(); \
		P_NATIVE_END; \
	}


#define TestSpeechPlugin_Plugins_XunFeiPlugin_Source_XunFeiPlugin_Public_SpeechActor_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASpeechActor(); \
	friend struct Z_Construct_UClass_ASpeechActor_Statics; \
public: \
	DECLARE_CLASS(ASpeechActor, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/XunFeiPlugin"), NO_API) \
	DECLARE_SERIALIZER(ASpeechActor)


#define TestSpeechPlugin_Plugins_XunFeiPlugin_Source_XunFeiPlugin_Public_SpeechActor_h_14_INCLASS \
private: \
	static void StaticRegisterNativesASpeechActor(); \
	friend struct Z_Construct_UClass_ASpeechActor_Statics; \
public: \
	DECLARE_CLASS(ASpeechActor, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/XunFeiPlugin"), NO_API) \
	DECLARE_SERIALIZER(ASpeechActor)


#define TestSpeechPlugin_Plugins_XunFeiPlugin_Source_XunFeiPlugin_Public_SpeechActor_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASpeechActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASpeechActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASpeechActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASpeechActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASpeechActor(ASpeechActor&&); \
	NO_API ASpeechActor(const ASpeechActor&); \
public:


#define TestSpeechPlugin_Plugins_XunFeiPlugin_Source_XunFeiPlugin_Public_SpeechActor_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASpeechActor(ASpeechActor&&); \
	NO_API ASpeechActor(const ASpeechActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASpeechActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASpeechActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASpeechActor)


#define TestSpeechPlugin_Plugins_XunFeiPlugin_Source_XunFeiPlugin_Public_SpeechActor_h_14_PRIVATE_PROPERTY_OFFSET
#define TestSpeechPlugin_Plugins_XunFeiPlugin_Source_XunFeiPlugin_Public_SpeechActor_h_11_PROLOG
#define TestSpeechPlugin_Plugins_XunFeiPlugin_Source_XunFeiPlugin_Public_SpeechActor_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TestSpeechPlugin_Plugins_XunFeiPlugin_Source_XunFeiPlugin_Public_SpeechActor_h_14_PRIVATE_PROPERTY_OFFSET \
	TestSpeechPlugin_Plugins_XunFeiPlugin_Source_XunFeiPlugin_Public_SpeechActor_h_14_RPC_WRAPPERS \
	TestSpeechPlugin_Plugins_XunFeiPlugin_Source_XunFeiPlugin_Public_SpeechActor_h_14_INCLASS \
	TestSpeechPlugin_Plugins_XunFeiPlugin_Source_XunFeiPlugin_Public_SpeechActor_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TestSpeechPlugin_Plugins_XunFeiPlugin_Source_XunFeiPlugin_Public_SpeechActor_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TestSpeechPlugin_Plugins_XunFeiPlugin_Source_XunFeiPlugin_Public_SpeechActor_h_14_PRIVATE_PROPERTY_OFFSET \
	TestSpeechPlugin_Plugins_XunFeiPlugin_Source_XunFeiPlugin_Public_SpeechActor_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	TestSpeechPlugin_Plugins_XunFeiPlugin_Source_XunFeiPlugin_Public_SpeechActor_h_14_INCLASS_NO_PURE_DECLS \
	TestSpeechPlugin_Plugins_XunFeiPlugin_Source_XunFeiPlugin_Public_SpeechActor_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> XUNFEIPLUGIN_API UClass* StaticClass<class ASpeechActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TestSpeechPlugin_Plugins_XunFeiPlugin_Source_XunFeiPlugin_Public_SpeechActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
