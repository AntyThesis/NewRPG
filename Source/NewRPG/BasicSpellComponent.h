// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "TimerManager.h"
#include "Engine/Texture2D.h"
#include "BasicSpellComponent.generated.h"

class ACharacter;

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class NEWRPG_API UBasicSpellComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UBasicSpellComponent();


	FTimerHandle TimerHandle;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Spell State")
	bool bOnCooldown;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Spell Properties")
	FString SpellName;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Spell Properties")
	UTexture2D* Image;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Spell Properties")
	float ManaCost;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Spell Properties")
	float CoolDown;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Spell Properties")
	float SpellDamage;




protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UFUNCTION(BlueprintCallable)
	virtual void CastSpell(ACharacter* CastTarget);

	UFUNCTION(BlueprintCallable)
	virtual void ToggleCooldown();
		
};
