#pragma once
#include "GameFramework/Actor.h"
#include "AngelscriptActorLibrary.generated.h"

//UCLASS(Meta = (ScriptMixin = "AActor"))
UCLASS()
class UAngelscriptActorLibrary : public UObject
{
	GENERATED_BODY()

public:

	//UFUNCTION(ScriptCallable)
	UFUNCTION()
	static void SetActorRelativeLocation(AActor* Actor, const FVector& NewRelativeLocation)
	{
		Actor->SetActorRelativeLocation(NewRelativeLocation);
	}

	//UFUNCTION(ScriptCallable, Meta = (ScriptTrivial))
	UFUNCTION()
	static FVector GetActorRelativeLocation(const AActor* Actor)
	{
		if (auto* RootComp = Actor->GetRootComponent())
			return RootComp->GetRelativeLocation();
		return FVector::ZeroVector;
	}

	//UFUNCTION(ScriptCallable)
	UFUNCTION()
	static void SetActorRelativeRotation(AActor* Actor, const FRotator& NewRelativeRotation)
	{
		Actor->SetActorRelativeRotation(NewRelativeRotation);
	}

	//UFUNCTION(ScriptCallable, Meta = (ScriptName = "SetActorRelativeRotation", NotAngelscriptProperty))
	UFUNCTION()
	static void SetActorRelativeRotationQuat(AActor* Actor, const FQuat& NewRelativeRotation)
	{
		Actor->SetActorRelativeRotation(NewRelativeRotation);
	}

	//UFUNCTION(ScriptCallable, Meta = (ScriptTrivial))
	UFUNCTION()
	static FRotator GetActorRelativeRotation(const AActor* Actor)
	{
		if (auto* RootComp = Actor->GetRootComponent())
			return RootComp->GetRelativeRotation();
		return FRotator::ZeroRotator;
	}

	//UFUNCTION(ScriptCallable)
	UFUNCTION()
	static void SetActorRelativeTransform(AActor* Actor, const FTransform& NewRelativeTransform)
	{
		Actor->SetActorRelativeTransform(NewRelativeTransform);
	}

	//UFUNCTION(ScriptCallable, Meta = (ScriptTrivial))
	UFUNCTION()
	static FTransform GetActorRelativeTransform(const AActor* Actor)
	{
		if (auto* RootComp = Actor->GetRootComponent())
			return RootComp->GetRelativeTransform();
		return FTransform::Identity;
	}

	//UFUNCTION(ScriptCallable)
	UFUNCTION()
	static void SetActorLocation(AActor* Actor, const FVector& NewLocation)
	{
		Actor->SetActorLocation(NewLocation);
	}

	//UFUNCTION(ScriptCallable)
	UFUNCTION()
	static void SetActorRotation(AActor* Actor, const FRotator& NewRotation)
	{
		Actor->SetActorRotation(NewRotation);
	}

	//UFUNCTION(ScriptCallable, Meta = (ScriptName = "SetActorRotation", NotAngelscriptProperty))
	UFUNCTION()
	static void SetActorRotationQuat(AActor* Actor, const FQuat& NewRotation)
	{
		Actor->SetActorRotation(NewRotation);
	}

	//UFUNCTION(ScriptCallable)
	UFUNCTION()
	static void SetActorLocationAndRotation(AActor* Actor, const FVector& NewLocation, const FRotator& NewRotation, bool bTeleport = false)
	{
		Actor->SetActorLocationAndRotation(NewLocation, NewRotation, false, nullptr, TeleportFlagToEnum(bTeleport));
	}

	//UFUNCTION(ScriptCallable, Meta = (ScriptName = "SetActorLocationAndRotation"))
	UFUNCTION()
	static void SetActorLocationAndRotationQuat(AActor* Actor, const FVector& NewLocation, const FQuat& NewRotation, bool bTeleport = false)
	{
		Actor->SetActorLocationAndRotation(NewLocation, NewRotation, false, nullptr, TeleportFlagToEnum(bTeleport));
	}

	//UFUNCTION(ScriptCallable)
	UFUNCTION()
	static void SetActorTransform(AActor* Actor, const FTransform& NewTransform)
	{
		Actor->SetActorTransform(NewTransform);
	}

	//UFUNCTION(ScriptCallable, Meta = (ScriptTrivial))
	UFUNCTION()
	static void SetActorQuat(AActor* Actor, const FQuat& NewRotation)
	{
		Actor->SetActorRotation(NewRotation);
	}

	//UFUNCTION(ScriptCallable, Meta = (ScriptTrivial))
	UFUNCTION()
	static FQuat GetActorQuat(const AActor* Actor)
	{
		return Actor->GetActorQuat();
	}

	//UFUNCTION(ScriptCallable)
	UFUNCTION()
	static void AddActorLocalOffset(AActor* Actor, const FVector& DeltaLocation)
	{
		Actor->AddActorLocalOffset(DeltaLocation);
	}

	//UFUNCTION(ScriptCallable)
	UFUNCTION()
	static void AddActorLocalRotation(AActor* Actor, const FRotator& DeltaRotation)
	{
		Actor->AddActorLocalRotation(DeltaRotation);
	}

	//UFUNCTION(ScriptCallable, Meta = (ScriptName = "AddActorLocalRotation", NotAngelscriptProperty))
	UFUNCTION()
	static void AddActorLocalRotationQuat(AActor* Actor, const FQuat& DeltaRotation)
	{
		Actor->AddActorLocalRotation(DeltaRotation);
	}

	//UFUNCTION(ScriptCallable)
	UFUNCTION()
	static void AddActorLocalTransform(AActor* Actor, const FTransform& DeltaTransform)
	{
		Actor->AddActorLocalTransform(DeltaTransform);
	}

	//UFUNCTION(ScriptCallable)
	UFUNCTION()
	static void AddActorWorldOffset(AActor* Actor, const FVector& DeltaLocation)
	{
		Actor->AddActorWorldOffset(DeltaLocation);
	}

	//UFUNCTION(ScriptCallable)
	UFUNCTION()
	static void AddActorWorldRotation(AActor* Actor, const FRotator& DeltaRotation)
	{
		Actor->AddActorWorldRotation(DeltaRotation);
	}

	//UFUNCTION(ScriptCallable, Meta = (ScriptName = "AddActorWorldRotation"))
	UFUNCTION()
	static void AddActorWorldRotationQuat(AActor* Actor, const FQuat& DeltaRotation)
	{
		Actor->AddActorWorldRotation(DeltaRotation);
	}

	//UFUNCTION(ScriptCallable)
	UFUNCTION()
	static void AddActorWorldTransform(AActor* Actor, const FTransform& DeltaTransform)
	{
		Actor->AddActorWorldTransform(DeltaTransform);
	}

	//UFUNCTION(ScriptCallable)
	UFUNCTION()
	static void AttachToComponent(AActor* Actor, USceneComponent* Parent, FName SocketName = NAME_None, EAttachmentRule AttachmentRule = EAttachmentRule::SnapToTarget)
	{
		Actor->K2_AttachToComponent(Parent, SocketName, AttachmentRule, AttachmentRule, EAttachmentRule::KeepWorld, false);
	}

	//UFUNCTION(ScriptCallable)
	UFUNCTION()
	static void AttachToActor(AActor* Actor, AActor* ParentActor, FName SocketName = NAME_None, EAttachmentRule AttachmentRule = EAttachmentRule::SnapToTarget)
	{
	    Actor->K2_AttachToActor(ParentActor, SocketName, AttachmentRule, AttachmentRule, EAttachmentRule::KeepWorld, false);
	}

	//UFUNCTION(ScriptCallable)
	UFUNCTION()
	static void SetbRunConstructionScriptOnDrag(AActor* Actor, bool Value)
	{
#if WITH_EDITOR
		Actor->bRunConstructionScriptOnDrag = Value;
#endif
	}

#if WITH_EDITOR
	//UFUNCTION(ScriptCallable)
	UFUNCTION()
	static void RerunConstructionScripts(AActor* Actor)
	{
		Actor->RerunConstructionScripts();
	}
#endif
};