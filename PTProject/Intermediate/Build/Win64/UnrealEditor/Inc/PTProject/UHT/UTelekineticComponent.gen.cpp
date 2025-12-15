// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Telekinetic/UTelekineticComponent.h"
#include "Engine/HitResult.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeUTelekineticComponent() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
HEADMOUNTEDDISPLAY_API UClass* Z_Construct_UClass_UMotionControllerComponent_NoRegister();
INPUTCORE_API UEnum* Z_Construct_UEnum_InputCore_EControllerHand();
PTPROJECT_API UClass* Z_Construct_UClass_UUTelekineticComponent();
PTPROJECT_API UClass* Z_Construct_UClass_UUTelekineticComponent_NoRegister();
PTPROJECT_API UEnum* Z_Construct_UEnum_PTProject_ETelekinesisState();
UPackage* Z_Construct_UPackage__Script_PTProject();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum ETelekinesisState *********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETelekinesisState;
static UEnum* ETelekinesisState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ETelekinesisState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ETelekinesisState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PTProject_ETelekinesisState, (UObject*)Z_Construct_UPackage__Script_PTProject(), TEXT("ETelekinesisState"));
	}
	return Z_Registration_Info_UEnum_ETelekinesisState.OuterSingleton;
}
template<> PTPROJECT_API UEnum* StaticEnum<ETelekinesisState>()
{
	return ETelekinesisState_StaticEnum();
}
struct Z_Construct_UEnum_PTProject_ETelekinesisState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Cooldown.Name", "ETelekinesisState::Cooldown" },
		{ "Holding.Name", "ETelekinesisState::Holding" },
		{ "Idle.Name", "ETelekinesisState::Idle" },
		{ "ModuleRelativePath", "Public/Telekinetic/UTelekineticComponent.h" },
		{ "Pulling.Name", "ETelekinesisState::Pulling" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ETelekinesisState::Idle", (int64)ETelekinesisState::Idle },
		{ "ETelekinesisState::Pulling", (int64)ETelekinesisState::Pulling },
		{ "ETelekinesisState::Holding", (int64)ETelekinesisState::Holding },
		{ "ETelekinesisState::Cooldown", (int64)ETelekinesisState::Cooldown },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PTProject_ETelekinesisState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PTProject,
	nullptr,
	"ETelekinesisState",
	"ETelekinesisState",
	Z_Construct_UEnum_PTProject_ETelekinesisState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PTProject_ETelekinesisState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PTProject_ETelekinesisState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PTProject_ETelekinesisState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PTProject_ETelekinesisState()
{
	if (!Z_Registration_Info_UEnum_ETelekinesisState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETelekinesisState.InnerSingleton, Z_Construct_UEnum_PTProject_ETelekinesisState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ETelekinesisState.InnerSingleton;
}
// ********** End Enum ETelekinesisState ***********************************************************

// ********** Begin Class UUTelekineticComponent ***************************************************
void UUTelekineticComponent::StaticRegisterNativesUUTelekineticComponent()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UUTelekineticComponent;
UClass* UUTelekineticComponent::GetPrivateStaticClass()
{
	using TClass = UUTelekineticComponent;
	if (!Z_Registration_Info_UClass_UUTelekineticComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("UTelekineticComponent"),
			Z_Registration_Info_UClass_UUTelekineticComponent.InnerSingleton,
			StaticRegisterNativesUUTelekineticComponent,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UUTelekineticComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UUTelekineticComponent_NoRegister()
{
	return UUTelekineticComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UUTelekineticComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Telekinetic/UTelekineticComponent.h" },
		{ "ModuleRelativePath", "Public/Telekinetic/UTelekineticComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwnerPawn_MetaData[] = {
		{ "Category", "UTelekineticComponent" },
		{ "ModuleRelativePath", "Public/Telekinetic/UTelekineticComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PC_MetaData[] = {
		{ "Category", "UTelekineticComponent" },
		{ "ModuleRelativePath", "Public/Telekinetic/UTelekineticComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentState_MetaData[] = {
		{ "Category", "UTelekineticComponent" },
		{ "ModuleRelativePath", "Public/Telekinetic/UTelekineticComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IA_TGrab_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Telekinetic/UTelekineticComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveMappingContext_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Telekinetic/UTelekineticComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TraceDistance_MetaData[] = {
		{ "Category", "Telekinetic|Trace" },
		{ "ModuleRelativePath", "Public/Telekinetic/UTelekineticComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TraceChannel_MetaData[] = {
		{ "Category", "Telekinetic|Trace" },
		{ "ModuleRelativePath", "Public/Telekinetic/UTelekineticComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreferredHand_MetaData[] = {
		{ "Category", "Telekinesis" },
		{ "ModuleRelativePath", "Public/Telekinetic/UTelekineticComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HandMC_MetaData[] = {
		{ "Category", "UTelekineticComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Telekinetic/UTelekineticComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentHit_MetaData[] = {
		{ "Category", "UTelekineticComponent" },
		{ "ModuleRelativePath", "Public/Telekinetic/UTelekineticComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetPhysicsComp_MetaData[] = {
		{ "Category", "UTelekineticComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Telekinetic/UTelekineticComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetActor_MetaData[] = {
		{ "Category", "UTelekineticComponent" },
		{ "ModuleRelativePath", "Public/Telekinetic/UTelekineticComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetPullSpeed_MetaData[] = {
		{ "Category", "Telekinetic|Pulling" },
		{ "ModuleRelativePath", "Public/Telekinetic/UTelekineticComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PullForce_MetaData[] = {
		{ "Category", "Telekinetic|Pulling" },
		{ "ModuleRelativePath", "Public/Telekinetic/UTelekineticComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HoldDistance_MetaData[] = {
		{ "Category", "Telekinetic|Pulling" },
		{ "ModuleRelativePath", "Public/Telekinetic/UTelekineticComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxPullDistance_MetaData[] = {
		{ "Category", "Telekinetic|Pulling" },
		{ "ModuleRelativePath", "Public/Telekinetic/UTelekineticComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerPawn;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PC;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CurrentState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CurrentState;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IA_TGrab;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveMappingContext;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TraceDistance;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TraceChannel;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PreferredHand_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PreferredHand;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HandMC;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentHit;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetPhysicsComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetActor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TargetPullSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PullForce;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HoldDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxPullDistance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUTelekineticComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUTelekineticComponent_Statics::NewProp_OwnerPawn = { "OwnerPawn", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUTelekineticComponent, OwnerPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnerPawn_MetaData), NewProp_OwnerPawn_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUTelekineticComponent_Statics::NewProp_PC = { "PC", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUTelekineticComponent, PC), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PC_MetaData), NewProp_PC_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UUTelekineticComponent_Statics::NewProp_CurrentState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UUTelekineticComponent_Statics::NewProp_CurrentState = { "CurrentState", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUTelekineticComponent, CurrentState), Z_Construct_UEnum_PTProject_ETelekinesisState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentState_MetaData), NewProp_CurrentState_MetaData) }; // 237828101
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUTelekineticComponent_Statics::NewProp_IA_TGrab = { "IA_TGrab", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUTelekineticComponent, IA_TGrab), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IA_TGrab_MetaData), NewProp_IA_TGrab_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUTelekineticComponent_Statics::NewProp_MoveMappingContext = { "MoveMappingContext", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUTelekineticComponent, MoveMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveMappingContext_MetaData), NewProp_MoveMappingContext_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUTelekineticComponent_Statics::NewProp_TraceDistance = { "TraceDistance", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUTelekineticComponent, TraceDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TraceDistance_MetaData), NewProp_TraceDistance_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UUTelekineticComponent_Statics::NewProp_TraceChannel = { "TraceChannel", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUTelekineticComponent, TraceChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TraceChannel_MetaData), NewProp_TraceChannel_MetaData) }; // 756624936
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UUTelekineticComponent_Statics::NewProp_PreferredHand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UUTelekineticComponent_Statics::NewProp_PreferredHand = { "PreferredHand", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUTelekineticComponent, PreferredHand), Z_Construct_UEnum_InputCore_EControllerHand, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreferredHand_MetaData), NewProp_PreferredHand_MetaData) }; // 775183092
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUTelekineticComponent_Statics::NewProp_HandMC = { "HandMC", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUTelekineticComponent, HandMC), Z_Construct_UClass_UMotionControllerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HandMC_MetaData), NewProp_HandMC_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUTelekineticComponent_Statics::NewProp_CurrentHit = { "CurrentHit", nullptr, (EPropertyFlags)0x0020088000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUTelekineticComponent, CurrentHit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentHit_MetaData), NewProp_CurrentHit_MetaData) }; // 267591329
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUTelekineticComponent_Statics::NewProp_TargetPhysicsComp = { "TargetPhysicsComp", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUTelekineticComponent, TargetPhysicsComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetPhysicsComp_MetaData), NewProp_TargetPhysicsComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUTelekineticComponent_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUTelekineticComponent, TargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetActor_MetaData), NewProp_TargetActor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUTelekineticComponent_Statics::NewProp_TargetPullSpeed = { "TargetPullSpeed", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUTelekineticComponent, TargetPullSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetPullSpeed_MetaData), NewProp_TargetPullSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUTelekineticComponent_Statics::NewProp_PullForce = { "PullForce", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUTelekineticComponent, PullForce), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PullForce_MetaData), NewProp_PullForce_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUTelekineticComponent_Statics::NewProp_HoldDistance = { "HoldDistance", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUTelekineticComponent, HoldDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HoldDistance_MetaData), NewProp_HoldDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUTelekineticComponent_Statics::NewProp_MaxPullDistance = { "MaxPullDistance", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUTelekineticComponent, MaxPullDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxPullDistance_MetaData), NewProp_MaxPullDistance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUTelekineticComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUTelekineticComponent_Statics::NewProp_OwnerPawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUTelekineticComponent_Statics::NewProp_PC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUTelekineticComponent_Statics::NewProp_CurrentState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUTelekineticComponent_Statics::NewProp_CurrentState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUTelekineticComponent_Statics::NewProp_IA_TGrab,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUTelekineticComponent_Statics::NewProp_MoveMappingContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUTelekineticComponent_Statics::NewProp_TraceDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUTelekineticComponent_Statics::NewProp_TraceChannel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUTelekineticComponent_Statics::NewProp_PreferredHand_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUTelekineticComponent_Statics::NewProp_PreferredHand,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUTelekineticComponent_Statics::NewProp_HandMC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUTelekineticComponent_Statics::NewProp_CurrentHit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUTelekineticComponent_Statics::NewProp_TargetPhysicsComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUTelekineticComponent_Statics::NewProp_TargetActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUTelekineticComponent_Statics::NewProp_TargetPullSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUTelekineticComponent_Statics::NewProp_PullForce,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUTelekineticComponent_Statics::NewProp_HoldDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUTelekineticComponent_Statics::NewProp_MaxPullDistance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUTelekineticComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UUTelekineticComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_PTProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUTelekineticComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UUTelekineticComponent_Statics::ClassParams = {
	&UUTelekineticComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UUTelekineticComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UUTelekineticComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUTelekineticComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UUTelekineticComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UUTelekineticComponent()
{
	if (!Z_Registration_Info_UClass_UUTelekineticComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUTelekineticComponent.OuterSingleton, Z_Construct_UClass_UUTelekineticComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UUTelekineticComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UUTelekineticComponent);
UUTelekineticComponent::~UUTelekineticComponent() {}
// ********** End Class UUTelekineticComponent *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_prueva_tecnica_UE5VR_PTProject_Source_PTProject_Public_Telekinetic_UTelekineticComponent_h__Script_PTProject_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ETelekinesisState_StaticEnum, TEXT("ETelekinesisState"), &Z_Registration_Info_UEnum_ETelekinesisState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 237828101U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UUTelekineticComponent, UUTelekineticComponent::StaticClass, TEXT("UUTelekineticComponent"), &Z_Registration_Info_UClass_UUTelekineticComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUTelekineticComponent), 1940907205U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_prueva_tecnica_UE5VR_PTProject_Source_PTProject_Public_Telekinetic_UTelekineticComponent_h__Script_PTProject_3422028116(TEXT("/Script/PTProject"),
	Z_CompiledInDeferFile_FID_prueva_tecnica_UE5VR_PTProject_Source_PTProject_Public_Telekinetic_UTelekineticComponent_h__Script_PTProject_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_prueva_tecnica_UE5VR_PTProject_Source_PTProject_Public_Telekinetic_UTelekineticComponent_h__Script_PTProject_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_prueva_tecnica_UE5VR_PTProject_Source_PTProject_Public_Telekinetic_UTelekineticComponent_h__Script_PTProject_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_prueva_tecnica_UE5VR_PTProject_Source_PTProject_Public_Telekinetic_UTelekineticComponent_h__Script_PTProject_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
