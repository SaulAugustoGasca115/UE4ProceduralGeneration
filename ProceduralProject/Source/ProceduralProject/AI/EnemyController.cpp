// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyController.h"
#include "../Characters/EnemySoulsLike.h"

AEnemyController::AEnemyController()
{
	BlackboardComponent = CreateDefaultSubobject<UBlackboardComponent>(TEXT("BB Component"));
	check(BlackboardComponent);

	BehaviorTreeComponent = CreateDefaultSubobject<UBehaviorTreeComponent>(TEXT("BT Component"));
}

void AEnemyController::BeginPlay()
{
	Super::BeginPlay();


	AEnemySoulsLike* enemy = Cast<AEnemySoulsLike>(GetOwner());

	RunBehaviorTree(enemy->BehaviourTree);
}


bool AEnemyController::RunBehaviorTree(UBehaviorTree* BTAsset)
{
	Super::RunBehaviorTree(BTAsset);

		//AEnemySoulsLike* enemy = Cast<AEnemySoulsLike>(BTAsset);

		//if (enemy)
		//{
		//	enemy->BehaviourTree;

		//	

		//	return true;

		//	//BlackboardComponent->InitializeBlackboard(*(enemy->BehaviourTree));

		//	
		//}
	if (BTAsset != nullptr)
	{
		return true;
	}
	

	
	return true;
}
