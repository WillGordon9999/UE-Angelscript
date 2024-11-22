#include "ASRuntimeBind_10Module.h"
#include "AngelscriptBinds.h"
#include "Engine/World.h"
void FASRuntimeBind_10Module::Bind_World()
{
			FAngelscriptBinds::AddFunctionEntry(UWorld::StaticClass(), "GetDataLayerManager", { ERASE_METHOD_PTR(UWorld, GetDataLayerManager, () const, ERASE_ARGUMENT_PACK(UDataLayerManager* )) } );
			FAngelscriptBinds::AddFunctionEntry(UWorld::StaticClass(), "K2_GetWorldSettings", { ERASE_METHOD_PTR(UWorld, K2_GetWorldSettings, (), ERASE_ARGUMENT_PACK(AWorldSettings* )) } );
}
