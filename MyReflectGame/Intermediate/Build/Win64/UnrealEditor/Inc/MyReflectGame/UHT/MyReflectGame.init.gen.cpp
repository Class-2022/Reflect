// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyReflectGame_init() {}
	MYREFLECTGAME_API UFunction* Z_Construct_UDelegateFunction_MyReflectGame_OnPickUp__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_MyReflectGame;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_MyReflectGame()
	{
		if (!Z_Registration_Info_UPackage__Script_MyReflectGame.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_MyReflectGame_OnPickUp__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/MyReflectGame",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xEEE026AF,
				0xFF13BE12,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_MyReflectGame.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_MyReflectGame.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_MyReflectGame(Z_Construct_UPackage__Script_MyReflectGame, TEXT("/Script/MyReflectGame"), Z_Registration_Info_UPackage__Script_MyReflectGame, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xEEE026AF, 0xFF13BE12));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
