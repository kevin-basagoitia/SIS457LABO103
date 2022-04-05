// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Puzzle_1/Puzzle_1Pawn.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePuzzle_1Pawn() {}
// Cross Module References
	PUZZLE_1_API UClass* Z_Construct_UClass_APuzzle_1Pawn_NoRegister();
	PUZZLE_1_API UClass* Z_Construct_UClass_APuzzle_1Pawn();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_Puzzle_1();
	PUZZLE_1_API UClass* Z_Construct_UClass_APuzzle_1Block_NoRegister();
// End Cross Module References
	void APuzzle_1Pawn::StaticRegisterNativesAPuzzle_1Pawn()
	{
	}
	UClass* Z_Construct_UClass_APuzzle_1Pawn_NoRegister()
	{
		return APuzzle_1Pawn::StaticClass();
	}
	struct Z_Construct_UClass_APuzzle_1Pawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentBlockFocus_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentBlockFocus;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APuzzle_1Pawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_Puzzle_1,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APuzzle_1Pawn_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Puzzle_1Pawn.h" },
		{ "ModuleRelativePath", "Puzzle_1Pawn.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APuzzle_1Pawn_Statics::NewProp_CurrentBlockFocus_MetaData[] = {
		{ "Category", "Puzzle_1Pawn" },
		{ "ModuleRelativePath", "Puzzle_1Pawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APuzzle_1Pawn_Statics::NewProp_CurrentBlockFocus = { "CurrentBlockFocus", nullptr, (EPropertyFlags)0x0020080000000805, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APuzzle_1Pawn, CurrentBlockFocus), Z_Construct_UClass_APuzzle_1Block_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APuzzle_1Pawn_Statics::NewProp_CurrentBlockFocus_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APuzzle_1Pawn_Statics::NewProp_CurrentBlockFocus_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APuzzle_1Pawn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APuzzle_1Pawn_Statics::NewProp_CurrentBlockFocus,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APuzzle_1Pawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APuzzle_1Pawn>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APuzzle_1Pawn_Statics::ClassParams = {
		&APuzzle_1Pawn::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APuzzle_1Pawn_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APuzzle_1Pawn_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APuzzle_1Pawn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APuzzle_1Pawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APuzzle_1Pawn()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APuzzle_1Pawn_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APuzzle_1Pawn, 2282847906);
	template<> PUZZLE_1_API UClass* StaticClass<APuzzle_1Pawn>()
	{
		return APuzzle_1Pawn::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APuzzle_1Pawn(Z_Construct_UClass_APuzzle_1Pawn, &APuzzle_1Pawn::StaticClass, TEXT("/Script/Puzzle_1"), TEXT("APuzzle_1Pawn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APuzzle_1Pawn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
