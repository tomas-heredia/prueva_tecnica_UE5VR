// Fill out your copyright notice in the Description page of Project Settings.

#include "Components/InputComponent.h"
#include "EnhancedInputcomponent.h"
#include "EnhancedInputSubsystems.h"
#include "Telekinetic/UTelekineticComponent.h"

UUTelekineticComponent::UUTelekineticComponent()
{
	
	PrimaryComponentTick.bCanEverTick = true;

	
}



void UUTelekineticComponent::BeginPlay()
{
	Super::BeginPlay();
	OwnerPawn = Cast<APawn>(GetOwner());
	if (!OwnerPawn) return;
	
	PC = Cast<APlayerController>(OwnerPawn->GetController());
	if (!PC) return;
	

	if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PC->GetLocalPlayer()))
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("Conected"));

		Subsystem->AddMappingContext(MoveMappingContext, 0);
	}
	if (UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(PC->InputComponent))
	{
		EnhancedInputComponent->BindAction(IA_TGrab, ETriggerEvent::Triggered, this, &UUTelekineticComponent::TGrab);
	}
	
}



void UUTelekineticComponent::TGrab(const FInputActionValue& Value)
{
}

bool UUTelekineticComponent::GetTracerOriginAndDirection(FVector& OutOrigin, FVector& OutDirection) const
{
	
	if (!OwnerPawn or !PC) return false;



	FRotator CameraLocation;
	PC->GetPlayerViewPoint(OutOrigin,CameraLocation);
	OutDirection = CameraLocation.Vector();
	return true;
}


void UUTelekineticComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	
}

