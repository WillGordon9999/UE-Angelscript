#pragma once
#include "GameFramework/Actor.h"
#include "Components/SceneComponent.h"
#include "AngelscriptManager.h"
#include "AngelscriptComponentLibrary.generated.h"

//UCLASS(Meta = (ScriptMixin = "USceneComponent"))
UCLASS(Meta = ())
class UAngelscriptComponentLibrary : public UObject
{
	GENERATED_BODY()

public:

	//UFUNCTION(ScriptCallable, Meta = (ScriptTrivial))
	UFUNCTION(BlueprintCallable, Meta = ())
	static FVector GetRelativeLocation(const USceneComponent* Component)
	{
		return Component->GetRelativeLocation();
	}

	//UFUNCTION(ScriptCallable, Meta = (ScriptTrivial))
	UFUNCTION(BlueprintCallable, Meta = ())
	static FRotator GetRelativeRotation(const USceneComponent* Component)
	{
		return Component->GetRelativeRotation();
	}

	//UFUNCTION(ScriptCallable, Meta = (ScriptTrivial))
	UFUNCTION(BlueprintCallable, Meta = ())
	static FVector GetRelativeScale3D(const USceneComponent* Component)
	{
		return Component->GetRelativeScale3D();
	}

	//UFUNCTION(ScriptCallable)
	UFUNCTION(BlueprintCallable, Meta = ())
	static void SetRelativeLocation(USceneComponent* Component, const FVector& NewLocation)
	{
		Component->SetRelativeLocation(NewLocation);
	}

	//UFUNCTION(ScriptCallable)
	UFUNCTION(BlueprintCallable, Meta = ())
	static void SetRelativeRotation(USceneComponent* Component, const FRotator& NewRotation)
	{
		Component->SetRelativeRotation(NewRotation);
	}

	//UFUNCTION(ScriptCallable, Meta = (ScriptName = "SetRelativeRotation", NotAngelscriptProperty))
	UFUNCTION(BlueprintCallable, Meta = (ScriptName = "SetRelativeRotation"))
	static void SetRelativeRotationQuat(USceneComponent* Component, const FQuat& NewRotation)
	{
		Component->SetRelativeRotation(NewRotation);
	}

	//UFUNCTION(ScriptCallable)
	UFUNCTION(BlueprintCallable, Meta = ())
	static void SetRelativeTransform(USceneComponent* Component, const FTransform& NewTransform)
	{
		Component->SetRelativeTransform(NewTransform);
	}

	//UFUNCTION(ScriptCallable)
	UFUNCTION(BlueprintCallable, Meta = ())
	static void SetRelativeLocationAndRotation(USceneComponent* Component, const FVector& NewLocation, const FRotator& NewRotation)
	{
		Component->SetRelativeLocationAndRotation(NewLocation, NewRotation);
	}

	//UFUNCTION(ScriptCallable, Meta = (ScriptName = "SetRelativeLocationAndRotation"))
	UFUNCTION(BlueprintCallable, Meta = (ScriptName = "SetRelativeLocationAndRotation"))
	static void SetRelativeLocationAndRotationQuat(USceneComponent* Component, const FVector& NewLocation, const FQuat& NewRotation)
	{
		Component->SetRelativeLocationAndRotation(NewLocation, NewRotation);
	}

	//UFUNCTION(ScriptCallable, Meta = (ScriptTrivial))
	UFUNCTION(BlueprintCallable, Meta = ())
	static FQuat GetSocketQuaternion(USceneComponent* Component, const FName& SocketName)
	{
		return Component->GetSocketQuaternion(SocketName);
	}

	//UFUNCTION(ScriptCallable, Meta = (ScriptTrivial))
	UFUNCTION(BlueprintCallable, Meta = ())
	static void SetComponentQuat(USceneComponent* Component, const FQuat& NewRotation)
	{
		Component->SetWorldRotation(NewRotation);
	}

	//UFUNCTION(ScriptCallable, Meta = (ScriptTrivial))
	UFUNCTION(BlueprintCallable, Meta = ())
	static FQuat GetComponentQuat(const USceneComponent* Component)
	{
		return Component->GetComponentQuat();
	}

	//UFUNCTION(ScriptCallable)
	UFUNCTION(BlueprintCallable, Meta = ())
	static void AddRelativeLocation(USceneComponent* Component, const FVector& DeltaLocation)
	{
		Component->AddRelativeLocation(DeltaLocation);
	}

	//UFUNCTION(ScriptCallable)
	UFUNCTION(BlueprintCallable, Meta = ())
	static void AddRelativeRotation(USceneComponent* Component, const FRotator& DeltaRotation)
	{
		Component->AddRelativeRotation(DeltaRotation);
	}

	//UFUNCTION(ScriptCallable, Meta = (ScriptName = "AddRelativeRotation"))
	UFUNCTION(BlueprintCallable, Meta = (ScriptName = "AddRelativeRotation"))
	static void AddRelativeRotationQuat(USceneComponent* Component, const FQuat& DeltaRotation)
	{
		Component->AddRelativeRotation(DeltaRotation);
	}

	//UFUNCTION(ScriptCallable)
	UFUNCTION(BlueprintCallable, Meta = ())
	static void AddLocalOffset(USceneComponent* Component, const FVector& DeltaLocation)
	{
		Component->AddLocalOffset(DeltaLocation);
	}

	//UFUNCTION(ScriptCallable)
	UFUNCTION(BlueprintCallable, Meta = ())
	static void AddLocalRotation(USceneComponent* Component, const FRotator& DeltaRotation)
	{
		Component->AddLocalRotation(DeltaRotation);
	}

	//UFUNCTION(ScriptCallable, Meta = (ScriptName = "AddLocalRotation"))
	UFUNCTION(BlueprintCallable, Meta = (ScriptName = "AddLocalRotation"))
	static void AddLocalRotationQuat(USceneComponent* Component, const FQuat& DeltaRotation)
	{
		Component->AddLocalRotation(DeltaRotation);
	}

	//UFUNCTION(ScriptCallable)
	UFUNCTION(BlueprintCallable, Meta = ())
	static void AddLocalTransform(USceneComponent* Component, const FTransform& DeltaTransform)
	{
		Component->AddLocalTransform(DeltaTransform);
	}

	//UFUNCTION(ScriptCallable)
	UFUNCTION(BlueprintCallable, Meta = ())
	static void SetWorldLocation(USceneComponent* Component, const FVector& NewLocation)
	{
		Component->SetWorldLocation(NewLocation);
	}

	//UFUNCTION(ScriptCallable)
	UFUNCTION(BlueprintCallable, Meta = ())
	static void SetWorldRotation(USceneComponent* Component, const FRotator& NewRotation)
	{
		Component->SetWorldRotation(NewRotation);
	}

	//UFUNCTION(ScriptCallable, Meta = (ScriptName = "SetWorldRotation", NotAngelscriptProperty))
	UFUNCTION(BlueprintCallable, Meta = (ScriptName = "SetWorldRotation"))
	static void SetWorldRotationQuat(USceneComponent* Component, const FQuat& NewRotation)
	{
		Component->SetWorldRotation(NewRotation);
	}

	//UFUNCTION(ScriptCallable)
	UFUNCTION(BlueprintCallable, Meta = ())
	static void SetWorldTransform(USceneComponent* Component, const FTransform& NewTransform)
	{
		Component->SetWorldTransform(NewTransform);
	}

	//UFUNCTION(ScriptCallable)
	UFUNCTION(BlueprintCallable, Meta = ())
	static void SetWorldLocationAndRotation(USceneComponent* Component, const FVector& NewLocation, const FRotator& NewRotation)
	{
		Component->SetWorldLocationAndRotation(NewLocation, NewRotation);
	}

	//UFUNCTION(ScriptCallable, Meta = (ScriptName = "SetWorldLocationAndRotation"))
	UFUNCTION(BlueprintCallable, Meta = (ScriptName = "SetWorldLocationAndRotation"))	
	static void SetWorldLocationAndRotationQuat(USceneComponent* Component, const FVector& NewLocation, const FQuat& NewRotation)
	{
		Component->SetWorldLocationAndRotation(NewLocation, NewRotation);
	}

	//UFUNCTION(ScriptCallable)
	UFUNCTION(BlueprintCallable, Meta = ())
	static void AddWorldOffset(USceneComponent* Component, const FVector& DeltaLocation)
	{
		Component->AddWorldOffset(DeltaLocation);
	}

	//UFUNCTION(ScriptCallable)
	UFUNCTION(BlueprintCallable, Meta = ())
	static void AddWorldRotation(USceneComponent* Component, const FRotator& DeltaRotation)
	{
		Component->AddWorldRotation(DeltaRotation);
	}

	//UFUNCTION(ScriptCallable, Meta = (ScriptName = "AddWorldRotation"))
	UFUNCTION(BlueprintCallable, Meta = (ScriptName = "AddWorldRotation"))
	static void AddWorldRotationQuat(USceneComponent* Component, const FQuat& DeltaRotation)
	{
		Component->AddWorldRotation(DeltaRotation);
	}

	//UFUNCTION(ScriptCallable)
	UFUNCTION(BlueprintCallable, Meta = ())
	static void AddWorldTransform(USceneComponent* Component, const FTransform& DeltaTransform)
	{
		Component->AddWorldTransform(DeltaTransform);
	}

	//UFUNCTION(ScriptCallable)
	UFUNCTION(BlueprintCallable, Meta = ())
	static void AttachToComponent(USceneComponent* Component, USceneComponent* Parent, const FName& SocketName = NAME_None, EAttachmentRule AttachmentRule = EAttachmentRule::SnapToTarget)
	{
#if WITH_EDITOR
		FUObjectThreadContext& ThreadContext = FUObjectThreadContext::Get();
		if (ThreadContext.IsInConstructor)
		{
			FAngelscriptManager::Throw("Calling AttachToComponent in a default statement is invalid. Please use the 'Attach =' and 'AttachSocket = ' UPROPERTY specifiers instead.");
			return;
		}
#endif
		Component->K2_AttachToComponent(Parent, SocketName, AttachmentRule, AttachmentRule, EAttachmentRule::KeepWorld, false);
	}

	//UFUNCTION(ScriptCallable, Meta = (ScriptTrivial))
	UFUNCTION(BlueprintCallable, Meta = ())
	static void SetbVisualizeComponent(USceneComponent* Component, bool bVisualize)
	{
#if WITH_EDITORONLY_DATA
		Component->bVisualizeComponent = bVisualize;
#endif
	}

	//UFUNCTION(ScriptCallable, Meta = (ScriptTrivial))
	UFUNCTION(BlueprintCallable, Meta = ())
	static bool IsAttachedTo(const USceneComponent* Component, const USceneComponent* CheckComponent)
	{
		return Component->IsAttachedTo(CheckComponent);
	}

	//UFUNCTION(ScriptCallable, Meta = (ScriptName = "IsAttachedTo", ScriptTrivial))
	UFUNCTION(BlueprintCallable, Meta = (ScriptName = "IsAttachedTo"))
	static bool IsAttachedTo_Actor(const USceneComponent* Component, const AActor* CheckActor)
	{
		const USceneComponent* CheckComp = Component;
		while(CheckComp != nullptr)
		{
			if (CheckComp->GetOwner() == CheckActor)
				return true;
			CheckComp = CheckComp->GetAttachParent();
		}

		return false;
	}

	//UFUNCTION(ScriptCallable, Meta = (ScriptTrivial))
	UFUNCTION(BlueprintCallable, Meta = ())
	static FBoxSphereBounds GetBounds(const USceneComponent* Component)
	{
		return Component->Bounds;
	}

	//UFUNCTION(ScriptCallable, Meta = (ScriptTrivial, DeprecatedFunction, DeprecationMessage = "Get Bounds.Origin instead"))
	UFUNCTION(BlueprintCallable, Meta = (DeprecatedFunction, DeprecationMessage = "Get Bounds.Origin instead"))
	static FVector GetShapeCenter(const USceneComponent* Component)
	{
		return Component->Bounds.Origin;
	}
};