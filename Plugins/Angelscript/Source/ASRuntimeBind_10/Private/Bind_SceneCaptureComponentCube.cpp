#include "ASRuntimeBind_10Module.h"
#include "AngelscriptBinds.h"
#include "Components/SceneCaptureComponentCube.h"
void FASRuntimeBind_10Module::Bind_SceneCaptureComponentCube()
{
			FAngelscriptBinds::AddFunctionEntry(USceneCaptureComponentCube::StaticClass(), "CaptureScene", { ERASE_METHOD_PTR(USceneCaptureComponentCube, CaptureScene, (), ERASE_ARGUMENT_PACK( void )) } );
}
