// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ManaComponent.generated.h"


DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnManaChanged);

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class NEWRPG_API UManaComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UManaComponent();

	UPROPERTY(BlueprintAssignable)
	FOnManaChanged  OnManaChanged;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Mana Properties")
	float CurrentMana;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Mana Properties")
	float MaxMana;

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;


	UFUNCTION(BlueprintCallable)
	void AffectMana(float ManaChangeAmount);
		
};
