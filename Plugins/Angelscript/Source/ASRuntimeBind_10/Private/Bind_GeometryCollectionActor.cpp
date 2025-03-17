#include "ASRuntimeBind_10Module.h"
#include "AngelscriptBinds.h"
#include "GeometryCollection/GeometryCollectionActor.h"
#include "UObject/NoExportTypes.h"
#include "Engine/HitResult.h"
void FASRuntimeBind_10Module::Bind_GeometryCollectionActor()
{
			FAngelscriptBinds::AddFunctionEntry(AGeometryCollectionActor::StaticClass(), "RaycastSingle", { ERASE_METHOD_PTR(AGeometryCollectionActor, RaycastSingle, (FVector,  FVector,  FHitResult&) const, ERASE_ARGUMENT_PACK( bool )) } );
}
