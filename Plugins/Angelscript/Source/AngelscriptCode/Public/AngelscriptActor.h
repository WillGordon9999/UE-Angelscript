// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AngelscriptActor.generated.h"

DECLARE_MULTICAST_DELEGATE(FBeginPlay);
DECLARE_MULTICAST_DELEGATE_OneParam(FTick, float);
DECLARE_MULTICAST_DELEGATE_TwoParams(FAsyncTick, float, float);

DECLARE_MULTICAST_DELEGATE_OneParam(FOnActorClicked, FKey);
DECLARE_MULTICAST_DELEGATE_OneParam(FOnActorReleased, FKey);

DECLARE_MULTICAST_DELEGATE_OneParam(FOnActorTouchBegin, ETouchIndex::Type);
DECLARE_MULTICAST_DELEGATE_OneParam(FOnActorTouchEnd, ETouchIndex::Type);
DECLARE_MULTICAST_DELEGATE_OneParam(FOnActorTouchEnter, ETouchIndex::Type);
DECLARE_MULTICAST_DELEGATE_OneParam(FOnActorTouchLeave, ETouchIndex::Type);

DECLARE_MULTICAST_DELEGATE(FOnActorBeginCursorOver);
DECLARE_MULTICAST_DELEGATE(FOnActorEndCursorOver);

DECLARE_MULTICAST_DELEGATE(FDestroyed);
DECLARE_MULTICAST_DELEGATE_OneParam(FEndPlay, EEndPlayReason::Type);
DECLARE_MULTICAST_DELEGATE(FOnReset);

DECLARE_MULTICAST_DELEGATE_EightParams(FOnHit, TObjectPtr<UPrimitiveComponent>, TObjectPtr<AActor>, TObjectPtr<UPrimitiveComponent>, bool, FVector, FVector, FVector, FHitResult);
//DECLARE_MULTICAST_DELEGATE_FourParams(FAnyDamage, float, TObjectPtr<UDamageType>, TObjectPtr<AController>, TObjectPtr<AActor>);
DECLARE_MULTICAST_DELEGATE_FourParams(FAnyDamage, float, const UDamageType*, AController*, AActor*);
DECLARE_MULTICAST_DELEGATE_SixParams(FRadialDamage, float, TObjectPtr<UDamageType>, FVector, FHitResult, TObjectPtr<AController>, TObjectPtr<AActor>);
typedef TMulticastDelegate<void(float, TObjectPtr<UDamageType>, FVector, FVector, TObjectPtr<UPrimitiveComponent>, FName, FVector, TObjectPtr<AController>, TObjectPtr<AActor>, FHitResult)> FPointDamage;

DECLARE_MULTICAST_DELEGATE_OneParam(FActorBeginOverlap, TObjectPtr<AActor>);
DECLARE_MULTICAST_DELEGATE_OneParam(FActorEndOverlap, TObjectPtr<AActor>);

DECLARE_MULTICAST_DELEGATE_OneParam(FOnBecomeViewTarget, TObjectPtr<APlayerController>);
DECLARE_MULTICAST_DELEGATE_OneParam(FOnEndViewTarget, TObjectPtr<APlayerController>);

UCLASS()
class ANGELSCRIPTCODE_API AAngelscriptActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AAngelscriptActor();
	
	FBeginPlay OnBeginPlayFunc;	
	FTick OnTickFunc;
	FAsyncTick OnAsyncTickFunc;

	FOnActorClicked OnActorClickedFunc;
	FOnActorReleased OnActorReleasedFunc;

	FOnActorTouchBegin OnActorTouchBeginFunc;
	FOnActorTouchEnd OnActorTouchEndFunc;
	FOnActorTouchEnter OnActorTouchEnterFunc;
	FOnActorTouchLeave OnActorTouchLeaveFunc;

	FOnActorBeginCursorOver OnActorBeginCursorOverFunc;
	FOnActorEndCursorOver OnActorEndCursorOverFunc;

	FDestroyed OnDestroyedFunc;
	FEndPlay OnEndPlayFunc;
	FOnReset OnResetFunc;

	FOnHit OnHitFunc;
	FAnyDamage OnAnyDamageFunc;
	FRadialDamage OnRadialDamageFunc;
	FPointDamage OnPointDamageFunc;

	FActorBeginOverlap OnActorBeginOverlapFunc;
	FActorEndOverlap OnActorEndOverlapFunc;

	FOnBecomeViewTarget OnBecomeViewTargetFunc;
	FOnEndViewTarget OnEndViewTargetFunc;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;	

public:	
	virtual void ProcessEvent(UFunction* Function, void* Parameters) override;

	// Called every frame
	virtual void Tick(float DeltaTime) override;
	virtual void AsyncPhysicsTickActor(float DeltaTime, float SimTime) override;
	
	virtual void OnActorBeginOverlap(TObjectPtr<AActor> OtherActor);
	virtual void OnActorEndOverlap(TObjectPtr<AActor> OtherActor);
	//virtual void OnActorHit(TObjectPtr<UPrimitiveComponent> MyComp, TObjectPtr<AActor> Other, TObjectPtr<UPrimitiveComponent> OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, FHitResult Hit);
	//virtual void OnActorHit()
	
	//virtual void ReceiveAnyDamage(float Damage, const class UDamageType* DamageType, class AController* InstigatedBy, AActor* DamageCauser);
	virtual void ReceivePointDamage(float Damage, const class UDamageType* DamageType, FVector HitLocation, FVector HitNormal, class UPrimitiveComponent* HitComponent, FName BoneName, FVector ShotFromDirection, class AController* InstigatedBy, AActor* DamageCauser, const FHitResult& HitInfo);
	virtual void ReceiveRadialDamage(float DamageReceived, const class UDamageType* DamageType, FVector Origin, const struct FHitResult& HitInfo, class AController* InstigatedBy, AActor* DamageCauser);

	virtual void ReceiveEndPlay(EEndPlayReason::Type EndPlayReason);
	virtual void ReceiveDestroyed();
	virtual void Reset() override;
	
	virtual void BecomeViewTarget(APlayerController* PC) override;
	virtual void EndViewTarget(APlayerController* PC) override;	
};