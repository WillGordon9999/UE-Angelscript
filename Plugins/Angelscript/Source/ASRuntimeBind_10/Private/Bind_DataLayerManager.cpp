#include "ASRuntimeBind_10Module.h"
#include "AngelscriptBinds.h"
#include "WorldPartition/DataLayer/DataLayerManager.h"
#include "WorldPartition/DataLayer/DataLayerInstance.h"
#include "WorldPartition/DataLayer/DataLayerAsset.h"
void FASRuntimeBind_10Module::Bind_DataLayerManager()
{
			FAngelscriptBinds::AddFunctionEntry(UDataLayerManager::StaticClass(), "GetDataLayerInstanceEffectiveRuntimeState", { ERASE_METHOD_PTR(UDataLayerManager, GetDataLayerInstanceEffectiveRuntimeState, (const UDataLayerInstance*) const, ERASE_ARGUMENT_PACK( EDataLayerRuntimeState )) } );
			FAngelscriptBinds::AddFunctionEntry(UDataLayerManager::StaticClass(), "GetDataLayerInstanceFromAsset", { ERASE_METHOD_PTR(UDataLayerManager, GetDataLayerInstanceFromAsset, (const UDataLayerAsset*) const, ERASE_ARGUMENT_PACK( const UDataLayerInstance* )) } );
			FAngelscriptBinds::AddFunctionEntry(UDataLayerManager::StaticClass(), "GetDataLayerInstanceFromName", { ERASE_METHOD_PTR(UDataLayerManager, GetDataLayerInstanceFromName, (const FName&) const, ERASE_ARGUMENT_PACK( const UDataLayerInstance* )) } );
			FAngelscriptBinds::AddFunctionEntry(UDataLayerManager::StaticClass(), "GetDataLayerInstanceRuntimeState", { ERASE_METHOD_PTR(UDataLayerManager, GetDataLayerInstanceRuntimeState, (const UDataLayerInstance*) const, ERASE_ARGUMENT_PACK( EDataLayerRuntimeState )) } );
			FAngelscriptBinds::AddFunctionEntry(UDataLayerManager::StaticClass(), "GetDataLayerInstances", { ERASE_METHOD_PTR(UDataLayerManager, GetDataLayerInstances, () const, ERASE_ARGUMENT_PACK( TArray<UDataLayerInstance*> )) } );
			FAngelscriptBinds::AddFunctionEntry(UDataLayerManager::StaticClass(), "SetDataLayerInstanceRuntimeState", { ERASE_METHOD_PTR(UDataLayerManager, SetDataLayerInstanceRuntimeState, (const UDataLayerInstance*,  EDataLayerRuntimeState,  bool), ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UDataLayerManager::StaticClass(), "SetDataLayerRuntimeState", { ERASE_METHOD_PTR(UDataLayerManager, SetDataLayerRuntimeState, (const UDataLayerAsset*,  EDataLayerRuntimeState,  bool), ERASE_ARGUMENT_PACK( bool )) } );
}
