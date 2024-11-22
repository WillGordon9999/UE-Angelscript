#include "ASRuntimeBind_0Module.h"
#include "AngelscriptBinds.h"
#include "StaticMeshDescription.h"
void FASRuntimeBind_0Module::Bind_StaticMeshDescription()
{
			FAngelscriptBinds::AddFunctionEntry(UStaticMeshDescription::StaticClass(), "CreateCube", { ERASE_METHOD_PTR(UStaticMeshDescription, CreateCube, (FVector,  FVector,  FPolygonGroupID, 
					FPolygonID&, 
					FPolygonID&, 
					FPolygonID&, 
					FPolygonID&, 
					FPolygonID&, 
					FPolygonID&), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UStaticMeshDescription::StaticClass(), "GetVertexInstanceUV", { ERASE_METHOD_PTR(UStaticMeshDescription, GetVertexInstanceUV, (FVertexInstanceID,  int32) const, ERASE_ARGUMENT_PACK( FVector2D )) } );
			FAngelscriptBinds::AddFunctionEntry(UStaticMeshDescription::StaticClass(), "SetPolygonGroupMaterialSlotName", { ERASE_METHOD_PTR(UStaticMeshDescription, SetPolygonGroupMaterialSlotName, (FPolygonGroupID,  const FName&), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UStaticMeshDescription::StaticClass(), "SetVertexInstanceUV", { ERASE_METHOD_PTR(UStaticMeshDescription, SetVertexInstanceUV, (FVertexInstanceID,  FVector2D,  int32), ERASE_ARGUMENT_PACK( void )) } );
}
