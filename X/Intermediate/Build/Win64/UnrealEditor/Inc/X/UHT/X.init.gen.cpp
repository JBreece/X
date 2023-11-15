// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeX_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_X;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_X()
	{
		if (!Z_Registration_Info_UPackage__Script_X.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/X",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x1833EBD4,
				0x6D4A6CAB,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_X.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_X.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_X(Z_Construct_UPackage__Script_X, TEXT("/Script/X"), Z_Registration_Info_UPackage__Script_X, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x1833EBD4, 0x6D4A6CAB));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
