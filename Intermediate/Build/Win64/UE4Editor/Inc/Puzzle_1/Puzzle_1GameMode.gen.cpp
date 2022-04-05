// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Puzzle_1/Puzzle_1GameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePuzzle_1GameMode() {}
// Cross Module References
	PUZZLE_1_API UClass* Z_Construct_UClass_APuzzle_1GameMode_NoRegister();
	PUZZLE_1_API UClass* Z_Construct_UClass_APuzzle_1GameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Puzzle_1();
// End Cross Module References
	void APuzzle_1GameMode::StaticRegisterNativesAPuzzle_1GameMode()
	{
	}
	UClass* Z_Construct_UClass_APuzzle_1GameMode_NoRegister()
	{
		return APuzzle_1GameMode::StaticClass();
	}
	struct Z_Construct_UClass_APuzzle_1GameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APuzzle_1GameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Puzzle_1,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APuzzle_1GameMode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** GameMode class to specify pawn and playercontroller */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Puzzle_1GameMode.h" },
		{ "ModuleRelativePath", "Puzzle_1GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "GameMode class to specify pawn and playercontroller" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APuzzle_1GameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APuzzle_1GameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APuzzle_1GameMode_Statics::ClassParams = {
		&APuzzle_1GameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_APuzzle_1GameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APuzzle_1GameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APuzzle_1GameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APuzzle_1GameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APuzzle_1GameMode, 3099516063);
	template<> PUZZLE_1_API UClass* StaticClass<APuzzle_1GameMode>()
	{
		return APuzzle_1GameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APuzzle_1GameMode(Z_Construct_UClass_APuzzle_1GameMode, &APuzzle_1GameMode::StaticClass, TEXT("/Script/Puzzle_1"), TEXT("APuzzle_1GameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APuzzle_1GameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
