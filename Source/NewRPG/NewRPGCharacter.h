// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "NewRPGCharacter.generated.h"

class UHealthComponent;
class UInventoryComponent;
class UManaComponent;
class UAlignmentComponent;
class UEXPComponent;


UCLASS(Blueprintable)
class ANewRPGCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	ANewRPGCharacter();

	// Declare custom components for the player character
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Custom Components")
	UHealthComponent* HealthComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Custom Components")
	UInventoryComponent* InventoryComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Custom Components")
	UManaComponent* ManaComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Custom Components")
	UAlignmentComponent* AlignmentComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Custom Components")
	UEXPComponent* EXPComponent;




	

	// Called every frame.
	virtual void Tick(float DeltaSeconds) override;

	/** Returns TopDownCameraComponent subobject **/
	FORCEINLINE class UCameraComponent* GetTopDownCameraComponent() const { return TopDownCameraComponent; }
	/** Returns CameraBoom subobject **/
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }


	UFUNCTION(BlueprintCallable)
	void SphereOverlap();

	virtual void BeginPlay() override;

private:
	/** Top down camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* TopDownCameraComponent;

	/** Camera boom positioning the camera above the character */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* CameraBoom;



};

