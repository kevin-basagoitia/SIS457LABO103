// Copyright Epic Games, Inc. All Rights Reserved.

#include "Puzzle_1BlockGrid.h"
#include "Puzzle_1Block.h"
#include "Components/TextRenderComponent.h"
#include "Engine/World.h"

#define LOCTEXT_NAMESPACE "PuzzleBlockGrid"

APuzzle_1BlockGrid::APuzzle_1BlockGrid()
{
	// Create dummy root scene component
	DummyRoot = CreateDefaultSubobject<USceneComponent>(TEXT("Dummy0"));
	RootComponent = DummyRoot;

	// Create static mesh component
	ScoreText = CreateDefaultSubobject<UTextRenderComponent>(TEXT("ScoreText0"));
	ScoreText->SetRelativeLocation(FVector(100.f,0.f,0.f));
	ScoreText->SetRelativeRotation(FRotator(90.f,0.f,0.f));
	ScoreText->SetText(FText::Format(LOCTEXT("ScoreFint", "Puntaje: {0}"), FText::AsNumber(0)));
	ScoreText->SetupAttachment(DummyRoot);

	// Create static mesh component
	BiografiaText = CreateDefaultSubobject<UTextRenderComponent>(TEXT("BiografiaText0"));
	BiografiaText->SetRelativeLocation(FVector(660.f, 0.f, 0.f));
	BiografiaText->SetRelativeRotation(FRotator(70.f, 0.f, 0.f));
	BiografiaText->SetText(FText::Format(LOCTEXT("ScoreFint", "   Biografia "), FText::AsNumber(0)));
	BiografiaText->SetupAttachment(DummyRoot);

	// Create static mesh component
	PBiografiaText = CreateDefaultSubobject<UTextRenderComponent>(TEXT("PBiografiaText0"));
	PBiografiaText->SetRelativeLocation(FVector(680.f, 0.f, 0.f));
	PBiografiaText->SetRelativeRotation(FRotator(74.f, 0.f, 0.f));
	PBiografiaText->SetText(FText::Format(LOCTEXT("ScoreFint", "Mi nombre es Kevin Adalid Basagoitia Salguero,Naci el 18 de enero del 2003 en Chuquisaca/Sucre"), FText::AsNumber(0)));
	PBiografiaText->SetupAttachment(DummyRoot);

	// Create static mesh component
	LBiografiaText = CreateDefaultSubobject<UTextRenderComponent>(TEXT("LBiografiaText0"));
	LBiografiaText->SetRelativeLocation(FVector(700.f, 0.f, 0.f));
	LBiografiaText->SetRelativeRotation(FRotator(78.f, 0.f, 0.f));
	LBiografiaText->SetText(FText::Format(LOCTEXT("ScoreFint", "Vivi en Santa Cruz cuando era muy chico cuando cumpli 6 volvi a Sucre"), FText::AsNumber(0)));
	LBiografiaText->SetupAttachment(DummyRoot);

	// Create static mesh component
	MBiografiaText = CreateDefaultSubobject<UTextRenderComponent>(TEXT("MBiografiaText0"));
	MBiografiaText->SetRelativeLocation(FVector(720.f, 0.f, 0.f));
	MBiografiaText->SetRelativeRotation(FRotator(82.f, 0.f, 0.f));
	MBiografiaText->SetText(FText::Format(LOCTEXT("ScoreFint", "Curse primaria en la Escuela 23 de Marzo durante ese periodo estuve en natacion durante 6 meses"), FText::AsNumber(0)));
	MBiografiaText->SetupAttachment(DummyRoot);

	// Create static mesh component
	NBiografiaText = CreateDefaultSubobject<UTextRenderComponent>(TEXT("NBiografiaText0"));
	NBiografiaText->SetRelativeLocation(FVector(740.f, 0.f, 0.f));
	NBiografiaText->SetRelativeRotation(FRotator(86.f, 0.f, 0.f));
	NBiografiaText->SetText(FText::Format(LOCTEXT("ScoreFint", "Termine la primaria a los 11 y comence la secundaria en el Col. Nacional Jaime de Zudanez"), FText::AsNumber(0)));
	NBiografiaText->SetupAttachment(DummyRoot);

	// Create static mesh component
	KBiografiaText = CreateDefaultSubobject<UTextRenderComponent>(TEXT("KBiografiaText0"));
	KBiografiaText->SetRelativeLocation(FVector(760.f, 0.f, 0.f));
	KBiografiaText->SetRelativeRotation(FRotator(90.f, 0.f, 0.f));
	KBiografiaText->SetText(FText::Format(LOCTEXT("ScoreFint", "Termine el colegio a los 17 tambien trabaje como ayudante de cocina durante 3 meses"), FText::AsNumber(0)));
	KBiografiaText->SetupAttachment(DummyRoot);
	
	// Create static mesh component
	JBiografiaText = CreateDefaultSubobject<UTextRenderComponent>(TEXT("JBiografiaText0"));
	JBiografiaText->SetRelativeLocation(FVector(780.f, 0.f, 0.f));
	JBiografiaText->SetRelativeRotation(FRotator(94.f, 0.f, 0.f));
	JBiografiaText->SetText(FText::Format(LOCTEXT("ScoreFint", "Tengo como pasa tiempo jugar basquet y voleibol"), FText::AsNumber(0)));
	JBiografiaText->SetupAttachment(DummyRoot);


	// Set defaults
	Size = 3;
	BlockSpacing = 300.f;
}


void APuzzle_1BlockGrid::BeginPlay()
{
	Super::BeginPlay();

	// Number of blocks
	const int32 NumBlocks = Size * Size;

	// Loop to spawn each block
	for(int32 BlockIndex=0; BlockIndex<NumBlocks; BlockIndex++)
	{
		const float XOffset = (BlockIndex/Size) * BlockSpacing; // Divide by dimension
		const float YOffset = (BlockIndex%Size) * BlockSpacing; // Modulo gives remainder

		// Make position vector, offset from Grid location
		const FVector BlockLocation = FVector(XOffset, YOffset, 0.f) + GetActorLocation();

		// Spawn a block
		APuzzle_1Block* NewBlock = GetWorld()->SpawnActor<APuzzle_1Block>(BlockLocation, FRotator(0,0,0));

		// Tell the block about its owner
		if (NewBlock != nullptr)
		{
			NewBlock->OwningGrid = this;
		}
	}
}


void APuzzle_1BlockGrid::AddScore()
{
	// Increment score
	Score++;

	// Update text
	ScoreText->SetText(FText::Format(LOCTEXT("ScoreFmt", "Score: {0}"), FText::AsNumber(Score)));
}

#undef LOCTEXT_NAMESPACE
