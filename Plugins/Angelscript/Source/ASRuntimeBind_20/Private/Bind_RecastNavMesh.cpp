#include "ASRuntimeBind_20Module.h"
#include "AngelscriptBinds.h"
#include "NavMesh/RecastNavMesh.h"
void FASRuntimeBind_20Module::Bind_RecastNavMesh()
{
			FAngelscriptBinds::AddFunctionEntry(ARecastNavMesh::StaticClass(), "K2_ReplaceAreaInTileBounds", { ERASE_METHOD_PTR(ARecastNavMesh, K2_ReplaceAreaInTileBounds, (FBox,  TSubclassOf<UNavArea>,  TSubclassOf<UNavArea>,  bool), ERASE_ARGUMENT_PACK( bool )) } );
}
