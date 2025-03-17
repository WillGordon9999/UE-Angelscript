#include "ASRuntimeBind_10Module.h"
#include "AngelscriptBinds.h"
#include "Physics/AsyncPhysicsInputComponent.h"
#include "Physics/AsyncPhysicsData.h"
void FASRuntimeBind_10Module::Bind_AsyncPhysicsInputComponent()
{
			FAngelscriptBinds::AddFunctionEntry(UAsyncPhysicsInputComponent::StaticClass(), "GetDataToConsume", { ERASE_METHOD_PTR(UAsyncPhysicsInputComponent, GetDataToConsume, () const, ERASE_ARGUMENT_PACK( const UAsyncPhysicsData* )) } );
			FAngelscriptBinds::AddFunctionEntry(UAsyncPhysicsInputComponent::StaticClass(), "GetDataToWrite", { ERASE_METHOD_PTR(UAsyncPhysicsInputComponent, GetDataToWrite, () const, ERASE_ARGUMENT_PACK( UAsyncPhysicsData* )) } );
}
