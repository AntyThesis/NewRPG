// Fill out your copyright notice in the Description page of Project Settings.


#include "SpellProjectile.h"
#include "GameFramework/ProjectileMovementComponent.h"

// Sets default values
ASpellProjectile::ASpellProjectile()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;


	ProjectileMovementComponent = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("Projectile Movement Component"));

	StaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Static Mesh Component"));

}

// Called when the game starts or when spawned
void ASpellProjectile::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASpellProjectile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

