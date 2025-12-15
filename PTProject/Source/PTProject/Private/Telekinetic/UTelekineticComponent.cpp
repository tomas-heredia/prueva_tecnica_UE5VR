// Fill out your copyright notice in the Description page of Project Settings.
#include "MotionControllerComponent.h"

#include "Components/InputComponent.h"
#include "EnhancedInputcomponent.h"
#include "EnhancedInputSubsystems.h"

#include "Kismet/KismetSystemLibrary.h"
#include "Telekinetic/UTelekineticComponent.h"

UUTelekineticComponent::UUTelekineticComponent()
{
	
	PrimaryComponentTick.bCanEverTick = true;

	
}



void UUTelekineticComponent::BeginPlay()
{
	Super::BeginPlay();
	CurrentState = ETelekinesisState::Idle;
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
		EnhancedInputComponent->BindAction(IA_TGrab, ETriggerEvent::Started, this, &UUTelekineticComponent::TGrab);
	}
	
	TArray<UMotionControllerComponent*> MotionControllers;
	OwnerPawn->GetComponents<UMotionControllerComponent>(MotionControllers);


	for (UMotionControllerComponent* MC : MotionControllers)
	{
		if (MC && MC->GetTrackingSource() == PreferredHand)
		{
			HandMC = MC;
			                
		}
	}
}



void UUTelekineticComponent::TGrab(const FInputActionValue& Value)
{
	if(GetTracerOriginAndDirection(CurrentHit))
	{
		UPrimitiveComponent* HitComp = CurrentHit.GetComponent();

		if (!HitComp || !HitComp->IsSimulatingPhysics()) return;

		TargetActor = CurrentHit.GetActor();
		TargetPhysicsComp = CurrentHit.GetComponent();
		SetState(ETelekinesisState::Pulling);
	}

	
}




bool UUTelekineticComponent::GetTracerOriginAndDirection(FHitResult& Hit) const
{
	
	if (!HandMC) return false;

	FVector Start = HandMC->GetComponentLocation();
	FVector End = Start + HandMC->GetForwardVector() * TraceDistance;

	FCollisionQueryParams Params;
	Params.AddIgnoredActor(GetOwner());

	return GetWorld()->LineTraceSingleByChannel(Hit,Start,End,ECC_Visibility,Params);
}

bool UUTelekineticComponent::FindTelekineticTarget() const
{
	return false;
}

void UUTelekineticComponent::SetState(ETelekinesisState NewState)
{
	if (CurrentState == NewState)
		return; 

	ExitState(CurrentState);
	CurrentState = NewState;
	EnterState(CurrentState);
}

void UUTelekineticComponent::EnterState(ETelekinesisState State)
{
	switch (State)
	{
	case ETelekinesisState::Pulling:
		if (!TargetPhysicsComp)
		{
			
			SetState(ETelekinesisState::Idle);
			return;
		}

		
		TargetPhysicsComp->SetSimulatePhysics(true);
		TargetPhysicsComp->WakeAllRigidBodies();
		
		TargetPhysicsComp->SetPhysicsLinearVelocity(FVector::ZeroVector);
		break;

	case ETelekinesisState::Holding:
		
		break;

	case ETelekinesisState::Cooldown:
		
		break;

	default:
		break;
	}
}

void UUTelekineticComponent::ExitState(ETelekinesisState State)
{
	switch (CurrentState)
	{
	case ETelekinesisState::Pulling:
		if (TargetPhysicsComp)
		{
			TargetPhysicsComp->SetEnableGravity(true);
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("sale"));
			TargetPhysicsComp->SetPhysicsLinearVelocity(FVector::ZeroVector);
		}
		break;

	case ETelekinesisState::Holding:
		
		break;

	default:
		break;
	}
}



void UUTelekineticComponent::UpdateState(float DeltaTime) {
	switch (CurrentState)
	{
	case ETelekinesisState::Pulling:
		UpdatePullingState(DeltaTime);
		break;

	case ETelekinesisState::Holding:
		
		break;

	default:
		break;
	}
}

void UUTelekineticComponent::UpdatePullingState(float DeltaTime)
{
	if (!TargetPhysicsComp || !HandMC) return;

	FVector HandLocation = HandMC->GetComponentLocation();
	FVector ObjLocation = TargetPhysicsComp->GetComponentLocation();

	FVector ToHand = HandLocation - ObjLocation;
	float Distance = ToHand.Size();


	if (Distance <= HoldDistance)
	{
		SetState(ETelekinesisState::Holding);
		return;
	}

	FVector Direction = ToHand / Distance;
	float ForceScale = FMath::Clamp(Distance / MaxPullDistance, 0.3f, 1.0f);

	const FVector Gravity = FVector(0, 0, GetWorld()->GetGravityZ());
	TargetPhysicsComp->AddForce(-Gravity * TargetPhysicsComp->GetMass());

	TargetPhysicsComp->AddForceAtLocation(
		Direction * PullForce * ForceScale * TargetPhysicsComp->GetMass(),TargetPhysicsComp->GetCenterOfMass());
}

void UUTelekineticComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	UpdateState(DeltaTime);
	
}

