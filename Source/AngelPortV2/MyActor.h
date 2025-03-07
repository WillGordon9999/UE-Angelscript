// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/SplineComponent.h"
#include "AngelscriptBinds.h"
#include "Engine/StaticMesh.h"
#include "MyActor.generated.h"

enum class EPerQualityLevels : uint8;

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

	//UFUNCTION(BlueprintCallable)	
	//template<int32>
	void Test(FVector pos, float scale, bool ignorePrev, int32 num = 3)
	{
		//FAngelscriptBinds::AddFunctionEntry(UStaticMesh::StaticClass(), "GetMinLODForQualityLevels", { ERASE_METHOD_PTR(UStaticMesh, GetMinLODForQualityLevels, (TMap<EPerQualityLevels, int32>&,  int32&) const, ERASE_ARGUMENT_PACK(void)) });
		//TPair<FGenericFuncPtr, ASAutoCaller::FunctionCaller> pair = { ERASE_METHOD_PTR(UStaticMesh, GetMinLODForQualityLevels, (TMap<EPerQualityLevels, int32>&,  int32&) const, ERASE_ARGUMENT_PACK(void)) };
		//UStaticMesh* Mesh = nullptr;
		//TMap<EPerQualityLevels, int32> map;
		//int32 num = 2;
		//Mesh->GetMinLODForQualityLevels(map, num);		
	}
	void Test(FVector pos, int num, double trouble, float something)
	{
		FTransform transform = SplineComp->GetTransformAtDistanceAlongSpline(1000.0f, ESplineCoordinateSpace::World, false);

	}
	


	//virtual void OnActorBeginOverlap();
	//virtual void OnActorEndOverlap();
	//virtual void OnActorHit();	

};
