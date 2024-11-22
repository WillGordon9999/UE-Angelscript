#include "ASRuntimeBind_10Module.h"
#include "AngelscriptBinds.h"
#include "BehaviorTree/BlackboardComponent.h"
void FASRuntimeBind_10Module::Bind_BlackboardComponent()
{
			FAngelscriptBinds::AddFunctionEntry(UBlackboardComponent::StaticClass(), "ClearValue", { ERASE_METHOD_PTR(UBlackboardComponent, ClearValue, (const FName&), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UBlackboardComponent::StaticClass(), "GetLocationFromEntry", { ERASE_METHOD_PTR(UBlackboardComponent, GetLocationFromEntry, (const FName&,  FVector&) const, ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UBlackboardComponent::StaticClass(), "GetRotationFromEntry", { ERASE_METHOD_PTR(UBlackboardComponent, GetRotationFromEntry, (const FName&,  FRotator&) const, ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UBlackboardComponent::StaticClass(), "GetValueAsBool", { ERASE_METHOD_PTR(UBlackboardComponent, GetValueAsBool, (const FName&) const, ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UBlackboardComponent::StaticClass(), "GetValueAsClass", { ERASE_METHOD_PTR(UBlackboardComponent, GetValueAsClass, (const FName&) const, ERASE_ARGUMENT_PACK( UClass* )) } );
			FAngelscriptBinds::AddFunctionEntry(UBlackboardComponent::StaticClass(), "GetValueAsEnum", { ERASE_METHOD_PTR(UBlackboardComponent, GetValueAsEnum, (const FName&) const, ERASE_ARGUMENT_PACK( uint8 )) } );
			FAngelscriptBinds::AddFunctionEntry(UBlackboardComponent::StaticClass(), "GetValueAsFloat", { ERASE_METHOD_PTR(UBlackboardComponent, GetValueAsFloat, (const FName&) const, ERASE_ARGUMENT_PACK( float )) } );
			FAngelscriptBinds::AddFunctionEntry(UBlackboardComponent::StaticClass(), "GetValueAsInt", { ERASE_METHOD_PTR(UBlackboardComponent, GetValueAsInt, (const FName&) const, ERASE_ARGUMENT_PACK( int32 )) } );
			FAngelscriptBinds::AddFunctionEntry(UBlackboardComponent::StaticClass(), "GetValueAsName", { ERASE_METHOD_PTR(UBlackboardComponent, GetValueAsName, (const FName&) const, ERASE_ARGUMENT_PACK( FName )) } );
			FAngelscriptBinds::AddFunctionEntry(UBlackboardComponent::StaticClass(), "GetValueAsObject", { ERASE_METHOD_PTR(UBlackboardComponent, GetValueAsObject, (const FName&) const, ERASE_ARGUMENT_PACK( UObject* )) } );
			FAngelscriptBinds::AddFunctionEntry(UBlackboardComponent::StaticClass(), "GetValueAsRotator", { ERASE_METHOD_PTR(UBlackboardComponent, GetValueAsRotator, (const FName&) const, ERASE_ARGUMENT_PACK( FRotator )) } );
			FAngelscriptBinds::AddFunctionEntry(UBlackboardComponent::StaticClass(), "GetValueAsString", { ERASE_METHOD_PTR(UBlackboardComponent, GetValueAsString, (const FName&) const, ERASE_ARGUMENT_PACK( FString )) } );
			FAngelscriptBinds::AddFunctionEntry(UBlackboardComponent::StaticClass(), "GetValueAsVector", { ERASE_METHOD_PTR(UBlackboardComponent, GetValueAsVector, (const FName&) const, ERASE_ARGUMENT_PACK( FVector )) } );
			FAngelscriptBinds::AddFunctionEntry(UBlackboardComponent::StaticClass(), "IsVectorValueSet", { ERASE_METHOD_PTR(UBlackboardComponent, IsVectorValueSet, (const FName&) const, ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UBlackboardComponent::StaticClass(), "SetValueAsBool", { ERASE_METHOD_PTR(UBlackboardComponent, SetValueAsBool, (const FName&,  bool), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UBlackboardComponent::StaticClass(), "SetValueAsClass", { ERASE_METHOD_PTR(UBlackboardComponent, SetValueAsClass, (const FName&,  UClass*), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UBlackboardComponent::StaticClass(), "SetValueAsEnum", { ERASE_METHOD_PTR(UBlackboardComponent, SetValueAsEnum, (const FName&,  uint8), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UBlackboardComponent::StaticClass(), "SetValueAsFloat", { ERASE_METHOD_PTR(UBlackboardComponent, SetValueAsFloat, (const FName&,  float), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UBlackboardComponent::StaticClass(), "SetValueAsInt", { ERASE_METHOD_PTR(UBlackboardComponent, SetValueAsInt, (const FName&,  int32), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UBlackboardComponent::StaticClass(), "SetValueAsName", { ERASE_METHOD_PTR(UBlackboardComponent, SetValueAsName, (const FName&,  FName), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UBlackboardComponent::StaticClass(), "SetValueAsObject", { ERASE_METHOD_PTR(UBlackboardComponent, SetValueAsObject, (const FName&,  UObject*), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UBlackboardComponent::StaticClass(), "SetValueAsRotator", { ERASE_METHOD_PTR(UBlackboardComponent, SetValueAsRotator, (const FName&,  FRotator), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UBlackboardComponent::StaticClass(), "SetValueAsString", { ERASE_METHOD_PTR(UBlackboardComponent, SetValueAsString, (const FName&,  FString), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UBlackboardComponent::StaticClass(), "SetValueAsVector", { ERASE_METHOD_PTR(UBlackboardComponent, SetValueAsVector, (const FName&,  FVector), ERASE_ARGUMENT_PACK( void )) } );
}
