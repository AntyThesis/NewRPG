// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "FItemStruct.generated.h"

/**
 * 
 */

USTRUCT(BlueprintType)
struct NEWRPG_API FItemStruct
{
	GENERATED_BODY()

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "ItemStats")
	UStaticMesh* StaticMesh;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "ItemStats")
	FString ItemName;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "ItemStats")
	int ItemID;


public:
	FItemStruct();
	~FItemStruct();
};
