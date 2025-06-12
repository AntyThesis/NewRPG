// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyBase.h"
#include "HealthComponent.h"


// Sets default values
AEnemyBase::AEnemyBase()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Create a Health Component and initialize the MaxHealth variable
	HealthComponent = CreateDefaultSubobject<UHealthComponent>(TEXT("Enemy Health Component"));
	HealthComponent->MaxHealth = 50.f;


}

// Called when the game starts or when spawned
void AEnemyBase::BeginPlay()
{
	Super::BeginPlay();
	
	HealthComponent->CurrentHealth = HealthComponent->MaxHealth;

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

