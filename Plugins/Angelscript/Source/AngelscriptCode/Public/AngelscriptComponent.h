// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/ActorComponent.h"
#include "AngelscriptComponent.generated.h"

DECLARE_MULTICAST_DELEGATE(FBeginPlayComp);
DECLARE_MULTICAST_DELEGATE_OneParam(FTickComp, float);
DECLARE_MULTICAST_DELEGATE_TwoParams(FAsyncTickComp, float, float);
DECLARE_MULTICAST_DELEGATE_OneParam(FEndPlayComp, EEndPlayReason::Type);

UCLASS()
class ANGELSCRIPTCODE_API UAngelscriptComponent : public UActorComponent
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	UAngelscriptComponent();	

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;	

public:	
	// Called every frame
	virtual void ProcessEvent(UFunction* Function, void* Parms) override;

	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	virtual void ReceiveAsyncPhysicsTick(float DeltaSeconds, float SimSeconds);
	virtual void ReceiveEndPlay();		
};