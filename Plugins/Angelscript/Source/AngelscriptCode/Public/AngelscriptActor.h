// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AngelscriptActor.generated.h"

UCLASS()
class ANGELSCRIPTCODE_API AAngelscriptActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AAngelscriptActor();
	
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