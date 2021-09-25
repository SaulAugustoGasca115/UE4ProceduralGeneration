// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemySoulsLike.h"
#include "../AI/EnemyController.h"
#include "Kismet/KismetSystemLibrary.h"
#include "../ProceduralProjectCharacter.h"

// Sets default values
AEnemySoulsLike::AEnemySoulsLike()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SphereCollision = CreateDefaultSubobject<USphereComponent>(TEXT("Sphere Collision"));
	SphereCollision->SetupAttachment(RootComponent);

	
	
}



// Called when the game starts or when spawned
void AEnemySoulsLike::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEnemySoulsLike::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	SphereCollision->OnComponentBeginOverlap.AddDynamic(this, &AEnemySoulsLike::BeginOverlap);


	GetTarget();


}

// Called to bind functionality to input
void AEnemySoulsLike::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void AEnemySoulsLike::SetTarget(AActor* NewTarget)
{
     AEnemyController* ai = Cast<AEnemyController>(GetOwner());

	if (ai)
	{
		ai->GetBlackboardComponent()->SetValueAsObject(UKismetSystemLibrary::MakeLiteralName("Target"),NewTarget);

	
	}
}

AActor* AEnemySoulsLike::GetTarget()
{

	AEnemyController* ai = Cast<AEnemyController>(GetOwner());

	if (ai)
	{
		//ai->BlackboardComponent->SetValueAsObject(UKismetSystemLibrary::MakeLiteralName("Target"), ai);
		ai->GetBlackboardComponent()->GetValueAsObject(UKismetSystemLibrary::MakeLiteralName("Target"));

		UE_LOG(LogTemp, Warning, TEXT("player entry"));
	}

	return ai;
}

void AEnemySoulsLike::ClearTarger(AActor* NewTarget)
{

	AEnemyController* ai = Cast<AEnemyController>(GetOwner());

	if (ai)
	{
		ai->BlackboardComponent->SetValueAsObject(UKismetSystemLibrary::MakeLiteralName("Target"), NewTarget);


	}
}

void AEnemySoulsLike::BeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	AProceduralProjectCharacter* character = Cast<AProceduralProjectCharacter>(OtherActor);
	if (character)
	{
		SetTarget(character);


		//UE_LOG(LogTemp, Warning, TEXT("player entry"));

	}


}
