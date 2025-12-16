// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePTProject_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_PTProject;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_PTProject()
	{
		if (!Z_Registration_Info_UPackage__Script_PTProject.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/PTProject",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x4BF241A0,
				0x299F62F3,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_PTProject.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_PTProject.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_PTProject(Z_Construct_UPackage__Script_PTProject, TEXT("/Script/PTProject"), Z_Registration_Info_UPackage__Script_PTProject, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x4BF241A0, 0x299F62F3));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
