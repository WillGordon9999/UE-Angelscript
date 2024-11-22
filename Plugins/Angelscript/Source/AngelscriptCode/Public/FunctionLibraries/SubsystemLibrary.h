#pragma once

#include "Subsystems/SubsystemBlueprintLibrary.h"
#include "Engine/LocalPlayer.h"
#include "SubsystemLibrary.generated.h"

// These functions are blueprint internal by default, but we need them exposed in Angelscript

UCLASS(MinimalAPI)
class USubsystemLibrary : public UObject
{
	GENERATED_BODY()

public:

	/** Get a Game Instance Subsystem from the Game Instance associated with the provided context */
	//UFUNCTION(ScriptCallable, Meta = (DeterminesOutputType = "Class"))
	UFUNCTION(BlueprintCallable, Meta = (DeterminesOutputType = "Class"))
	static UEngineSubsystem* GetEngineSubsystem(TSubclassOf<UEngineSubsystem> Class)
	{
		return USubsystemBlueprintLibrary::GetEngineSubsystem(Class);
	}

	/** Get a Game Instance Subsystem from the Game Instance associated with the provided context */
	//UFUNCTION(ScriptCallable, Meta = (WorldContext = "WorldContextObject", DeterminesOutputType = "Class"))
	UFUNCTION(BlueprintCallable, Meta = (WorldContext = "WorldContextObject", DeterminesOutputType = "Class"))
	static UGameInstanceSubsystem* GetGameInstanceSubsystem(UObject* WorldContextObject, TSubclassOf<UGameInstanceSubsystem> Class)
	{
		return USubsystemBlueprintLibrary::GetGameInstanceSubsystem(WorldContextObject, Class);
	}

	/** Get a Local Player Subsystem from the Local Player associated with the provided context */
	//UFUNCTION(ScriptCallable, Meta = (WorldContext = "WorldContextObject", DeterminesOutputType = "Class"))
	UFUNCTION(BlueprintCallable, Meta = (WorldContext = "WorldContextObject", DeterminesOutputType = "Class"))
	static ULocalPlayerSubsystem* GetLocalPlayerSubsystem(UObject* WorldContextObject, TSubclassOf<ULocalPlayerSubsystem> Class)
	{
		return USubsystemBlueprintLibrary::GetLocalPlayerSubsystem(WorldContextObject, Class);
	}

	/** Get a World Subsystem from the World associated with the provided context */
	//UFUNCTION(ScriptCallable, Meta = (WorldContext = "WorldContextObject", DeterminesOutputType = "Class"))
	UFUNCTION(BlueprintCallable, Meta = (WorldContext = "WorldContextObject", DeterminesOutputType = "Class"))
	static UWorldSubsystem* GetWorldSubsystem(UObject* WorldContextObject, TSubclassOf<UWorldSubsystem> Class)
	{
		return USubsystemBlueprintLibrary::GetWorldSubsystem(WorldContextObject, Class);
	}

	/**
	 * Get a Local Player Subsystem from the LocalPlayer associated with the provided context
	 * If the player controller isn't associated to a LocalPlayer nullptr is returned
	 */
	//UFUNCTION(ScriptCallable, Meta = (DeterminesOutputType = "Class"))
	UFUNCTION(BlueprintCallable, Meta = (DeterminesOutputType = "Class"))
	static ULocalPlayerSubsystem* GetLocalPlayerSubsystemFromPlayerController(APlayerController* PlayerController, TSubclassOf<ULocalPlayerSubsystem> Class)
	{
		return USubsystemBlueprintLibrary::GetLocalPlayerSubSystemFromPlayerController(PlayerController, Class);
	}

	/** Get a Local Player Subsystem from the Local Player associated with the provided context */
	//UFUNCTION(ScriptCallable, Meta = (WorldContext = "WorldContextObject", DeterminesOutputType = "Class"))
	UFUNCTION(BlueprintCallable, Meta = (WorldContext = "WorldContextObject", DeterminesOutputType = "Class"))
	static ULocalPlayerSubsystem* GetLocalPlayerSubsystemFromLocalPlayer(UObject* WorldContextObject, ULocalPlayer* LocalPlayer, TSubclassOf<ULocalPlayerSubsystem> Class)
	{
		return USubsystemBlueprintLibrary::GetLocalPlayerSubsystem(LocalPlayer, Class);
	}
};
