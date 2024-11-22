#pragma once
#include "Engine/EngineTypes.h"
#include "GameFramework/Actor.h"
#include "Components/PrimitiveComponent.h"
#include "AngelscriptManager.h"
#include "AngelscriptHitResultLibrary.generated.h"

//UCLASS(Meta = (ScriptMixin = "FHitResult"))
UCLASS(Meta = ())
class UAngelscriptHitResultLibrary : public UObject
{
	GENERATED_BODY()

public:

	//UFUNCTION(ScriptCallable, Meta = (ScriptTrivial))
	UFUNCTION(BlueprintCallable, Meta = ())
	static void SetComponent(FHitResult& HitResult, UPrimitiveComponent* Component)
	{
		HitResult.Component = Component;
	}

	//UFUNCTION(ScriptCallable, Meta = (ScriptTrivial))
	UFUNCTION(BlueprintCallable, Meta = ())
	static void SetActor(FHitResult& HitResult, AActor* Actor)
	{
		HitResult.HitObjectHandle = FActorInstanceHandle(Actor);
	}

	//UFUNCTION(ScriptCallable, Meta = (ScriptTrivial))
	UFUNCTION(BlueprintCallable, Meta = ())
	static void Reset(FHitResult& HitResult)
	{
		HitResult.Reset();
	}

	//UFUNCTION(ScriptCallable, Meta = (ScriptTrivial))
	UFUNCTION(BlueprintCallable, Meta = ())
	static UPrimitiveComponent* GetComponent(const FHitResult& HitResult)
	{
		return HitResult.GetComponent();
	}

	//UFUNCTION(ScriptCallable, Meta = (ScriptTrivial))
	UFUNCTION(BlueprintCallable, Meta = ())
	static AActor* GetActor(const FHitResult& HitResult)
	{
		return HitResult.GetActor();
	}

	//UFUNCTION(ScriptCallable, Meta = (ScriptTrivial))
	UFUNCTION(BlueprintCallable, Meta = ())
	static UPhysicalMaterial* GetPhysMaterial(const FHitResult& HitResult)
	{
		return HitResult.PhysMaterial.Get();
	}

	//UFUNCTION(ScriptCallable, Meta = (ScriptTrivial))
	UFUNCTION(BlueprintCallable, Meta = ())
	static bool GetbBlockingHit(const FHitResult& HitResult)
	{
		return HitResult.bBlockingHit;
	}

	//UFUNCTION(ScriptCallable, Meta = (ScriptTrivial, DeprecatedFunction, DeprecationMessage = "Assign bBlockingHit instead"))
	UFUNCTION(BlueprintCallable, Meta = (DeprecatedFunction, DeprecationMessage = "Assign bBlockingHit instead"))
	static void SetBlockingHit(FHitResult& HitResult, bool bIsBlocking)
	{
		HitResult.bBlockingHit = bIsBlocking;
	}

	//UFUNCTION(ScriptCallable, Meta = (ScriptTrivial))
	UFUNCTION(BlueprintCallable, Meta = ())
	static void SetbBlockingHit(FHitResult& HitResult, bool bIsBlocking)
	{
		HitResult.bBlockingHit = bIsBlocking;
	}

	//UFUNCTION(ScriptCallable, Meta = (ScriptTrivial))
	UFUNCTION(BlueprintCallable, Meta = ())
	static bool GetbStartPenetrating(const FHitResult& HitResult)
	{
		return HitResult.bStartPenetrating;
	}

	//UFUNCTION(ScriptCallable, Meta = (ScriptTrivial))
	UFUNCTION(BlueprintCallable, Meta = ())
	static void SetbStartPenetrating(FHitResult& HitResult, bool bStartPenetrating)
	{
		HitResult.bStartPenetrating = bStartPenetrating;
	}
};
