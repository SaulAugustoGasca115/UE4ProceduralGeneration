// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/StaticMeshComponent.h"
#include "ProceduralRoom.generated.h"

UCLASS()
class PROCEDURALPROJECT_API AProceduralRoom : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AProceduralRoom();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Debug)
		bool bActivateLineDebug = false;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Room, meta = (AllowPrivateAccess=true))
			UStaticMeshComponent* Floor;


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Room, meta = (AllowPrivateAccess = true))
		TSubclassOf<AActor> ChairClass;


	//SpawnActorwithin this class
	void SpawnItem(UClass* ItemToSpawn);


	void CreateGrid();

	FVector GetRandomPointInSquare(const FVector& UpperLeft, const FVector& LowerRight);

	void PlacePointsOnGrid();
	
	float SquareWidth;
	float GridHeight;
	float RoomLength;
	float RoomWidth;

	int32 GridSizeX;
	int32 GridSizeY;

	FVector TopLeft;
	FVector BottomRight;

	//Radius to draw with the Circle Draw Debug
	float Radius = 0.0f;


};
