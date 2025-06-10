// Fill out your copyright notice in the Description page of Project Settings.


#include "EXPComponent.h"

// Sets default values for this component's properties
UEXPComponent::UEXPComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;


	CurrentEXP = 0;

	Level = 1;

	MaxEXP = 100;

	RequiredEXP = MaxEXP - CurrentEXP;
	// ...
}


// Called when the game starts
void UEXPComponent::BeginPlay()
{
	Super::BeginPlay();
	EarnEXP(126.f);
	// ...
	
}


// Called every frame
void UEXPComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UEXPComponent::EarnEXP(float EXPToEarn) {
	float LeftOverEXP = EXPToEarn - RequiredEXP;
	CurrentEXP += EXPToEarn;
	CurrentEXP = FMath::Clamp(CurrentEXP, 0, MaxEXP);
	OnEXPEarned.Broadcast();
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("Exp: %f"), CurrentEXP));

	if (CurrentEXP == MaxEXP) {
		LevelUp();
		EarnEXP(LeftOverEXP);
	}
}




void UEXPComponent::LevelUp() {
	CurrentEXP = 0;
	MaxEXP = MaxEXP * 2;
	Level++;
	OnLevelUp.Broadcast();
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow,FString::Printf(TEXT("Level Up! New Level is: %i"), Level));
}