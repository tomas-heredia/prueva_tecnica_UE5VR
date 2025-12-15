// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Telekinetic/UTelekineticComponent.h"

#ifdef PTPROJECT_UTelekineticComponent_generated_h
#error "UTelekineticComponent.generated.h already included, missing '#pragma once' in UTelekineticComponent.h"
#endif
#define PTPROJECT_UTelekineticComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UUTelekineticComponent ***************************************************
PTPROJECT_API UClass* Z_Construct_UClass_UUTelekineticComponent_NoRegister();

#define FID_prueva_tecnica_UE5VR_PTProject_Source_PTProject_Public_Telekinetic_UTelekineticComponent_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUTelekineticComponent(); \
	friend struct Z_Construct_UClass_UUTelekineticComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PTPROJECT_API UClass* Z_Construct_UClass_UUTelekineticComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UUTelekineticComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PTProject"), Z_Construct_UClass_UUTelekineticComponent_NoRegister) \
	DECLARE_SERIALIZER(UUTelekineticComponent)


#define FID_prueva_tecnica_UE5VR_PTProject_Source_PTProject_Public_Telekinetic_UTelekineticComponent_h_25_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UUTelekineticComponent(UUTelekineticComponent&&) = delete; \
	UUTelekineticComponent(const UUTelekineticComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUTelekineticComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUTelekineticComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUTelekineticComponent) \
	NO_API virtual ~UUTelekineticComponent();


#define FID_prueva_tecnica_UE5VR_PTProject_Source_PTProject_Public_Telekinetic_UTelekineticComponent_h_22_PROLOG
#define FID_prueva_tecnica_UE5VR_PTProject_Source_PTProject_Public_Telekinetic_UTelekineticComponent_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_prueva_tecnica_UE5VR_PTProject_Source_PTProject_Public_Telekinetic_UTelekineticComponent_h_25_INCLASS_NO_PURE_DECLS \
	FID_prueva_tecnica_UE5VR_PTProject_Source_PTProject_Public_Telekinetic_UTelekineticComponent_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UUTelekineticComponent;

// ********** End Class UUTelekineticComponent *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_prueva_tecnica_UE5VR_PTProject_Source_PTProject_Public_Telekinetic_UTelekineticComponent_h

// ********** Begin Enum ETelekinesisState *********************************************************
#define FOREACH_ENUM_ETELEKINESISSTATE(op) \
	op(ETelekinesisState::Idle) \
	op(ETelekinesisState::Pulling) \
	op(ETelekinesisState::Holding) \
	op(ETelekinesisState::Cooldown) 

enum class ETelekinesisState : uint8;
template<> struct TIsUEnumClass<ETelekinesisState> { enum { Value = true }; };
template<> PTPROJECT_API UEnum* StaticEnum<ETelekinesisState>();
// ********** End Enum ETelekinesisState ***********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
