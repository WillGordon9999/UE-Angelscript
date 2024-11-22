#pragma once
#include "CoreMinimal.h"
#include "Subsystems/LocalPlayerSubsystem.h"
#include "ScriptLocalPlayerSubsystem.generated.h"

UCLASS(Blueprintable, Abstract)
class ANGELSCRIPTCODE_API UScriptLocalPlayerSubsystem : public ULocalPlayerSubsystem
{
	GENERATED_BODY()

public:

	virtual bool ShouldCreateSubsystem(UObject* Outer) const override
	{
		if (IsUnreachable() || !Super::ShouldCreateSubsystem(Outer))
			return false;

		return BP_ShouldCreateSubsystem(Outer);
	}

	virtual void Initialize(FSubsystemCollectionBase& Collection) override
	{
		Super::Initialize(Collection);

		if (!IsUnreachable())
			BP_Initialize();
	}

	virtual void Deinitialize() override
	{
		if (!IsUnreachable())
			BP_Deinitialize();

		Super::Deinitialize();
	}

	UFUNCTION(BlueprintNativeEvent)
	bool BP_ShouldCreateSubsystem(UObject* Outer) const;
	bool BP_ShouldCreateSubsystem_Implementation(UObject* Outer) const { return true; }

	UFUNCTION(BlueprintImplementableEvent)
	void BP_Initialize();

	UFUNCTION(BlueprintImplementableEvent)
	void BP_Deinitialize();

	UFUNCTION(BlueprintPure, Category = "Local Player Subsystem")
	ULocalPlayer* BP_GetLocalPlayer() const
	{
		return GetLocalPlayer<ULocalPlayer>();
	}

};