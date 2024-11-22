#include "ASRuntimeBind_10Module.h"
#include "AngelscriptBinds.h"
#include "Components/StereoLayerComponent.h"
void FASRuntimeBind_10Module::Bind_StereoLayerShapeCylinder()
{
			FAngelscriptBinds::AddFunctionEntry(UStereoLayerShapeCylinder::StaticClass(), "SetHeight", { ERASE_METHOD_PTR(UStereoLayerShapeCylinder, SetHeight, (int), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UStereoLayerShapeCylinder::StaticClass(), "SetOverlayArc", { ERASE_METHOD_PTR(UStereoLayerShapeCylinder, SetOverlayArc, (float), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UStereoLayerShapeCylinder::StaticClass(), "SetRadius", { ERASE_METHOD_PTR(UStereoLayerShapeCylinder, SetRadius, (float), ERASE_ARGUMENT_PACK( void )) } );
}
