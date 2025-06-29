// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyBase.h"
#include "HealthComponent.h"
#include "NewRPGCharacter.h"
#include "Kismet/GameplayStatics.h"
#include "Components/CapsuleComponent.h"
#include "EXPComponent.h"



// Sets default values
AEnemyBase::AEnemyBase()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Create a Health Component and initialize the MaxHealth variable
	HealthComponent = CreateDefaultSubobject<UHealthComponent>(TEXT("Enemy Health Component"));
	HealthComponent->MaxHealth = 50.f;

	ExperienceToGive = 20.f;


}

// Called when the game starts or when spawned
void AEnemyBase::BeginPlay()
{
	Super::BeginPlay();
	
	if (HealthComponent) {

		HealthComponent->CurrentHealth = HealthComponent->MaxHealth;
		HealthComponent->OnDeath.AddDynamic(this, &AEnemyBase::EnemyKilled);
	
	}
	else {
		if (GEngine) {
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Cyan, TEXT("No health component found"));
		}
	}
	

}

// Called every frame
void AEnemyBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AEnemyBase::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

// {{{Refactor so that every player gets exp when an enemy dies}}}
void AEnemyBase::EnemyKilled() {

		
		GetMesh()->SetSimulatePhysics(true);
		GetMesh()->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);

		GetCapsuleComponent()->SetCollisionEnabled(ECollisionEnabled::NoCollision);

		GrantExp(ExperienceToGive);
	
}


void AEnemyBase::GrantExp(float ExpToGrant) {
	TArray<AActor*> FoundPlayers;

	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ANewRPGCharacter::StaticClass(), FoundPlayers);

	if (FoundPlayers.Num() > 0) {
		for (AActor* PossiblePlayer : FoundPlayers) {
			ANewRPGCharacter* Player = Cast<ANewRPGCharacter>(PossiblePlayer);

			Player->EXPComponent->EarnEXP(ExpToGrant);
		}
	}
}