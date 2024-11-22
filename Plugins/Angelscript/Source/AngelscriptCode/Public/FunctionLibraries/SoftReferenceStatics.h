#pragma once
#include "CoreMinimal.h"
#include "SoftReferenceStatics.generated.h"

DECLARE_DYNAMIC_DELEGATE_OneParam(FOnSoftObjectLoaded, UObject*, LoadedObject);
DECLARE_DYNAMIC_DELEGATE_OneParam(FOnSoftClassLoaded, UClass*, LoadedClass);

UCLASS()
class USoftReferenceStatics : public UObject
{
	GENERATED_BODY()

public:

};
