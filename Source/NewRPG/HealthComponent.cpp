// Fill out your copyright notice in the Description page of Project Settings.


#include "HealthComponent.h"

// Sets default values for this component's properties
UHealthComponent::UHealthComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
    


	MaxHealth = 100.f;


	// ...
}


// Called when the game starts
void UHealthComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	CurrentHealth = MaxHealth;


	AffectHealth(-50);
}


// Called every frame
void UHealthComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UHealthComponent::AffectHealth(float HealthChangeAmount){
	CurrentHealth += HealthChangeAmount;
	CurrentHealth = FMath::Clamp(CurrentHealth, 0, MaxHealth);
	OnHealthChanged.Broadcast();

	if (GEngine) {
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("Health: %f"), CurrentHealth));
	}

	if (CurrentHealth <= 0) {
		RIP();
	}
}

void UHealthComponent::RIP() {
	OnDeath.Broadcast();
}