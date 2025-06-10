// Fill out your copyright notice in the Description page of Project Settings.


#include "ManaComponent.h"

// Sets default values for this component's properties
UManaComponent::UManaComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...

	MaxMana = 100.f;
	CurrentMana = MaxMana;
}


// Called when the game starts
void UManaComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...

	
	
}


// Called every frame
void UManaComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}


void UManaComponent::AffectMana(float ManaChangeAmount) {
	CurrentMana += ManaChangeAmount;
	CurrentMana = FMath::Clamp(CurrentMana, 0, MaxMana);
	OnManaChanged.Broadcast();
	if (GEngine) {
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, FString::Printf(TEXT("Current Mana is: %f"), CurrentMana));
	}
}