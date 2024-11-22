// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/SplineComponent.h"
#include "MyActor.generated.h"

UCLASS()
class ANGELPORTV2_API AMyActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMyActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;	

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	USplineComponent* SplineComp;

	UFUNCTION(BlueprintCallable)
	void Test(FVector pos, float scale, bool ignorePrev, int32 num = 3)
	{
		
	}
	void Test(FVector pos, int num, double trouble, float something)
	{
		FTransform transform = SplineComp->GetTransformAtDistanceAlongSpline(1000.0f, ESplineCoordinateSpace::World, false);

	}
	


	//virtual void OnActorBeginOverlap();
	//virtual void OnActorEndOverlap();
	//virtual void OnActorHit();	

};
