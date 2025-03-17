#include "ASRuntimeBind_10Module.h"
#include "AngelscriptBinds.h"
#include "AI/Navigation/AvoidanceManager.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/MovementComponent.h"
void FASRuntimeBind_10Module::Bind_AvoidanceManager()
{
			FAngelscriptBinds::AddFunctionEntry(UAvoidanceManager::StaticClass(), "GetAvoidanceVelocityForComponent", { ERASE_METHOD_PTR(UAvoidanceManager, GetAvoidanceVelocityForComponent, (UMovementComponent*), ERASE_ARGUMENT_PACK( FVector )) } );
			FAngelscriptBinds::AddFunctionEntry(UAvoidanceManager::StaticClass(), "GetNewAvoidanceUID", { ERASE_METHOD_PTR(UAvoidanceManager, GetNewAvoidanceUID, (), ERASE_ARGUMENT_PACK( int32 )) } );
			FAngelscriptBinds::AddFunctionEntry(UAvoidanceManager::StaticClass(), "GetObjectCount", { ERASE_METHOD_PTR(UAvoidanceManager, GetObjectCount, (), ERASE_ARGUMENT_PACK( int32 )) } );
			FAngelscriptBinds::AddFunctionEntry(UAvoidanceManager::StaticClass(), "RegisterMovementComponent", { ERASE_METHOD_PTR(UAvoidanceManager, RegisterMovementComponent, (class UMovementComponent*,  float), ERASE_ARGUMENT_PACK( bool )) } );
}
