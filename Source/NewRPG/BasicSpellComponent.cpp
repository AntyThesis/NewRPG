// Fill out your copyright notice in the Description page of Project Settings.



#include "BasicSpellComponent.h"
#include "GameFramework/Character.h"
#include "HealthComponent.h"

// Sets default values for this component's properties
UBasicSpellComponent::UBasicSpellComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;


	bOnCooldown = false;

	SpellDamage = -30.f;

	SpellName = "Basic Spell";

	CoolDown = 5.f;

	ManaCost = -30;
	
	// ...
}


// Called when the game starts
void UBasicSpellComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UBasicSpellComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UBasicSpellComponent::CastSpell(ACharacter* CastTarget) {
	if (bOnCooldown == false) {

		if (CastTarget) {
			UHealthComponent* TargetHealthComponent = CastTarget->FindComponentByClass<UHealthComponent>();

			if (TargetHealthComponent) {
				TargetHealthComponent->AffectHealth(SpellDamage);
				ToggleCooldown();
				GetWorld()->GetTimerManager().SetTimer(TimerHandle, this, &UBasicSpellComponent::ToggleCooldown, CoolDown, false);
			}
		}
	}
}

void UBasicSpellComponent::ToggleCooldown() {
	if (bOnCooldown == false) {
		bOnCooldown = true;
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Spell On Cooldown"));
	}
	else {
		bOnCooldown = false;
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("Spell Off Cooldown"));
	}
}