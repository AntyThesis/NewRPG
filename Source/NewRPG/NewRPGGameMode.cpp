// Copyright Epic Games, Inc. All Rights Reserved.

#include "NewRPGGameMode.h"
#include "NewRPGPlayerController.h"
#include "Kismet/GameplayStatics.h"
#include "NewRPGCharacter.h"
#include "UObject/ConstructorHelpers.h"
#include "AlignmentComponent.h"


ANewRPGGameMode::ANewRPGGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = ANewRPGPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDown/Blueprints/BP_TopDownCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}

	// set default controller to our Blueprinted controller
	static ConstructorHelpers::FClassFinder<APlayerController> PlayerControllerBPClass(TEXT("/Game/TopDown/Blueprints/BP_TopDownPlayerController"));
	if(PlayerControllerBPClass.Class != NULL)
	{
		PlayerControllerClass = PlayerControllerBPClass.Class;
	}
}


void ANewRPGGameMode::BeginPlay() {
	Super::BeginPlay();
	TArray<AActor*> FoundActors;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(),ANewRPGCharacter::StaticClass(),FoundActors);

	int32 CurrentIndex = 0;

	for (AActor* CurrentActor: FoundActors) {
		ANewRPGCharacter* Character = Cast<ANewRPGCharacter>(CurrentActor);
		if (Character) {
			
			Players.Add(Character);

			Character->AlignmentComponent->PlayerID = CurrentIndex;

			CurrentIndex++;
		}

		if (GEngine) {
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, FString::Printf(TEXT("Player ID is: %i"),Character->AlignmentComponent->PlayerID));
		}
		
	}
	
}