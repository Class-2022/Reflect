// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MyReflectGameProjectile.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef MYREFLECTGAME_MyReflectGameProjectile_generated_h
#error "MyReflectGameProjectile.generated.h already included, missing '#pragma once' in MyReflectGameProjectile.h"
#endif
#define MYREFLECTGAME_MyReflectGameProjectile_generated_h

#define FID_Users_black_Documents_Unreal_Projects_MyReflectGame_Source_MyReflectGame_MyReflectGameProjectile_h_15_SPARSE_DATA
#define FID_Users_black_Documents_Unreal_Projects_MyReflectGame_Source_MyReflectGame_MyReflectGameProjectile_h_15_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_black_Documents_Unreal_Projects_MyReflectGame_Source_MyReflectGame_MyReflectGameProjectile_h_15_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_black_Documents_Unreal_Projects_MyReflectGame_Source_MyReflectGame_MyReflectGameProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define FID_Users_black_Documents_Unreal_Projects_MyReflectGame_Source_MyReflectGame_MyReflectGameProjectile_h_15_ACCESSORS
#define FID_Users_black_Documents_Unreal_Projects_MyReflectGame_Source_MyReflectGame_MyReflectGameProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyReflectGameProjectile(); \
	friend struct Z_Construct_UClass_AMyReflectGameProjectile_Statics; \
public: \
	DECLARE_CLASS(AMyReflectGameProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyReflectGame"), NO_API) \
	DECLARE_SERIALIZER(AMyReflectGameProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Users_black_Documents_Unreal_Projects_MyReflectGame_Source_MyReflectGame_MyReflectGameProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyReflectGameProjectile(AMyReflectGameProjectile&&); \
	NO_API AMyReflectGameProjectile(const AMyReflectGameProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyReflectGameProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyReflectGameProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyReflectGameProjectile) \
	NO_API virtual ~AMyReflectGameProjectile();


#define FID_Users_black_Documents_Unreal_Projects_MyReflectGame_Source_MyReflectGame_MyReflectGameProjectile_h_12_PROLOG
#define FID_Users_black_Documents_Unreal_Projects_MyReflectGame_Source_MyReflectGame_MyReflectGameProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_black_Documents_Unreal_Projects_MyReflectGame_Source_MyReflectGame_MyReflectGameProjectile_h_15_SPARSE_DATA \
	FID_Users_black_Documents_Unreal_Projects_MyReflectGame_Source_MyReflectGame_MyReflectGameProjectile_h_15_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_black_Documents_Unreal_Projects_MyReflectGame_Source_MyReflectGame_MyReflectGameProjectile_h_15_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_black_Documents_Unreal_Projects_MyReflectGame_Source_MyReflectGame_MyReflectGameProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_black_Documents_Unreal_Projects_MyReflectGame_Source_MyReflectGame_MyReflectGameProjectile_h_15_ACCESSORS \
	FID_Users_black_Documents_Unreal_Projects_MyReflectGame_Source_MyReflectGame_MyReflectGameProjectile_h_15_INCLASS_NO_PURE_DECLS \
	FID_Users_black_Documents_Unreal_Projects_MyReflectGame_Source_MyReflectGame_MyReflectGameProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYREFLECTGAME_API UClass* StaticClass<class AMyReflectGameProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_black_Documents_Unreal_Projects_MyReflectGame_Source_MyReflectGame_MyReflectGameProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
