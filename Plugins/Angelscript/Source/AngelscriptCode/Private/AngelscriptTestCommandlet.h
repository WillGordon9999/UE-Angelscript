#pragma once
#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"
#include "Commandlets/Commandlet.h"
#include "Engine/EngineTypes.h"
#include "AngelscriptTestCommandlet.generated.h"

UCLASS()
class ANGELSCRIPTCODE_API UAngelscriptTestCommandlet : public UCommandlet
{
	GENERATED_BODY()

public:		
	//~ Begin UCommandlet Interface
	virtual int32 Main(const FString& Params) override;
	//~ End UCommandlet Interface
};
