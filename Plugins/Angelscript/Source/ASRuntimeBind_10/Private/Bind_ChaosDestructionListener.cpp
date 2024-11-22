#include "ASRuntimeBind_10Module.h"
#include "AngelscriptBinds.h"
#include "ChaosBlueprint.h"
void FASRuntimeBind_10Module::Bind_ChaosDestructionListener()
{
			FAngelscriptBinds::AddFunctionEntry(UChaosDestructionListener::StaticClass(), "AddChaosSolverActor", { ERASE_METHOD_PTR(UChaosDestructionListener, AddChaosSolverActor, (AChaosSolverActor*), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UChaosDestructionListener::StaticClass(), "AddGeometryCollectionActor", { ERASE_METHOD_PTR(UChaosDestructionListener, AddGeometryCollectionActor, (AGeometryCollectionActor*), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UChaosDestructionListener::StaticClass(), "IsEventListening", { ERASE_METHOD_PTR(UChaosDestructionListener, IsEventListening, () const, ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UChaosDestructionListener::StaticClass(), "RemoveChaosSolverActor", { ERASE_METHOD_PTR(UChaosDestructionListener, RemoveChaosSolverActor, (AChaosSolverActor*), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UChaosDestructionListener::StaticClass(), "RemoveGeometryCollectionActor", { ERASE_METHOD_PTR(UChaosDestructionListener, RemoveGeometryCollectionActor, (AGeometryCollectionActor*), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UChaosDestructionListener::StaticClass(), "SetBreakingEventEnabled", { ERASE_METHOD_PTR(UChaosDestructionListener, SetBreakingEventEnabled, (bool), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UChaosDestructionListener::StaticClass(), "SetBreakingEventRequestSettings", { ERASE_METHOD_PTR(UChaosDestructionListener, SetBreakingEventRequestSettings, (const FChaosBreakingEventRequestSettings&), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UChaosDestructionListener::StaticClass(), "SetCollisionEventEnabled", { ERASE_METHOD_PTR(UChaosDestructionListener, SetCollisionEventEnabled, (bool), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UChaosDestructionListener::StaticClass(), "SetCollisionEventRequestSettings", { ERASE_METHOD_PTR(UChaosDestructionListener, SetCollisionEventRequestSettings, (const FChaosCollisionEventRequestSettings&), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UChaosDestructionListener::StaticClass(), "SetRemovalEventEnabled", { ERASE_METHOD_PTR(UChaosDestructionListener, SetRemovalEventEnabled, (bool), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UChaosDestructionListener::StaticClass(), "SetRemovalEventRequestSettings", { ERASE_METHOD_PTR(UChaosDestructionListener, SetRemovalEventRequestSettings, (const FChaosRemovalEventRequestSettings&), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UChaosDestructionListener::StaticClass(), "SetTrailingEventEnabled", { ERASE_METHOD_PTR(UChaosDestructionListener, SetTrailingEventEnabled, (bool), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UChaosDestructionListener::StaticClass(), "SetTrailingEventRequestSettings", { ERASE_METHOD_PTR(UChaosDestructionListener, SetTrailingEventRequestSettings, (const FChaosTrailingEventRequestSettings&), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UChaosDestructionListener::StaticClass(), "SortBreakingEvents", { ERASE_METHOD_PTR(UChaosDestructionListener, SortBreakingEvents, ( TArray<FChaosBreakingEventData>&,  EChaosBreakingSortMethod), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UChaosDestructionListener::StaticClass(), "SortCollisionEvents", { ERASE_METHOD_PTR(UChaosDestructionListener, SortCollisionEvents, ( TArray<FChaosCollisionEventData>&,  EChaosCollisionSortMethod), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UChaosDestructionListener::StaticClass(), "SortRemovalEvents", { ERASE_METHOD_PTR(UChaosDestructionListener, SortRemovalEvents, ( TArray<FChaosRemovalEventData>&,  EChaosRemovalSortMethod), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UChaosDestructionListener::StaticClass(), "SortTrailingEvents", { ERASE_METHOD_PTR(UChaosDestructionListener, SortTrailingEvents, ( TArray<FChaosTrailingEventData>&,  EChaosTrailingSortMethod), ERASE_ARGUMENT_PACK( void )) } );
}
