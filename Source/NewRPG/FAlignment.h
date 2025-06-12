// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "FAlignment.generated.h"
/**
 * 
 */
USTRUCT(BlueprintType)
struct NEWRPG_API FAlignment
{
	GENERATED_BODY()

	// Declare the member variables that belong to the FAlignment structure
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "AlignmentStats")
	float RedAlignment = 0;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "AlignmentStats")
	float GreenAlignment = 0;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "AlignmentStats")
	float BlueAlignment = 0;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "AlignmentStats")
	float YellowAlignment = 0;

public:
	FAlignment();
	~FAlignment();
};
