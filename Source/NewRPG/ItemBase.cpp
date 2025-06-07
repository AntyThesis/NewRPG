// Fill out your copyright notice in the Description page of Project Settings.


#include "ItemBase.h"
#include "Components/BoxComponent.h"
#include "NewRPGCharacter.h"
#include "InventoryComponent.h"


// Sets default values
AItemBase::AItemBase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	StaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Static Mesh"));

	SetRootComponent(StaticMeshComponent);



	static ConstructorHelpers::FObjectFinder<UStaticMesh>MeshFinder(TEXT("/Game/StarterContent/Shapes/Shape_Cone.Shape_Cone"));

	if (MeshFinder.Succeeded()) {
		ItemStats.StaticMesh = MeshFinder.Object;
	}


	ItemStats.ItemID = 0;
	ItemStats.ItemName = TEXT("BasicItemClass");


	CollisionBox = CreateDefaultSubobject<UBoxComponent>(TEXT("Collision Box"));
	CollisionBox->SetupAttachment(StaticMeshComponent);

	
	CollisionBox->OnComponentBeginOverlap.AddDynamic(this, &AItemBase::OnOverlapBegin);

	

	
}

// Called when the game starts or when spawned
void AItemBase::BeginPlay()
{
	Super::BeginPlay();


		StaticMeshComponent->SetStaticMesh(ItemStats.StaticMesh);
	
	
}

// Called every frame
void AItemBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AItemBase::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex,
	bool bFromSweep, const FHitResult& SweepResult) {
	if (OtherActor) {

		InteractingPlayer = Cast<ANewRPGCharacter>(OtherActor);
		InteractingPlayer->InventoryComponent->AddItemToInventory(this);
		PickedUp();
	
		
		/*if (GEngine) {
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, FString::Printf(TEXT("Actor Name:%s"), *GetName()));
		}
		*/
	}
	
}



void AItemBase::PickedUp() {

	StaticMeshComponent->SetVisibility(false);
	StaticMeshComponent->SetCollisionEnabled(ECollisionEnabled::NoCollision);

	CollisionBox->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	
}