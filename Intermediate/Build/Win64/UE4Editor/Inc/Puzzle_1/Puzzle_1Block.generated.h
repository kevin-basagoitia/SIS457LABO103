// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
struct FKey;
#ifdef PUZZLE_1_Puzzle_1Block_generated_h
#error "Puzzle_1Block.generated.h already included, missing '#pragma once' in Puzzle_1Block.h"
#endif
#define PUZZLE_1_Puzzle_1Block_generated_h

#define Puzzle_1_Source_Puzzle_1_Puzzle_1Block_h_13_SPARSE_DATA
#define Puzzle_1_Source_Puzzle_1_Puzzle_1Block_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnFingerPressedBlock); \
	DECLARE_FUNCTION(execBlockClicked);


#define Puzzle_1_Source_Puzzle_1_Puzzle_1Block_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnFingerPressedBlock); \
	DECLARE_FUNCTION(execBlockClicked);


#define Puzzle_1_Source_Puzzle_1_Puzzle_1Block_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPuzzle_1Block(); \
	friend struct Z_Construct_UClass_APuzzle_1Block_Statics; \
public: \
	DECLARE_CLASS(APuzzle_1Block, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Puzzle_1"), PUZZLE_1_API) \
	DECLARE_SERIALIZER(APuzzle_1Block)


#define Puzzle_1_Source_Puzzle_1_Puzzle_1Block_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAPuzzle_1Block(); \
	friend struct Z_Construct_UClass_APuzzle_1Block_Statics; \
public: \
	DECLARE_CLASS(APuzzle_1Block, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Puzzle_1"), PUZZLE_1_API) \
	DECLARE_SERIALIZER(APuzzle_1Block)


#define Puzzle_1_Source_Puzzle_1_Puzzle_1Block_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PUZZLE_1_API APuzzle_1Block(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APuzzle_1Block) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PUZZLE_1_API, APuzzle_1Block); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APuzzle_1Block); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	PUZZLE_1_API APuzzle_1Block(APuzzle_1Block&&); \
	PUZZLE_1_API APuzzle_1Block(const APuzzle_1Block&); \
public:


#define Puzzle_1_Source_Puzzle_1_Puzzle_1Block_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	PUZZLE_1_API APuzzle_1Block(APuzzle_1Block&&); \
	PUZZLE_1_API APuzzle_1Block(const APuzzle_1Block&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PUZZLE_1_API, APuzzle_1Block); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APuzzle_1Block); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APuzzle_1Block)


#define Puzzle_1_Source_Puzzle_1_Puzzle_1Block_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__DummyRoot() { return STRUCT_OFFSET(APuzzle_1Block, DummyRoot); } \
	FORCEINLINE static uint32 __PPO__BlockMesh() { return STRUCT_OFFSET(APuzzle_1Block, BlockMesh); }


#define Puzzle_1_Source_Puzzle_1_Puzzle_1Block_h_10_PROLOG
#define Puzzle_1_Source_Puzzle_1_Puzzle_1Block_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Puzzle_1_Source_Puzzle_1_Puzzle_1Block_h_13_PRIVATE_PROPERTY_OFFSET \
	Puzzle_1_Source_Puzzle_1_Puzzle_1Block_h_13_SPARSE_DATA \
	Puzzle_1_Source_Puzzle_1_Puzzle_1Block_h_13_RPC_WRAPPERS \
	Puzzle_1_Source_Puzzle_1_Puzzle_1Block_h_13_INCLASS \
	Puzzle_1_Source_Puzzle_1_Puzzle_1Block_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Puzzle_1_Source_Puzzle_1_Puzzle_1Block_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Puzzle_1_Source_Puzzle_1_Puzzle_1Block_h_13_PRIVATE_PROPERTY_OFFSET \
	Puzzle_1_Source_Puzzle_1_Puzzle_1Block_h_13_SPARSE_DATA \
	Puzzle_1_Source_Puzzle_1_Puzzle_1Block_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Puzzle_1_Source_Puzzle_1_Puzzle_1Block_h_13_INCLASS_NO_PURE_DECLS \
	Puzzle_1_Source_Puzzle_1_Puzzle_1Block_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PUZZLE_1_API UClass* StaticClass<class APuzzle_1Block>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Puzzle_1_Source_Puzzle_1_Puzzle_1Block_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
