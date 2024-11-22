#include "ASRuntimeBind_10Module.h"
#include "AngelscriptBinds.h"
#include "Components/SceneCaptureComponent2D.h"
void FASRuntimeBind_10Module::Bind_SceneCaptureComponent2D()
{
			FAngelscriptBinds::AddFunctionEntry(USceneCaptureComponent2D::StaticClass(), "AddOrUpdateBlendable", { ERASE_METHOD_PTR(USceneCaptureComponent2D, AddOrUpdateBlendable, (TScriptInterface<IBlendableInterface>,  float), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(USceneCaptureComponent2D::StaticClass(), "CaptureScene", { ERASE_METHOD_PTR(USceneCaptureComponent2D, CaptureScene, (), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(USceneCaptureComponent2D::StaticClass(), "RemoveBlendable", { ERASE_METHOD_PTR(USceneCaptureComponent2D, RemoveBlendable, (TScriptInterface<IBlendableInterface>), ERASE_ARGUMENT_PACK(void )) } );
}
