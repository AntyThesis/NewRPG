// Fill out your copyright notice in the Description page of Project Settings.


#include "AlignmentComponent.h"
#include "FAlignment.h"

// Sets default values for this component's properties
UAlignmentComponent::UAlignmentComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// initialize the FAlignment structure variables
	AlignmentStats.BlueAlignment = 20.f;
	AlignmentStats.GreenAlignment = 20.f;
	AlignmentStats.RedAlignment = 20.f;
	AlignmentStats.YellowAlignment = 20.f;

	// ...
}


// Called when the game starts
void UAlignmentComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UAlignmentComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}


// Define the functions that manipulate the FAlignment structure variables
void UAlignmentComponent::AffectBlue(float BlueChangeAmount) {
	AlignmentStats.BlueAlignment += BlueChangeAmount;
	AlignmentStats.BlueAlignment = FMath::Clamp(AlignmentStats.BlueAlignment, 0, 100.f);
}


void UAlignmentComponent::AffectRed(float RedChangeAmount) {
	AlignmentStats.RedAlignment += RedChangeAmount;
	AlignmentStats.RedAlignment = FMath::Clamp(AlignmentStats.RedAlignment, 0, 100.f);
}


void UAlignmentComponent::AffectGreen(float GreenChangeAmount) {
	AlignmentStats.GreenAlignment += GreenChangeAmount;
	AlignmentStats.GreenAlignment = FMath::Clamp(AlignmentStats.GreenAlignment, 0, 100.f);
}


void UAlignmentComponent::AffectYellow(float YellowChangeAmount) {
	AlignmentStats.YellowAlignment += YellowChangeAmount;
	AlignmentStats.YellowAlignment = FMath::Clamp(AlignmentStats.YellowAlignment, 0, 100.f);
}