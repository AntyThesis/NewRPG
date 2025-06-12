// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "FAlignment.h"
#include "AlignmentComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class NEWRPG_API UAlignmentComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UAlignmentComponent();
	
	// Declare the structure containing the FAlignment variables
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Alignment Properties")
	FAlignment AlignmentStats;

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	// Declare functions to manipulate the FAlignment variables
	UFUNCTION(BlueprintCallable)
	void AffectRed(float RedChangeAmount);

	UFUNCTION(BlueprintCallable)
	void AffectBlue(float BlueChangeAmount);

	UFUNCTION(BlueprintCallable)
	void AffectYellow(float YellowChangeAmount);

	UFUNCTION(BlueprintCallable)
	void AffectGreen(float GreenChangeAmount);
		
};
