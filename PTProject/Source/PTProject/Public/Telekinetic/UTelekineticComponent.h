// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "InputActionValue.h"
#include "Components/ActorComponent.h"
#include "UTelekineticComponent.generated.h"

class UInputAction;
class UInputMappingContext;
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
	ETelekinesisState CurrentState = ETelekinesisState::Idle;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input)
	UInputAction* IA_TGrab;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input)
	UInputMappingContext* MoveMappingContext;
#pragma endregion

#pragma region rayo
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Telekinetic|Trace")
	float TraceDistance = 1500.f;


#pragma endregion
	void TGrab(const FInputActionValue& Value);

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
