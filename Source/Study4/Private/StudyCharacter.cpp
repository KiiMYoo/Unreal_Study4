
#include "StudyCharacter.h"
#include "EnhancedInputComponent.h"
#include "Camera/CameraComponent.h"
#include "StudyPlayerController.h"
#include "StudyGameStateBase.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Components/WidgetComponent.h"
#include "Components/TextBlock.h"


AStudyCharacter::AStudyCharacter()
{
	PrimaryActorTick.bCanEverTick = true;

	SpringArmComp = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
	SpringArmComp->SetupAttachment(RootComponent);
	SpringArmComp->TargetArmLength = 300.0f;
	SpringArmComp->bUsePawnControlRotation = true;

	CameraComp = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	CameraComp->SetupAttachment(SpringArmComp, USpringArmComponent::SocketName);
	CameraComp->bUsePawnControlRotation = false;

	NormalSpeed = 600.0f;
	SprintSpeedMultiplier = 1.7f;
	SprintSpeed = NormalSpeed * SprintSpeedMultiplier;

	GetCharacterMovement()->MaxWalkSpeed = NormalSpeed;

	OverheadWidget = CreateDefaultSubobject<UWidgetComponent>(TEXT("OverheadWidget"));
	OverheadWidget->SetupAttachment(GetMesh());
	OverheadWidget->SetWidgetSpace(EWidgetSpace::Screen);

	MaxHealth = 100.0f;
	Health = MaxHealth;

	IsSprinting = false;

	OriginSize = GetActorScale3D();
}

float AStudyCharacter::GetSpeed() const
{
	return NormalSpeed;
}

float AStudyCharacter::GetHealth() const
{
	return Health;
}


void AStudyCharacter::OnDeath()
{
	AStudyGameStateBase* StudyGameState = GetWorld() ? GetWorld()->GetGameState<AStudyGameStateBase>() : nullptr;
	if (StudyGameState)
	{
		StudyGameState->OnGameOver();
	}
}

void AStudyCharacter::UpdateOverheadHP()
{
	if (!OverheadWidget) return;

	UUserWidget* OverheadWidgetInstacne = OverheadWidget->GetUserWidgetObject();

	if (!OverheadWidgetInstacne) return;
	
	if(UTextBlock* HPText = Cast<UTextBlock>(OverheadWidgetInstacne->GetWidgetFromName(TEXT("OverHeadHp"))))
	{
		HPText->SetText(FText::FromString(FString::Printf(TEXT("%.0f / %.0f"), Health, MaxHealth)));
	}
}

void AStudyCharacter::AddHealth(float Amount)
{
	Health = FMath::Clamp(Health + Amount, 0.0f, MaxHealth);
	UE_LOG(LogTemp, Warning, TEXT("Health increased to %f"), Health);
	UpdateOverheadHP();
}

void AStudyCharacter::ResetSpeed()
{
	NormalSpeed = 600.0f;
	SprintSpeed = NormalSpeed * SprintSpeedMultiplier;
	GetCharacterMovement()->MaxWalkSpeed = IsSprinting ? SprintSpeed : NormalSpeed;
}

void AStudyCharacter::ChangeSpeed(float Amount)
{
	NormalSpeed = FMath::Clamp(NormalSpeed - Amount, 100.0f, 900.0f);
	SprintSpeed = NormalSpeed * SprintSpeedMultiplier;
	GetCharacterMovement()->MaxWalkSpeed = IsSprinting ? SprintSpeed : NormalSpeed;
}

void AStudyCharacter::ChangeSize(float Magnification)
{
	FVector CurrentSize = GetActorScale3D();
	FVector NewSize = CurrentSize * Magnification;
	SetActorScale3D(NewSize);
}

void AStudyCharacter::ResetSize()
{
	SetActorScale3D(OriginSize);
}

float AStudyCharacter::TakeDamage(float DamageAmount, FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCsuser)
{
	float ActualDamage = Super::ShouldTakeDamage(DamageAmount, DamageEvent, EventInstigator, DamageCsuser);

	Health = FMath::Clamp(Health - DamageAmount, 0.0f, MaxHealth);
	UE_LOG(LogTemp, Warning, TEXT("Health decreased to %f"), Health);

	UpdateOverheadHP();

	if (Health <= 0.0f)
	{
		OnDeath();
	}

	return ActualDamage;
}

void AStudyCharacter::BeginPlay()
{
	Super::BeginPlay();

	UpdateOverheadHP();
}

void AStudyCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	if (UEnhancedInputComponent* EnhancedInput = Cast<UEnhancedInputComponent>(PlayerInputComponent))
	{
		if (AStudyPlayerController* PlayerController = Cast<AStudyPlayerController>(GetController()))
		{
			if (PlayerController->MoveAction)
			{
				EnhancedInput->BindAction(
					PlayerController->MoveAction,
					ETriggerEvent::Triggered,
					this,
					&AStudyCharacter::Move
				);
			}

			if (PlayerController->JumpAction)
			{
				EnhancedInput->BindAction(
					PlayerController->JumpAction,
					ETriggerEvent::Triggered,
					this,
					&AStudyCharacter::StartJump
				);

				EnhancedInput->BindAction(
					PlayerController->JumpAction,
					ETriggerEvent::Completed,
					this,
					&AStudyCharacter::StopJump
				);
			}

			if (PlayerController->LookAction)
			{
				EnhancedInput->BindAction(
					PlayerController->LookAction,
					ETriggerEvent::Triggered,
					this,
					&AStudyCharacter::Look
				);
			}

			if (PlayerController->SprintAction)
			{
				EnhancedInput->BindAction(
					PlayerController->SprintAction,
					ETriggerEvent::Triggered,
					this,
					&AStudyCharacter::StartSprint
				);

				EnhancedInput->BindAction(
					PlayerController->SprintAction,
					ETriggerEvent::Completed,
					this,
					&AStudyCharacter::StopSprint
				);
			}

		}
	}
}

void AStudyCharacter::Move(const FInputActionValue& value)
{
	if (!Controller) return; // 컨트롤러 유효 파악

	const FVector2D MoveInput = value.Get<FVector2D>();

	if (!FMath::IsNearlyZero(MoveInput.X)) // 안전코드
	{
		AddMovementInput(GetActorForwardVector(), MoveInput.X); // 정면 방향으로 X만큼 이동
	}

	if (!FMath::IsNearlyZero(MoveInput.Y))
	{
		AddMovementInput(GetActorRightVector(), MoveInput.Y); // 오른쪽 방향으로 Y만큼 이동
	}
}

void AStudyCharacter::StartJump(const FInputActionValue& value)
{

	if (value.Get<bool>())
	{
		Jump();
	}
}

void AStudyCharacter::StopJump(const FInputActionValue& value)
{
	if (!value.Get<bool>())
	{
		StopJumping();
	}
}

void AStudyCharacter::Look(const FInputActionValue& value)
{

	FVector2D LookInput = value.Get<FVector2D>();

	AddControllerYawInput(LookInput.X);
	AddControllerPitchInput(LookInput.Y);
}

void AStudyCharacter::StartSprint(const FInputActionValue& value)
{
	if (GetCharacterMovement())
	{
		IsSprinting = true;
		GetCharacterMovement()->MaxWalkSpeed = SprintSpeed;
	}
}

void AStudyCharacter::StopSprint(const FInputActionValue& value)
{
	if (GetCharacterMovement())
	{
		IsSprinting = false;
		GetCharacterMovement()->MaxWalkSpeed = NormalSpeed;
	}
}

