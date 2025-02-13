
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "StudyCharacter.generated.h"

class USpringArmComponent;
class UCameraComponent;
class UWidgetComponent;
struct FInputActionValue;

UCLASS()
class STUDY4_API AStudyCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	AStudyCharacter();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera")
	USpringArmComponent* SpringArmComp;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera")
	UCameraComponent* CameraComp;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "UI")
	UWidgetComponent* OverheadWidget;

	UFUNCTION(BlueprintPure, Category = "Speed")
	float GetSpeed() const;
	UFUNCTION(BlueprintPure, Category = "Health")
	float GetHealth() const;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "State|health")
	float MaxHealth;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "State|health")
	float Health;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "State|health")
	float NormalSpeed;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "State|health")
	float SprintSpeedMultiplier;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "State|health")
	float SprintSpeed;

	FVector OriginSize;

	bool IsSprinting;

	UFUNCTION(BlueprintCallable, Category = "Health")
	void AddHealth(float Amount);
	UFUNCTION(BlueprintCallable, Category = "Speed")
	void ResetSpeed();
	UFUNCTION(BlueprintCallable, Category = "Speed")
	void ChangeSpeed(float Amount);
	UFUNCTION(BlueprintCallable, Category = "Speed")
	void ChangeSize(float Magnification);
	UFUNCTION(BlueprintCallable, Category = "Speed")
	void ResetSize();

	void OnDeath();
	void UpdateOverheadHP();

	virtual float TakeDamage(
		float DamageAmount, // 대미지 양
		struct FDamageEvent const& DamageEvent, // 대미지 유형. 대미지 추가 정보
		class AController* EventInstigator, // 대미지를 가한 객체의 컨트롤러
		AActor* DamageCsuser) override; // 대미지를 가한 객체

	virtual void BeginPlay();
protected:
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UFUNCTION()
	void Move(const FInputActionValue& value);
	UFUNCTION()
	void StartJump(const FInputActionValue& value);
	UFUNCTION()
	void StopJump(const FInputActionValue& value);
	UFUNCTION()
	void Look(const FInputActionValue& value);
	UFUNCTION()
	void StartSprint(const FInputActionValue& value);
	UFUNCTION()
	void StopSprint(const FInputActionValue& value);

};
