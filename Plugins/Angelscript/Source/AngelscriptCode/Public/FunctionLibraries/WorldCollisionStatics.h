#pragma once
#include "CoreMinimal.h"
#include "Engine/OverlapResult.h"
#include "WorldCollision.h"
#include "WorldCollisionStatics.generated.h"

DECLARE_DYNAMIC_DELEGATE_ThreeParams(FScriptTraceDelegate, uint64, TraceHandle, const TArray<FHitResult>&, OutHits, uint32, UserData);
DECLARE_DYNAMIC_DELEGATE_ThreeParams(FScriptOverlapDelegate, uint64, TraceHandle, const TArray<FOverlapResult>&, OutOverlaps, uint32, UserData);

UCLASS()
class UWorldCollisionStatics : public UObject
{
	GENERATED_BODY()
};
