// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "BehaviorTree/BehaviorTreeComponent.h"
#include "EnemyController.generated.h"

/**
 * 
 */
UCLASS()
class PROCEDURALPROJECT_API AEnemyController : public AAIController
{
	GENERATED_BODY()

public:

	AEnemyController();

	
	virtual bool RunBehaviorTree(UBehaviorTree* BTAsset) override;


	//BB component for this enemy
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="AI Behavior")
	UBlackboardComponent* BlackboardComponent;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI Behavior")
	class UBehaviorTreeComponent* BehaviorTreeComponent;

protected:

	virtual void BeginPlay() override;

};
