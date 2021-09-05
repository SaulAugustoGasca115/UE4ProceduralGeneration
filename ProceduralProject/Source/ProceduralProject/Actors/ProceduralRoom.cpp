// Fill out your copyright notice in the Description page of Project Settings.


#include "ProceduralRoom.h"
#include "DrawDebugHelpers.h"

// Sets default values
AProceduralRoom::AProceduralRoom() : 
	GridSizeX(5),
	GridSizeY(5),
	SquareWidth(200.0f),
	TopLeft(0.0f),
	BottomRight(1000.0f,1000.0f,0.0f),
	GridHeight(1.0f),
	RoomLength(1000.0f),
	RoomWidth(1000.0f)

{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Floor = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("FloorComponent"));
	SetRootComponent(Floor);

	

}

// Called when the game starts or when spawned
void AProceduralRoom::BeginPlay()
{
	Super::BeginPlay();

	/*SpawnItem(ChairClass);
	SpawnItem(ChairClass);
	SpawnItem(ChairClass);
	SpawnItem(ChairClass);
	SpawnItem(ChairClass);*/

	CreateGrid();
	
}

// Called every frame
void AProceduralRoom::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AProceduralRoom::SpawnItem(UClass* ItemToSpawn)
{
	float XCoordinates = FMath::FRandRange(-500.0, 500.0f);
	float YCoordinates = FMath::FRandRange(-500.0, 500.0f);

	float Yaw = FMath::FRandRange(0.0f, 360.0f);

	FVector Location{ XCoordinates,YCoordinates,0.0f };
	FRotator Rotation{ 0.0f,Yaw,0.0f };

	GetWorld()->SpawnActor<AActor>(ItemToSpawn,Location,Rotation);
}

void AProceduralRoom::CreateGrid()
{
	for (int32 i = 0; i < GridSizeX + 1; i++)
	{
		FVector Start = TopLeft + FVector(i * SquareWidth,0.0f,GridHeight);
		FVector End = Start + FVector(0.0f, RoomLength, GridHeight);

		DrawDebugLine(GetWorld(), Start, End, FColor::Green, true);
	}
}