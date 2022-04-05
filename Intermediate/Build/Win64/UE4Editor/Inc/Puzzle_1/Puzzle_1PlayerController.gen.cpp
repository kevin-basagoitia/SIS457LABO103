// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Puzzle_1/Puzzle_1PlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePuzzle_1PlayerController() {}
// Cross Module References
	PUZZLE_1_API UClass* Z_Construct_UClass_APuzzle_1PlayerController_NoRegister();
	PUZZLE_1_API UClass* Z_Construct_UClass_APuzzle_1PlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_Puzzle_1();
// End Cross Module References
	void APuzzle_1PlayerController::StaticRegisterNativesAPuzzle_1PlayerController()
	{
	}
	UClass* Z_Construct_UClass_APuzzle_1PlayerController_NoRegister()
	{
		return APuzzle_1PlayerController::StaticClass();
	}
	struct Z_Construct_UClass_APuzzle_1PlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APuzzle_1PlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_Puzzle_1,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APuzzle_1PlayerController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** PlayerController class used to enable cursor */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Puzzle_1PlayerController.h" },
		{ "ModuleRelativePath", "Puzzle_1PlayerController.h" },
		{ "ToolTip", "PlayerController class used to enable cursor" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APuzzle_1PlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APuzzle_1PlayerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APuzzle_1PlayerController_Statics::ClassParams = {
		&APuzzle_1PlayerController::StaticClass,
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
		0x008002A4u,
		METADATA_PARAMS(Z_Construct_UClass_APuzzle_1PlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APuzzle_1PlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APuzzle_1PlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APuzzle_1PlayerController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APuzzle_1PlayerController, 729833517);
	template<> PUZZLE_1_API UClass* StaticClass<APuzzle_1PlayerController>()
	{
		return APuzzle_1PlayerController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APuzzle_1PlayerController(Z_Construct_UClass_APuzzle_1PlayerController, &APuzzle_1PlayerController::StaticClass, TEXT("/Script/Puzzle_1"), TEXT("APuzzle_1PlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APuzzle_1PlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
