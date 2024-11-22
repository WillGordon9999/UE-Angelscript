#include "ASRuntimeBind_10Module.h"
#include "AngelscriptBinds.h"
#include "Engine/CanvasRenderTarget2D.h"
void FASRuntimeBind_10Module::Bind_CanvasRenderTarget2D()
{
			FAngelscriptBinds::AddFunctionEntry(UCanvasRenderTarget2D::StaticClass(), "GetSize", { ERASE_METHOD_PTR(UCanvasRenderTarget2D, GetSize, (int32&,  int32&), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UCanvasRenderTarget2D::StaticClass(), "UpdateResource", { ERASE_METHOD_PTR(UCanvasRenderTarget2D, UpdateResource, (), ERASE_ARGUMENT_PACK(  void )) } );
}
