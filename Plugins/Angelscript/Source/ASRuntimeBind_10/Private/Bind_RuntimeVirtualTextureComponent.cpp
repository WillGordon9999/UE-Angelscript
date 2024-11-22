#include "ASRuntimeBind_10Module.h"
#include "AngelscriptBinds.h"
#include "Components/RuntimeVirtualTextureComponent.h"
void FASRuntimeBind_10Module::Bind_RuntimeVirtualTextureComponent()
{
			FAngelscriptBinds::AddFunctionEntry(URuntimeVirtualTextureComponent::StaticClass(), "Invalidate", { ERASE_METHOD_PTR(URuntimeVirtualTextureComponent, Invalidate, (FBoxSphereBounds const&), ERASE_ARGUMENT_PACK( void )) } );
}
