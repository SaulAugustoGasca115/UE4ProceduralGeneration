// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "../../ReverseTime/FramePackage.h"
#include "ReverseTimeComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent),Blueprintable )
class PROCEDURALPROJECT_API UReverseTimeComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UReverseTimeComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	UFUNCTION()
	void SetReversingTime(bool InReversingTime);

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	//true when reversing time collecting data from false
	bool bReversingTime = false;

	//out of time data,cannot keep reversing
	bool bOutOfData = false;


	//Actual Since we started reversing time
	float RunningTime = 0.0f;

	//Running count of the frame package delta times
	float ReverseRunningTime = 0.0f;


	//the total amount of time recorded In FramePackage
	float RecordedTime = 0.0f;

	TDoubleLinkedList<FFramePackage> StoredFrames;

	class AProceduralProjectCharacter* Character;
};
