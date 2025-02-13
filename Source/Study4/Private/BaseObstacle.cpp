#include "BaseObstacle.h"
#include "Components/BoxComponent.h"

ABaseObstacle::ABaseObstacle()
{
	PrimaryActorTick.bCanEverTick = true;

	Scene = CreateDefaultSubobject<USceneComponent>(TEXT("Scene"));
	SetRootComponent(Scene);

	Collision = CreateDefaultSubobject<UBoxComponent>(TEXT("Collision"));
	Collision->SetCollisionProfileName(TEXT("OverlapAllDynamic"));
	Collision->SetupAttachment(Scene);

	StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
	StaticMesh->SetupAttachment(Collision);
	StaticMesh->SetSimulatePhysics(false); //
	StaticMesh->SetNotifyRigidBodyCollision(false); //

	Collision->OnComponentBeginOverlap.AddDynamic(this, &ABaseObstacle::OnObstacleOverlap);
}

void ABaseObstacle::BeginPlay()
{
	Super::BeginPlay();
	
}

void ABaseObstacle::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABaseObstacle::OnObstacleOverlap(
		UPrimitiveComponent* OverlappedComp,
		AActor* OtherActor,
		UPrimitiveComponent* OtherComp,
		int32 OtherBodyIndex,
		bool bFromSweep,
		const FHitResult& SweepResult)
{
	if (OtherActor && OtherActor->ActorHasTag(TEXT("Player")))
	{
		ActivateObstacle(OtherActor);
	}
}

void ABaseObstacle::ActivateObstacle(AActor* Activator)
{
}

FName ABaseObstacle::GetObstacleType() const
{
	return ObstacleType;
}

void ABaseObstacle::DestroyObstacle()
{
	Destroy();
}

