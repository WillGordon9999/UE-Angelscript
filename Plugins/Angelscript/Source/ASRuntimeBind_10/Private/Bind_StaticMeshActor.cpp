#include "ASRuntimeBind_10Module.h"
#include "AngelscriptBinds.h"
#include "Engine/StaticMeshActor.h"
void FASRuntimeBind_10Module::Bind_StaticMeshActor()
{
			FAngelscriptBinds::AddFunctionEntry(AStaticMeshActor::StaticClass(), "SetMobility", { ERASE_METHOD_PTR(AStaticMeshActor, SetMobility, (EComponentMobility::Type), ERASE_ARGUMENT_PACK( void )) } );
}
