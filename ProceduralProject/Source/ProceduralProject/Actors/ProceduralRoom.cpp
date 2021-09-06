// Fill out your copyright notice in the Description page of Project Settings.


#include "ProceduralRoom.h"
#include "DrawDebugHelpers.h"
#include "../FloorNode.h"

// Sets default values
AProceduralRoom::AProceduralRoom() : 
	GridSizeX(5),
	GridSizeY(5),
	SquareWidth(200.0f),
	TopLeft(0.0f),
	BottomRight(1000.0f,1000.0f,0.0f),
	GridHeight(1.0f),
	RoomLength(1000.0f),
	RoomWidth(1000.0f),
	Radius(25.0f)

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


	//SpawnItem(ChairClass);

	CreateGrid();

	PlacePointsOnGrid();

	//old method
	/*FloorNode* Node = new FloorNode();
	
	delete Node; */


	//to p[oint to one pointer
	//TUniquePtr<FloorNode> UniqueNodePtr(new FloorNode());

	//to pint to multiple pointers
	TSharedPtr<FloorNode> SharedNodePtr(new FloorNode());

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

		if (bActivateLineDebug)
		{
			DrawDebugLine(GetWorld(), Start, End, FColor::Green, true);
		}
		else {
			//DrawDebugLine(GetWorld(), Start, End, FColor::Green, false);
			return;
		}
		
	}

	for (int32 i = 0 ; i < GridSizeY +  1;i++)
	{
		FVector Start = TopLeft + FVector(0.0f, i * SquareWidth, GridHeight);
		FVector End = Start + FVector(RoomWidth,0.0f,GridHeight);

		if (bActivateLineDebug)
		{
			DrawDebugLine(GetWorld(), Start, End, FColor::Green, true);
		}
		else {
			//DrawDebugLine(GetWorld(), Start, End, FColor::Green, false);
			return;
		}

		
	}
}

FVector AProceduralRoom::GetRandomPointInSquare(const FVector& UpperLeft, const FVector& LowerRight)
{
	float RandomX = FMath::FRandRange(UpperLeft.X,LowerRight.X);
	float RandomY = FMath::FRandRange(UpperLeft.Y, LowerRight.Y);

	return FVector(RandomX,RandomY,1.0f);
}

void AProceduralRoom::PlacePointsOnGrid()
{
	for (int32 i = 0;i < GridSizeX;i++)
	{
		for (int32 j = 0; j < GridSizeY; j++)
		{
			FVector UpperLeft{ i * SquareWidth + Radius,j * SquareWidth + Radius,GridHeight };
			FVector LowerRight{ i * SquareWidth + SquareWidth - Radius,j * SquareWidth + SquareWidth - Radius,GridHeight };

			FVector RandomPointInTheSquare{ GetRandomPointInSquare(UpperLeft,LowerRight) };

			DrawDebugPoint(GetWorld(),RandomPointInTheSquare,10.0f,FColor::Red,true);

			DrawDebugCircle(GetWorld(), RandomPointInTheSquare, Radius, 48.0f, FColor::Blue, true,-1.0f,0,2.5f,FVector(0.0f,1.0f,0.0f),FVector(1.0f,0.0f,0.0f),true);

			float RandomYaw = FMath::FRandRange(0.0, 360.0f);
			GetWorld()->SpawnActor<AActor>(ChairClass, RandomPointInTheSquare, FRotator(0.0f, RandomYaw, 0.0f));

		}
	}
}
