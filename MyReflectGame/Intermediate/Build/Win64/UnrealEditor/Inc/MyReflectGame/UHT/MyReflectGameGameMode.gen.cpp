// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyReflectGame/MyReflectGameGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyReflectGameGameMode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	MYREFLECTGAME_API UClass* Z_Construct_UClass_AMyReflectGameGameMode();
	MYREFLECTGAME_API UClass* Z_Construct_UClass_AMyReflectGameGameMode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MyReflectGame();
// End Cross Module References
	void AMyReflectGameGameMode::StaticRegisterNativesAMyReflectGameGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyReflectGameGameMode);
	UClass* Z_Construct_UClass_AMyReflectGameGameMode_NoRegister()
	{
		return AMyReflectGameGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AMyReflectGameGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyReflectGameGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MyReflectGame,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyReflectGameGameMode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyReflectGameGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "MyReflectGameGameMode.h" },
		{ "ModuleRelativePath", "MyReflectGameGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyReflectGameGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyReflectGameGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyReflectGameGameMode_Statics::ClassParams = {
		&AMyReflectGameGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyReflectGameGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyReflectGameGameMode_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AMyReflectGameGameMode()
	{
		if (!Z_Registration_Info_UClass_AMyReflectGameGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyReflectGameGameMode.OuterSingleton, Z_Construct_UClass_AMyReflectGameGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMyReflectGameGameMode.OuterSingleton;
	}
	template<> MYREFLECTGAME_API UClass* StaticClass<AMyReflectGameGameMode>()
	{
		return AMyReflectGameGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyReflectGameGameMode);
	AMyReflectGameGameMode::~AMyReflectGameGameMode() {}
	struct Z_CompiledInDeferFile_FID_Users_black_Documents_Unreal_Projects_MyReflectGame_Source_MyReflectGame_MyReflectGameGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_black_Documents_Unreal_Projects_MyReflectGame_Source_MyReflectGame_MyReflectGameGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMyReflectGameGameMode, AMyReflectGameGameMode::StaticClass, TEXT("AMyReflectGameGameMode"), &Z_Registration_Info_UClass_AMyReflectGameGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyReflectGameGameMode), 2509849448U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_black_Documents_Unreal_Projects_MyReflectGame_Source_MyReflectGame_MyReflectGameGameMode_h_2863843450(TEXT("/Script/MyReflectGame"),
		Z_CompiledInDeferFile_FID_Users_black_Documents_Unreal_Projects_MyReflectGame_Source_MyReflectGame_MyReflectGameGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_black_Documents_Unreal_Projects_MyReflectGame_Source_MyReflectGame_MyReflectGameGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
