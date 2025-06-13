// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "NewRPGGameMode.generated.h"

class ANewRPGCharacter;

UCLASS(minimalapi)
class ANewRPGGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	ANewRPGGameMode();

	TArray<ANewRPGCharacter*> Players;

	void BeginPlay() override;
};



