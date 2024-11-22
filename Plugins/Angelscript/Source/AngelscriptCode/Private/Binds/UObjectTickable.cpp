#include "UObjectTickable.h"
#include "Engine/Engine.h"
#include "Engine/World.h"

UWorld* UObjectTickable::GetWorld() const
{
	if (World != nullptr)
		return World;
	else if (!HasAnyFlags(RF_ClassDefaultObject | RF_ArchetypeObject))
		return GetOuter()->GetWorld();
	else
		return nullptr;
}

void UObjectTickable::SetWorld(UWorld* InWorld)
{
	World = InWorld;
}

void UObjectTickable::SetWorldContext(UObject* WorldContext)
{
	World = GEngine->GetWorldFromContextObject(WorldContext, EGetWorldErrorMode::ReturnNull);
}

TStatId UObjectTickable::GetStatId() const
{
	return GetStatID();
}

void UObjectTickable::Tick(float DeltaTime)
{
	if (IsValid(this) && !IsUnreachable())
		BP_Tick(DeltaTime);
}
