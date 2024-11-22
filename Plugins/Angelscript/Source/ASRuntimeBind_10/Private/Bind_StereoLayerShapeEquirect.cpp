#include "ASRuntimeBind_10Module.h"
#include "AngelscriptBinds.h"
#include "Components/StereoLayerComponent.h"
void FASRuntimeBind_10Module::Bind_StereoLayerShapeEquirect()
{
			FAngelscriptBinds::AddFunctionEntry(UStereoLayerShapeEquirect::StaticClass(), "SetEquirectProps", { ERASE_METHOD_PTR(UStereoLayerShapeEquirect, SetEquirectProps, (FEquirectProps), ERASE_ARGUMENT_PACK( void )) } );
}
