// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BasicSpellComponent.h"
#include "FireBallSpellComponent.generated.h"



class ASpellProjectile;
/**
 * 
 */
UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class NEWRPG_API UFireBallSpellComponent : public UBasicSpellComponent
{
	GENERATED_BODY()

public:


	UFireBallSpellComponent();

	UPROPERTY(EditAnywhere, Category = "Spell")
	TSubclassOf<ASpellProjectile> ProjectileClass;


	virtual void CastSpell() override;

};
