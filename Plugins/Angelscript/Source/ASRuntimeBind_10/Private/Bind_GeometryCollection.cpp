#include "ASRuntimeBind_10Module.h"
#include "AngelscriptBinds.h"
#include "GeometryCollection/GeometryCollectionObject.h"
void FASRuntimeBind_10Module::Bind_GeometryCollection()
{
			FAngelscriptBinds::AddFunctionEntry(UGeometryCollection::StaticClass(), "SetConvertVertexColorsToSRGB", { ERASE_METHOD_PTR(UGeometryCollection, SetConvertVertexColorsToSRGB, (bool), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UGeometryCollection::StaticClass(), "SetEnableNanite", { ERASE_METHOD_PTR(UGeometryCollection, SetEnableNanite, (bool), ERASE_ARGUMENT_PACK( void )) } );
}
