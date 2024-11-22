#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "ScriptGameInstanceSubsystem.generated.h"

UCLASS(Blueprintable, Abstract)
class ANGELSCRIPTCODE_API UScriptGameInstanceSubsystem : public UGameInstanceSubsystem, public FTickableGameObject
{
	GENERATED_BODY()

public:

	bool bInitialized = false;

	virtual bool ShouldCreateSubsystem(UObject* Outer) const override
	{
		if (IsUnreachable() || !Super::ShouldCreateSubsystem(Outer))
			return false;

		return BP_ShouldCreateSubsystem(Outer);
	}

	virtual void Initialize(FSubsystemCollectionBase& Collection) override
	{
		Super::Initialize(Collection);
		bInitialized = true;

		if (!IsUnreachable())
			BP_Initialize();
	}

	virtual void Deinitialize() override
	{
		if (!IsUnreachable())
			BP_Deinitialize();

		Super::Deinitialize();
		bInitialized = false;
	}

	UFUNCTION(BlueprintNativeEvent)
	bool BP_ShouldCreateSubsystem(UObject* Outer) const;
	bool BP_ShouldCreateSubsystem_Implementation(UObject* Outer) const { return true; }

	UFUNCTION(BlueprintImplementableEvent)
	void BP_Initialize();

	UFUNCTION(BlueprintImplementableEvent)
	void BP_Deinitialize();

	UFUNCTION(BlueprintImplementableEvent)
	void BP_Tick(float DeltaTime);

	UFUNCTION(BlueprintPure, Category = "Game Instance Subsystem")
	UGameInstance* BP_GetGameInstance() const
	{
		return GetGameInstance();
	}

	// FTickableGameObject implementation Begin
	virtual UWorld* GetTickableGameObjectWorld() const override
	{
		return nullptr;
	}

	virtual ETickableTickType GetTickableTickType() const override
	{
		return IsTemplate() ? ETickableTickType::Never : FTickableGameObject::GetTickableTickType(); 
	}

	virtual bool IsAllowedToTick() const override final
	{
		return !IsTemplate() && bInitialized;
	}

	virtual void Tick(float DeltaTime) override
	{
		if (!IsUnreachable())
			BP_Tick(DeltaTime);
	}

	virtual TStatId GetStatId() const override 
	{
		return GetStatID();
	}
	// FTickableGameObject implementation End

};