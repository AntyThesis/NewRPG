// Copyright Epic Games, Inc. All Rights Reserved.

#include "NewRPGCharacter.h"
#include "UObject/ConstructorHelpers.h"
#include "Camera/CameraComponent.h"
#include "Components/DecalComponent.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/PlayerController.h"
#include "GameFramework/SpringArmComponent.h"
#include "Materials/Material.h"
#include "Engine/World.h"
#include "HealthComponent.h"
#include "InventoryComponent.h"
#include "ManaComponent.h"
#include "ItemBase.h"
#include "AlignmentComponent.h"
#include "EXPComponent.h"
#include "Kismet/KismetSystemLibrary.h"

ANewRPGCharacter::ANewRPGCharacter()
{
	// Set size for player capsule
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);

	// Don't rotate character to camera direction
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	// Configure character movement
	GetCharacterMovement()->bOrientRotationToMovement = true; // Rotate character to moving direction
	GetCharacterMovement()->RotationRate = FRotator(0.f, 640.f, 0.f);
	GetCharacterMovement()->bConstrainToPlane = true;
	GetCharacterMovement()->bSnapToPlaneAtStart = true;

	// Create a camera boom...
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->SetUsingAbsoluteRotation(true); // Don't want arm to rotate when character does
	CameraBoom->TargetArmLength = 800.f;
	CameraBoom->SetRelativeRotation(FRotator(-60.f, 0.f, 0.f));
	CameraBoom->bDoCollisionTest = false; // Don't want to pull camera in when it collides with level

	// Create a camera...
	TopDownCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("TopDownCamera"));
	TopDownCameraComponent->SetupAttachment(CameraBoom, USpringArmComponent::SocketName);
	TopDownCameraComponent->bUsePawnControlRotation = false; // Camera does not rotate relative to arm

	// Activate ticking in order to update the cursor every frame.
	PrimaryActorTick.bCanEverTick = true;
	PrimaryActorTick.bStartWithTickEnabled = true;

	// Create custom components and initialize component variables
	HealthComponent = CreateDefaultSubobject<UHealthComponent>(TEXT("Player Health Component"));
	InventoryComponent = CreateDefaultSubobject<UInventoryComponent>(TEXT("Player Inventory Component"));
	ManaComponent = CreateDefaultSubobject<UManaComponent>(TEXT("Player Mana Component"));
	AlignmentComponent = CreateDefaultSubobject<UAlignmentComponent>(TEXT("Player Alignment Component"));
	EXPComponent = CreateDefaultSubobject<UEXPComponent>(TEXT("Player EXP Component"));

	HealthComponent->MaxHealth = 100.f;
	ManaComponent->MaxMana = 100.f;
	
}

void ANewRPGCharacter::Tick(float DeltaSeconds)
{
    Super::Tick(DeltaSeconds);
}



void ANewRPGCharacter::SphereOverlap() {


	// Setup the variables for the Sphere Overlap
	FVector SphereCenter = GetActorLocation();
	float Radius = 300.f;
	TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes;
	ObjectTypes.Add(UEngineTypes::ConvertToObjectType(ECC_WorldDynamic));



	// Add this actor to the list of actors that this overlap is meant to ignore
	TArray<AActor*> ActorsToIgnore;
	ActorsToIgnore.Add(this);


	// List of actors hit by this overlap
	TArray<AActor*> OutActors;


	// Call the overlap and Set bHit to equal the hit result
	bool bHit = UKismetSystemLibrary::SphereOverlapActors(GetWorld(), SphereCenter, Radius, ObjectTypes, AItemBase::StaticClass(), ActorsToIgnore, OutActors);


	// if there is a hit and the hit actor inherits from the Interact Interface print the name of the hit actor to the screen and call Interact() on that actor
	if (bHit) {
		
		if (IInteractable* InteractableObject = Cast<IInteractable>(OutActors[0])) {
			if (InteractableObject) {
				GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Magenta, FString::Printf(TEXT("%s"), *OutActors[0]->GetName()));
				InteractableObject->Interact(this);
			}
		
		}
	}
	DrawDebugSphere(GetWorld(), SphereCenter, Radius, 12, FColor::Green, false, 2.f);
}


void ANewRPGCharacter::BeginPlay() {
	Super::BeginPlay();

	// If there is a health component then initialize its variables
	if (HealthComponent) {

		HealthComponent->CurrentHealth = HealthComponent->MaxHealth;
	 
	}

	else {
		if (GEngine) {
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("No health component found"));
		}
	}

	// If there is a Mana component then initialize its variables
	if (ManaComponent) {
		ManaComponent->CurrentMana = ManaComponent->MaxMana;
	}
	else {
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, TEXT("No Mana component found"));
	}
}