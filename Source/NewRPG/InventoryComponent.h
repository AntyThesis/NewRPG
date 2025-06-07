// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "InventoryComponent.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnItemAdded);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnItemRemoved);


class AItemBase;

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class NEWRPG_API UInventoryComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UInventoryComponent();

	UPROPERTY(BlueprintAssignable)
	FOnItemAdded OnItemAdded;

	UPROPERTY(BlueprintAssignable)
	FOnItemRemoved OnItemRemoved;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Inventory", meta = (ToolTip = "List of items currently held in inventory."))
	TArray<AItemBase*> Items;


protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UFUNCTION(BlueprintCallable)
	void AddItemToInventory( AItemBase* ItemToBeAdded);

	UFUNCTION(BlueprintCallable)
	void RemoveItemFromInventory( AItemBase* ItemToBeRemoved);


		
};
