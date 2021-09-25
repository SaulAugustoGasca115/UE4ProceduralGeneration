// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "BehaviorTree/BehaviorTreeComponent.h"
#include "Components/SphereComponent.h"
#include "EnemySoulsLike.generated.h"

UCLASS()
class PROCEDURALPROJECT_API AEnemySoulsLike : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AEnemySoulsLike();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Components")
		USphereComponent* SphereCollision;


	//BT for the AI Character
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="Behaviour Tree")
	 UBehaviorTree* BehaviourTree;


	void SetTarget(AActor* NewTarget);


	UFUNCTION(BlueprintPure,Category="AI")
	AActor* GetTarget();

	void ClearTarger(AActor* NewTarget);


	UFUNCTION()
		void BeginOverlap(UPrimitiveComponent* OverlappedComponent,
			AActor* OtherActor,
			UPrimitiveComponent* OtherComp,
			int32 OtherBodyIndex,
			bool bFromSweep,
			const FHitResult& SweepResult);


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
