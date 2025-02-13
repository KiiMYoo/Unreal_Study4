
#pragma once

#include "CoreMinimal.h"
#include "CoinItem.h"
#include "BigCoinItem.generated.h"

/**
 *
 */
UCLASS()
class STUDY4_API ABigCoinItem : public ACoinItem
{
	GENERATED_BODY()

public:
	ABigCoinItem();

protected:
	virtual void ActivateItem(AActor* Activator) override;
};
