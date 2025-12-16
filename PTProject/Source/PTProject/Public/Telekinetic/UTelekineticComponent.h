// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "InputActionValue.h"
#include "Components/ActorComponent.h"
#include "UTelekineticComponent.generated.h"

class UInputAction;
class UInputMappingContext;
class UMotionControllerComponent;
UENUM(BlueprintType)
enum class ETelekinesisState : uint8
{
	Idle,
	Pulling,
	Holding,
	Cooldown
};

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class PTPROJECT_API UUTelekineticComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UUTelekineticComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;
#pragma region Components

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	APawn* OwnerPawn;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	APlayerController* PC;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	ETelekinesisState CurrentState = ETelekinesisState::Idle;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input)
	UInputAction* IA_TGrab;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input)
	UInputAction* IA_ObjectGrab;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input)
	UInputMappingContext* MoveMappingContext;
#pragma endregion

#pragma region rayo
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Telekinetic|Trace")
	float TraceDistance = 1500.f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Telekinetic|Trace")
	TEnumAsByte<ECollisionChannel> TraceChannel = ECC_PhysicsBody;
	
	UPROPERTY(EditAnywhere, Category = "Telekinesis")
	EControllerHand PreferredHand = EControllerHand::Right;

	UPROPERTY(VisibleAnywhere)
	UMotionControllerComponent* HandMC;

	UPROPERTY(VisibleAnywhere)
	FHitResult CurrentHit;
	UPROPERTY(VisibleAnywhere)
	UPrimitiveComponent* TargetPhysicsComp;

	UPROPERTY(VisibleAnywhere)
	AActor* TargetActor;

#pragma endregion

#pragma region Pulling
	
	UPROPERTY(EditAnywhere, Category = "Telekinetic|Pulling")
	float TargetPullSpeed = 10.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Telekinetic|Pulling")
	float PullForce = 800.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Telekinetic|Pulling")
	float HoldDistance = 5.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Telekinetic|Pulling")
	float MaxPullDistance = 1500.f;
#pragma endregion

#pragma region Holding
	UPROPERTY(VisibleAnywhere)
	float GripPressThreshold = 0.6f;
	UPROPERTY(VisibleAnywhere)
	float GripReleaseThreshold = 0.2f;
	UPROPERTY(VisibleAnywhere)
	int32 HoldCount = 0;
#pragma endregion

#pragma region Cooldown
	bool holdObject = false;

	UPROPERTY(EditAnywhere)
	FTimerHandle CooldownFloating;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Telekinetic|Cooldown")
	float CooldownFloatingDuration = 2.f;

	UPROPERTY(EditAnywhere)
	FTimerHandle Cooldown;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Telekinetic|Cooldown")
	float CooldownDuration = 2.f;

#pragma endregion
	
	void TGrab(const FInputActionValue& Value);
	void TRelece(const FInputActionValue& Value);
	void TObjectGrab(const FInputActionValue& Value);
	void TObjectReleace(const FInputActionValue& Value);
	
	bool GetTracerOriginAndDirection(FHitResult& Hit) const;
	bool FindTelekineticTarget() const;

	void SetState(ETelekinesisState NewState);
	void EnterState(ETelekinesisState State);
	void UpdateState(float DeltaTime);
	void ExitState(ETelekinesisState State);

	void UpdatePullingState(float DeltaTime);

	void CooldownFloatingStart();
	void OnCooldownFloatingFinished();
	
	void cooldown();
	void endCooldown();
public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
