// Fill out your copyright notice in the Description page of Project Settings.


#include "FireBallSpellComponent.h"
#include "Kismet/GameplayStatics.h"
#include "SpellProjectile.h"


UFireBallSpellComponent::UFireBallSpellComponent() {

}


void UFireBallSpellComponent::CastSpell() {

	FVector SpawnLocation = GetOwner()->GetActorLocation() + GetOwner()->GetActorForwardVector() * 100.f;
	FRotator SpawnRotation = GetOwner()->GetActorRotation();

	FTransform SpawnTransform(SpawnRotation, SpawnLocation);

	GetWorld()->SpawnActor<ASpellProjectile>(ProjectileClass, SpawnTransform);
		
}
