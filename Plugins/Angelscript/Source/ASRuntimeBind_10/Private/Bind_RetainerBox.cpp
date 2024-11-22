#include "ASRuntimeBind_10Module.h"
#include "AngelscriptBinds.h"
#include "Components/RetainerBox.h"
void FASRuntimeBind_10Module::Bind_RetainerBox()
{
			FAngelscriptBinds::AddFunctionEntry(URetainerBox::StaticClass(), "GetEffectMaterial", { ERASE_METHOD_PTR(URetainerBox, GetEffectMaterial, () const, ERASE_ARGUMENT_PACK( UMaterialInstanceDynamic* )) } );
			FAngelscriptBinds::AddFunctionEntry(URetainerBox::StaticClass(), "RequestRender", { ERASE_METHOD_PTR(URetainerBox, RequestRender, (), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(URetainerBox::StaticClass(), "SetEffectMaterial", { ERASE_METHOD_PTR(URetainerBox, SetEffectMaterial, (UMaterialInterface*), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(URetainerBox::StaticClass(), "SetRenderingPhase", { ERASE_METHOD_PTR(URetainerBox, SetRenderingPhase, (int32,  int32), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(URetainerBox::StaticClass(), "SetRetainRendering", { ERASE_METHOD_PTR(URetainerBox, SetRetainRendering, (bool), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(URetainerBox::StaticClass(), "SetTextureParameter", { ERASE_METHOD_PTR(URetainerBox, SetTextureParameter, (FName), ERASE_ARGUMENT_PACK( void )) } );
}
