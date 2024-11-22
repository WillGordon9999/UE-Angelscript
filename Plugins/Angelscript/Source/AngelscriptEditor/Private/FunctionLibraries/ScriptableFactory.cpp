#include "ScriptableFactory.h"

UScriptableFactory::UScriptableFactory(const FObjectInitializer& ObjectInitializer) 
	: Super(ObjectInitializer)
{
}

UObject* UScriptableFactory::CreateOrOverwriteAsset(UClass* InClass, UObject* InParent, FName InName, int InFlags) const
{
	return UFactory::CreateOrOverwriteAsset(InClass, InParent, InName, (EObjectFlags) InFlags, nullptr);
}

UObject* UScriptableFactory::FactoryCreateText(UClass* InClass, UObject* InParent, FName InName, EObjectFlags Flags,
	UObject* Context, const TCHAR* Type, const TCHAR*& Buffer, const TCHAR* BufferEnd, FFeedbackContext* Warn)
{
	return CreateFromText(InClass, InParent, InName, (int) Flags, Context, FString(BufferEnd - Buffer, Buffer));
}

UObject* UScriptableFactory::FactoryCreateBinary(UClass* InClass, UObject* InParent, FName InName, EObjectFlags Flags,
	UObject* Context, const TCHAR* Type, const uint8*& Buffer, const uint8* BufferEnd, FFeedbackContext* Warn)
{
	return CreateFromBinary(InClass, InParent, InName, (int) Flags, Context, TArray<uint8>(Buffer, BufferEnd - Buffer));
}
