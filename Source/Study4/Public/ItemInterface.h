
#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "ItemInterface.generated.h"

UINTERFACE(MinimalAPI)
class UItemInterface : public UInterface // 리플렉션 시스템을 위한 클래스
{
	GENERATED_BODY()
};

class STUDY4_API IItemInterface // 실제 사용할 인터페이스 클래스
{
	GENERATED_BODY()

public:
	UFUNCTION() // UFUNCTION() 있어야 런타임 때 함수 찾을 수 있음
	virtual void OnItemOverlap(
			UPrimitiveComponent* OverlappedComp, // 자기 자신
			AActor* OtherActor, // 오버랩된 상대 액터
			UPrimitiveComponent* OtherComp, // 오버랩된 상태 액터의 컴포넌트
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
	virtual FName GetItemType() const = 0; // 성능을 위해 FName으로 반환
};
