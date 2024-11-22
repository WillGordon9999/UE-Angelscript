#include "ASRuntimeBind_10Module.h"
#include "AngelscriptBinds.h"
#include "Engine/SceneCaptureCube.h"
void FASRuntimeBind_10Module::Bind_SceneCaptureCube()
{
			FAngelscriptBinds::AddFunctionEntry(ASceneCaptureCube::StaticClass(), "OnInterpToggle", { ERASE_METHOD_PTR(ASceneCaptureCube, OnInterpToggle, (bool), ERASE_ARGUMENT_PACK( void )) } );
}
