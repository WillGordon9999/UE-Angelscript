#include "UObjectInWorld.h"
#include "Engine/Engine.h"
#include "Engine/World.h"

UWorld* UObjectInWorld::GetWorld() const
{
	if (World != nullptr)
		return World;
	else if (!HasAnyFlags(RF_ClassDefaultObject | RF_ArchetypeObject))
		return GetOuter()->GetWorld();
	else
		return nullptr;
}

void UObjectInWorld::SetWorld(UWorld* InWorld)
{
	World = InWorld;
}

void UObjectInWorld::SetWorldContext(UObject* WorldContext)
{
	World = GEngine->GetWorldFromContextObject(WorldContext, EGetWorldErrorMode::ReturnNull);
}