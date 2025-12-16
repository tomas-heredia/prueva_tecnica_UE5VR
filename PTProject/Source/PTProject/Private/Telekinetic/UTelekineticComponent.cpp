// Fill out your copyright notice in the Description page of Project Settings.
#include "MotionControllerComponent.h"

#include "Components/InputComponent.h"
#include "EnhancedInputcomponent.h"
#include "EnhancedInputSubsystems.h"

#include "DrawDebugHelpers.h"

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
		EnhancedInputComponent->BindAction(IA_TGrab, ETriggerEvent::Completed, this, &UUTelekineticComponent::TRelece);
		EnhancedInputComponent->BindAction(IA_ObjectGrab, ETriggerEvent::Triggered, this, &UUTelekineticComponent::TObjectGrab);
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
	if(GetTracerOriginAndDirection(CurrentHit) and CurrentState == ETelekinesisState::Idle)
	{
		UPrimitiveComponent* HitComp = CurrentHit.GetComponent();

		if (!HitComp || !HitComp->IsSimulatingPhysics()) return;

		TargetActor = CurrentHit.GetActor();

		TargetPhysicsComp = CurrentHit.GetComponent();
		SetState(ETelekinesisState::Pulling);
	}

	
}

void UUTelekineticComponent::TRelece(const FInputActionValue& Value)
{
	if (CurrentState == ETelekinesisState::Pulling)
	{
		
		TargetActor = nullptr;
		TargetPhysicsComp = nullptr;
		SetState(ETelekinesisState::Idle);
	}
	if (CurrentState == ETelekinesisState::Holding)
	{
		
		SetState(ETelekinesisState::Cooldown);
	}
}

void UUTelekineticComponent::TObjectGrab(const FInputActionValue& Value)
{
	const float GripValue = Value.Get<float>();
	GEngine->AddOnScreenDebugMessage(-1, 0.f, FColor::Yellow, FString::Printf(TEXT("Grip Value: %f"), GripValue));
	if (!holdObject)
	{
		holdObject = true;
		return;
	}
	else
	{
		if (CurrentState == ETelekinesisState::Holding and (GripValue < 0.1f))
		{

			SetState(ETelekinesisState::Cooldown);
		}
	}
	
}




bool UUTelekineticComponent::GetTracerOriginAndDirection(FHitResult& Hit) const
{
	
	if (!HandMC) return false;

	FVector Start = HandMC->GetComponentLocation();
	FVector End = Start + HandMC->GetForwardVector() * TraceDistance;

	FCollisionQueryParams Params;
	Params.AddIgnoredActor(GetOwner());

	const bool bHit = GetWorld()->LineTraceSingleByChannel(
		Hit,
		Start,
		End,
		ECC_Visibility,
		Params
	);

#if ENABLE_DRAW_DEBUG
	// Línea del trace
	DrawDebugLine(GetWorld(),Start,bHit ? Hit.ImpactPoint : End,bHit ? FColor::Red : FColor::Green,false,0.05f,0,1.5f);

	// Punto de impacto
	if (bHit)
	{
		DrawDebugSphere(
			GetWorld(),
			Hit.ImpactPoint,
			8.f,
			12,
			FColor::Red,
			false,
			0.05f
		);
	}
#endif

	return bHit;

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
		
		cooldown();
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
			TargetPhysicsComp->SetSimulatePhysics(false);
			TargetPhysicsComp->SetEnableGravity(true);
			TargetPhysicsComp->SetPhysicsLinearVelocity(FVector::ZeroVector);
		}
		break;

	case ETelekinesisState::Holding:
		
		holdObject = false;
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
	if (!TargetPhysicsComp || !HandMC) {
		TargetPhysicsComp = nullptr;
		TargetActor = nullptr;
		SetState(ETelekinesisState::Idle);
		return;
	}
	
	FVector HandLocation = HandMC->GetComponentLocation();
	FVector ObjLocation = TargetPhysicsComp->GetComponentLocation();

	FVector NewLocation = FMath::VInterpTo(ObjLocation, HandLocation, DeltaTime, TargetPullSpeed);
	
	TargetPhysicsComp->SetWorldLocation(NewLocation);
	if (FVector::Dist(NewLocation, HandLocation) <= HoldDistance)
	{
		CooldownFloatingStart();
		SetState(ETelekinesisState::Holding);
	}

}

void UUTelekineticComponent::CooldownFloatingStart()
{
	if (!GetWorld()) return;

	GetWorld()->GetTimerManager().SetTimer(CooldownFloating, this, &UUTelekineticComponent::OnCooldownFloatingFinished, CooldownFloatingDuration, false);
}

void UUTelekineticComponent::OnCooldownFloatingFinished()
{
	if (!TargetPhysicsComp) return;
	
	if (!holdObject)
	{
		TargetPhysicsComp->SetSimulatePhysics(true);
		TargetPhysicsComp->SetEnableGravity(true);
		SetState(ETelekinesisState::Idle);
	}
	}

void UUTelekineticComponent::cooldown()
{
	GetWorld()->GetTimerManager().SetTimer(Cooldown, this, &UUTelekineticComponent::endCooldown, CooldownDuration, false);

}

void UUTelekineticComponent::endCooldown()
{
	SetState(ETelekinesisState::Idle);
}



void UUTelekineticComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	UpdateState(DeltaTime);
	
}

