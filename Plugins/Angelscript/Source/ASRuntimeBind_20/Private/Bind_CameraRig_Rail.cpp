#include "ASRuntimeBind_20Module.h"
#include "AngelscriptBinds.h"
#include "CameraRig_Rail.h"
void FASRuntimeBind_20Module::Bind_CameraRig_Rail()
{
			FAngelscriptBinds::AddFunctionEntry(ACameraRig_Rail::StaticClass(), "GetRailSplineComponent", { ERASE_METHOD_PTR(ACameraRig_Rail, GetRailSplineComponent, (), ERASE_ARGUMENT_PACK(USplineComponent* )) } );
}
