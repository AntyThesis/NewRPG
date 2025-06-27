// Fill out your copyright notice in the Description page of Project Settings.


#include "FireBallSpellComponent.h"
#include "Kismet/GameplayStatics.h"
#include "ManaComponent.h"
#include "SpellProjectile.h"


UFireBallSpellComponent::UFireBallSpellComponent() {
	SpellName = "FireBall Spell";
	ManaCost = -50.f;
	SpellDamage = -70.f;
	CoolDown = 2.f;
}


void UFireBallSpellComponent::CastSpell(UManaComponent* ManaComponent) {
	if (ManaComponent && ManaComponent->CurrentMana >= (ManaCost*-1)) {
		Super::CastSpell(ManaComponent);

		FVector SpawnLocation = GetOwner()->GetActorLocation() + GetOwner()->GetActorForwardVector() * 150.f;
		FRotator SpawnRotation = GetOwner()->GetActorRotation();

		FTransform SpawnTransform(SpawnRotation, SpawnLocation);

		GetWorld()->SpawnActor<ASpellProjectile>(ProjectileClass, SpawnTransform);
	}
	else {
		if (GEngine) {
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Cyan, TEXT("Out of mana"));
		}
	}
}
