#include "ASRuntimeBind_30Module.h"
#include "AngelscriptBinds.h"
#include "LandscapeComponent.h"
#include "UObject/NoExportTypes.h"
#include "LandscapeLayerInfoObject.h"
#include "Materials/MaterialInstanceDynamic.h"
void FASRuntimeBind_30Module::Bind_LandscapeComponent()
{
			FAngelscriptBinds::AddFunctionEntry(ULandscapeComponent::StaticClass(), "EditorGetPaintLayerWeightAtLocation", { ERASE_METHOD_PTR(ULandscapeComponent, EditorGetPaintLayerWeightAtLocation, (const FVector&,  ULandscapeLayerInfoObject*), ERASE_ARGUMENT_PACK( float )) } );
			FAngelscriptBinds::AddFunctionEntry(ULandscapeComponent::StaticClass(), "EditorGetPaintLayerWeightByNameAtLocation", { ERASE_METHOD_PTR(ULandscapeComponent, EditorGetPaintLayerWeightByNameAtLocation, (const FVector&,  const FName), ERASE_ARGUMENT_PACK( float )) } );
			FAngelscriptBinds::AddFunctionEntry(ULandscapeComponent::StaticClass(), "SetForcedLOD", { ERASE_METHOD_PTR(ULandscapeComponent, SetForcedLOD, (int32), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(ULandscapeComponent::StaticClass(), "SetLODBias", { ERASE_METHOD_PTR(ULandscapeComponent, SetLODBias, (int32), ERASE_ARGUMENT_PACK( void )) } );
}
