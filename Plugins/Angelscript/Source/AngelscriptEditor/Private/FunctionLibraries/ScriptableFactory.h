#pragma once

#include "CoreMinimal.h"
#include "Factories/Factory.h"
#include "ScriptableFactory.generated.h"

//UCLASS(Meta = (SkipConstructorOptimization))
UCLASS(Meta = ())
class UScriptableFactory : public UFactory
{
	GENERATED_BODY()

public:
	UScriptableFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

	UFUNCTION(BlueprintImplementableEvent)
	UObject* CreateFromText(UClass* InClass, UObject* InParent, FName InName, int InFlags, UObject* Context, const FString& Buffer);

	UFUNCTION(BlueprintImplementableEvent)
	UObject* CreateFromBinary(UClass* InClass, UObject* InParent, FName InName, int InFlags, UObject* Context, const TArray<uint8>& Buffer);

protected:
	//UFUNCTION(ScriptCallable)
	UFUNCTION(BlueprintCallable)
	UObject* CreateOrOverwriteAsset(UClass* InClass, UObject* InParent, FName InName, int InFlags) const;

protected:
	UObject* FactoryCreateText(UClass* InClass, UObject* InParent, FName InName, EObjectFlags Flags, UObject* Context,
		const TCHAR* Type, const TCHAR*& Buffer, const TCHAR* BufferEnd, FFeedbackContext* Warn) override;

	UObject* FactoryCreateBinary(UClass* InClass, UObject* InParent, FName InName, EObjectFlags Flags, UObject* Context,
		const TCHAR* Type, const uint8*& Buffer, const uint8* BufferEnd, FFeedbackContext* Warn) override;
};
