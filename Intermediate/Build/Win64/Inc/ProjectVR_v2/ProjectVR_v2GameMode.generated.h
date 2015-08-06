// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

#ifdef PROJECTVR_V2_ProjectVR_v2GameMode_generated_h
#error "ProjectVR_v2GameMode.generated.h already included, missing '#pragma once' in ProjectVR_v2GameMode.h"
#endif
#define PROJECTVR_V2_ProjectVR_v2GameMode_generated_h

#define AProjectVR_v2GameMode_EVENTPARMS
#define AProjectVR_v2GameMode_RPC_WRAPPERS
#define AProjectVR_v2GameMode_RPC_WRAPPERS_NO_PURE_DECLS \
	static inline void StaticChecks_Implementation_Validate() \
	{ \
	}


#define AProjectVR_v2GameMode_CALLBACK_WRAPPERS
#define AProjectVR_v2GameMode_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesAProjectVR_v2GameMode(); \
	friend PROJECTVR_V2_API class UClass* Z_Construct_UClass_AProjectVR_v2GameMode(); \
	public: \
	DECLARE_CLASS(AProjectVR_v2GameMode, AGameMode, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), 0, ProjectVR_v2, PROJECTVR_V2_API) \
	DECLARE_SERIALIZER(AProjectVR_v2GameMode) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	UObject* _getUObject() const { return const_cast<AProjectVR_v2GameMode*>(this); }


#define AProjectVR_v2GameMode_INCLASS \
	private: \
	static void StaticRegisterNativesAProjectVR_v2GameMode(); \
	friend PROJECTVR_V2_API class UClass* Z_Construct_UClass_AProjectVR_v2GameMode(); \
	public: \
	DECLARE_CLASS(AProjectVR_v2GameMode, AGameMode, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), 0, ProjectVR_v2, PROJECTVR_V2_API) \
	DECLARE_SERIALIZER(AProjectVR_v2GameMode) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	UObject* _getUObject() const { return const_cast<AProjectVR_v2GameMode*>(this); }


#define AProjectVR_v2GameMode_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PROJECTVR_V2_API AProjectVR_v2GameMode(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AProjectVR_v2GameMode) \
private: \
	/** Private copy-constructor, should never be used */ \
	PROJECTVR_V2_API AProjectVR_v2GameMode(const AProjectVR_v2GameMode& InCopy); \
public:


#define AProjectVR_v2GameMode_ENHANCED_CONSTRUCTORS \
private: \
	/** Private copy-constructor, should never be used */ \
	PROJECTVR_V2_API AProjectVR_v2GameMode(const AProjectVR_v2GameMode& InCopy); \
public: \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AProjectVR_v2GameMode)


#undef UCLASS_CURRENT_FILE_NAME
#define UCLASS_CURRENT_FILE_NAME AProjectVR_v2GameMode


#undef UCLASS
#undef UINTERFACE
#if UE_BUILD_DOCS
#define UCLASS(...)
#else
#define UCLASS(...) \
AProjectVR_v2GameMode_EVENTPARMS
#endif


#undef GENERATED_UCLASS_BODY
#undef GENERATED_BODY
#undef GENERATED_IINTERFACE_BODY
#define GENERATED_UCLASS_BODY() \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AProjectVR_v2GameMode_RPC_WRAPPERS \
	AProjectVR_v2GameMode_CALLBACK_WRAPPERS \
	AProjectVR_v2GameMode_INCLASS \
	AProjectVR_v2GameMode_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_POP


#define GENERATED_BODY() \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AProjectVR_v2GameMode_RPC_WRAPPERS_NO_PURE_DECLS \
	AProjectVR_v2GameMode_CALLBACK_WRAPPERS \
	AProjectVR_v2GameMode_INCLASS_NO_PURE_DECLS \
	AProjectVR_v2GameMode_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_POP


