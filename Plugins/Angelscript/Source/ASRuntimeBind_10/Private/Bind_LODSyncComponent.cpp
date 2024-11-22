#include "ASRuntimeBind_10Module.h"
#include "AngelscriptBinds.h"
#include "Components/LODSyncComponent.h"
void FASRuntimeBind_10Module::Bind_LODSyncComponent()
{
			FAngelscriptBinds::AddFunctionEntry(ULODSyncComponent::StaticClass(), "GetLODSyncDebugText", { ERASE_METHOD_PTR(ULODSyncComponent, GetLODSyncDebugText, () const, ERASE_ARGUMENT_PACK( FString )) } );
}
