

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
	TArray<AActor*> OverlappingActors; // �������� ���� ����
	ExplosionCollision->GetOverlappingActors(OverlappingActors); // ���� ���� �ȿ� �ִ� ���� ��� ��������

	for (AActor* Actor : OverlappingActors)
	{
		if (Actor && Actor->ActorHasTag("Player"))
		{
			UGameplayStatics::ApplyDamage(
				Actor, // ����� �޴� ��ü
				ExplosionDamage, // ����� ��
				nullptr, // ����� ������ ��ü
				this, // ����� ���ϴ� ��ü
				UDamageType::StaticClass() // ����� ����
			);
		}
	}

	DestroyItem();
}