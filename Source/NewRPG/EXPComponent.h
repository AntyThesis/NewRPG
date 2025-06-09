// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EXPComponent.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnEXPEarned);

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class NEWRPG_API UEXPComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UEXPComponent();

	UPROPERTY(BlueprintAssignable)
	FOnEXPEarned OnEXPEarned;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Experience Stats")
	float CurrentEXP;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Experience Stats")
	float MaxEXP;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Experience Stats")
	float RequiredEXP;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Experience Stats")
	int Level;

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
	UFUNCTION(BlueprintCallable)
	void EarnEXP(float EXPToEarn);

	UFUNCTION(BlueprintCallable)
	void LevelUp();
};
