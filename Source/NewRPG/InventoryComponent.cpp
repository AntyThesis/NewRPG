// Fill out your copyright notice in the Description page of Project Settings.


#include "InventoryComponent.h"
#include "ItemBase.h"



// Sets default values for this component's properties
UInventoryComponent::UInventoryComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...


}


// Called when the game starts
void UInventoryComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UInventoryComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}


// Add an item to the inventory if there is room
void UInventoryComponent::AddItemToInventory(AItemBase* ItemToBeAdded) {

	if (ItemToBeAdded) {

		if (Items.Num() < 3) {

			Items.Add(ItemToBeAdded);

	
			OnItemAdded.Broadcast();

			if (GEngine) {
				for (int index = 0; index < Items.Num(); index++) {
					GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Cyan, (TEXT("%s"), Items[index]->GetName()));
				}
			}
			

		}

	}

}


// Remove Item from the inventory
void UInventoryComponent::RemoveItemFromInventory( AItemBase* ItemToBeRemoved) {
	if (ItemToBeRemoved) {
		Items.Remove(ItemToBeRemoved);

		OnItemRemoved.Broadcast();
	}
}

