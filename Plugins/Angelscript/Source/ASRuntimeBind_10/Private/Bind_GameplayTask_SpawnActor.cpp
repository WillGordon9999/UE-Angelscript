#include "ASRuntimeBind_10Module.h"
#include "AngelscriptBinds.h"
#include "Tasks/GameplayTask_SpawnActor.h"
void FASRuntimeBind_10Module::Bind_GameplayTask_SpawnActor()
{
			FAngelscriptBinds::AddFunctionEntry(UGameplayTask_SpawnActor::StaticClass(), "BeginSpawningActor", { ERASE_METHOD_PTR(UGameplayTask_SpawnActor, BeginSpawningActor, (UObject*,  AActor*&), ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UGameplayTask_SpawnActor::StaticClass(), "FinishSpawningActor", { ERASE_METHOD_PTR(UGameplayTask_SpawnActor, FinishSpawningActor, (UObject*,  AActor*), ERASE_ARGUMENT_PACK( void )) } );
}
