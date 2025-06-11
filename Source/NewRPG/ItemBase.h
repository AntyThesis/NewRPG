// Fill out your copyright notice in the Description page of Project Settings.

#pragma once


#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FItemStruct.h"
#include "Interactable.h"
#include "ItemBase.generated.h"

class UBoxComponent;
class ANewRPGCharacter;


UCLASS()
class NEWRPG_API AItemBase : public AActor, public IInteractable
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AItemBase();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Mesh")
	UStaticMeshComponent* StaticMeshComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Collsion")
	UBoxComponent* CollisionBox;

	
	//ANewRPGCharacter* InteractingPlayer;


	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "ItemStats")
	FItemStruct ItemStats;




	


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


	UFUNCTION(BlueprintCallable)
	void PickedUp();


	UFUNCTION()
	/*void OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
		UPrimitiveComponent* OtherComp, int32 OtherBodyIndex,
		bool bFromSweep, const FHitResult& SweepResult);*/


	
	void Interact(ANewRPGCharacter* InteractingCharacter) override;

};
