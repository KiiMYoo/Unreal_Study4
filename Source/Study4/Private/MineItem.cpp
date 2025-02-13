

#include "MineItem.h"
#include "Components/SphereComponent.h"
#include "TimerManager.h"
#include "Kismet/GameplayStatics.h"

AMineItem::AMineItem()
{
	ExplosionDelay = 2.0f;
	ExplosionRadius = 300.0f;
	ExplosionDamage = 30.0f;
	ItemType = "Mine";

	ExplosionCollision = CreateDefaultSubobject<USphereComponent>(TEXT("ExplosionCollision"));
	ExplosionCollision->InitSphereRadius(ExplosionRadius);
	ExplosionCollision->SetCollisionProfileName(TEXT("OverlapAllDynamic"));
	ExplosionCollision->SetupAttachment(Scene);
}

void AMineItem::ActivateItem(AActor* Activator)
{
	GetWorld()->GetTimerManager().SetTimer(
		ExplosionTimer,
		this,
		&AMineItem::Explode,
		ExplosionDelay,
		false
	);

}

void AMineItem::Explode()
{
	TArray<AActor*> OverlappingActors; // 오버랩된 액터 저장
	ExplosionCollision->GetOverlappingActors(OverlappingActors); // 폭발 범위 안에 있는 액터 모두 가져오기

	for (AActor* Actor : OverlappingActors)
	{
		if (Actor && Actor->ActorHasTag("Player"))
		{
			UGameplayStatics::ApplyDamage(
				Actor, // 대미지 받는 객체
				ExplosionDamage, // 대미지 양
				nullptr, // 대미지 유발한 주체
				this, // 대미지 가하는 객체
				UDamageType::StaticClass() // 대미지 유형
			);
		}
	}

	DestroyItem();
}