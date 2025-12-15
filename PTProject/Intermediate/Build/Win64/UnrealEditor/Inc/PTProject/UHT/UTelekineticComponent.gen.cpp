// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Telekinetic/UTelekineticComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeUTelekineticComponent() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
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
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerPawn;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CurrentState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CurrentState;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IA_TGrab;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveMappingContext;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TraceDistance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUTelekineticComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUTelekineticComponent_Statics::NewProp_OwnerPawn = { "OwnerPawn", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUTelekineticComponent, OwnerPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnerPawn_MetaData), NewProp_OwnerPawn_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UUTelekineticComponent_Statics::NewProp_CurrentState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UUTelekineticComponent_Statics::NewProp_CurrentState = { "CurrentState", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUTelekineticComponent, CurrentState), Z_Construct_UEnum_PTProject_ETelekinesisState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentState_MetaData), NewProp_CurrentState_MetaData) }; // 237828101
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUTelekineticComponent_Statics::NewProp_IA_TGrab = { "IA_TGrab", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUTelekineticComponent, IA_TGrab), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IA_TGrab_MetaData), NewProp_IA_TGrab_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUTelekineticComponent_Statics::NewProp_MoveMappingContext = { "MoveMappingContext", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUTelekineticComponent, MoveMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveMappingContext_MetaData), NewProp_MoveMappingContext_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUTelekineticComponent_Statics::NewProp_TraceDistance = { "TraceDistance", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUTelekineticComponent, TraceDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TraceDistance_MetaData), NewProp_TraceDistance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUTelekineticComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUTelekineticComponent_Statics::NewProp_OwnerPawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUTelekineticComponent_Statics::NewProp_CurrentState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUTelekineticComponent_Statics::NewProp_CurrentState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUTelekineticComponent_Statics::NewProp_IA_TGrab,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUTelekineticComponent_Statics::NewProp_MoveMappingContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUTelekineticComponent_Statics::NewProp_TraceDistance,
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
		{ Z_Construct_UClass_UUTelekineticComponent, UUTelekineticComponent::StaticClass, TEXT("UUTelekineticComponent"), &Z_Registration_Info_UClass_UUTelekineticComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUTelekineticComponent), 604817842U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_prueva_tecnica_UE5VR_PTProject_Source_PTProject_Public_Telekinetic_UTelekineticComponent_h__Script_PTProject_2710301726(TEXT("/Script/PTProject"),
	Z_CompiledInDeferFile_FID_prueva_tecnica_UE5VR_PTProject_Source_PTProject_Public_Telekinetic_UTelekineticComponent_h__Script_PTProject_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_prueva_tecnica_UE5VR_PTProject_Source_PTProject_Public_Telekinetic_UTelekineticComponent_h__Script_PTProject_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_prueva_tecnica_UE5VR_PTProject_Source_PTProject_Public_Telekinetic_UTelekineticComponent_h__Script_PTProject_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_prueva_tecnica_UE5VR_PTProject_Source_PTProject_Public_Telekinetic_UTelekineticComponent_h__Script_PTProject_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
