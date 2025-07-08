// Fill out your copyright notice in the Description page of Project Settings.


#include "NPCBase.h"
#include "Blueprint/UserWidget.h"
#include <Kismet/GameplayStatics.h>
#include "NewRPGCharacter.h"
#include "GameFramework/CharacterMovementComponent.h"

// Sets default values
ANPCBase::ANPCBase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ANPCBase::BeginPlay()
{
	Super::BeginPlay();

	if (WidgetClass) {
		ConversationWidget = CreateWidget<UUserWidget>(GetWorld(), WidgetClass);
	}
	
}

// Called every frame
void ANPCBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


void ANPCBase::Interact(ANewRPGCharacter* InteractingCharacter) {
	if (ConversationWidget && !ConversationWidget->IsInViewport()) {
		ConversationWidget->AddToViewport();
		APlayerController* PlayerController = UGameplayStatics::GetPlayerController(GetWorld(), 0);

		if (PlayerController) {
			PlayerController->SetInputMode(FInputModeUIOnly());
			InteractingCharacter->GetCharacterMovement()->DisableMovement();
			//PlayerController->bShowMouseCursor = true;
		}
		if (GEngine) {
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green,TEXT("Working"));
		}
	}
}

