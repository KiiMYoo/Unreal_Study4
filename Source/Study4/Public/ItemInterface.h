
#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "ItemInterface.generated.h"

UINTERFACE(MinimalAPI)
class UItemInterface : public UInterface // ���÷��� �ý����� ���� Ŭ����
{
	GENERATED_BODY()
};

class STUDY4_API IItemInterface // ���� ����� �������̽� Ŭ����
{
	GENERATED_BODY()

public:
	UFUNCTION() // UFUNCTION() �־�� ��Ÿ�� �� �Լ� ã�� �� ����
	virtual void OnItemOverlap(
			UPrimitiveComponent* OverlappedComp, // �ڱ� �ڽ�
			AActor* OtherActor, // �������� ��� ����
			UPrimitiveComponent* OtherComp, // �������� ���� ������ ������Ʈ
			int32 OtherBodyIndex, // 
			bool bFromSweep,
			const FHitResult& SweepResult) = 0;
	UFUNCTION()
	virtual void OnItemEndOverlap(
		UPrimitiveComponent* OverlappedComp,
		AActor* OtherActor,
		UPrimitiveComponent* OtherComp,
		int32 OtherBodyIndex) = 0;
	virtual void ActivateItem(AActor* Activator) = 0;
	virtual FName GetItemType() const = 0; // ������ ���� FName���� ��ȯ
};
