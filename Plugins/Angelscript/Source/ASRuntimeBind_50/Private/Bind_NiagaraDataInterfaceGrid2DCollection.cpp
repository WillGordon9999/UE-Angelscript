#include "ASRuntimeBind_50Module.h"
#include "AngelscriptBinds.h"
#include "NiagaraDataInterfaceGrid2DCollection.h"
#include "NiagaraComponent.h"
#include "Engine/TextureRenderTarget2D.h"
void FASRuntimeBind_50Module::Bind_NiagaraDataInterfaceGrid2DCollection()
{
			FAngelscriptBinds::AddFunctionEntry(UNiagaraDataInterfaceGrid2DCollection::StaticClass(), "GetTextureSize", { ERASE_METHOD_PTR(UNiagaraDataInterfaceGrid2DCollection, GetTextureSize, (const UNiagaraComponent *,  int &,  int &), ERASE_ARGUMENT_PACK(  void )) } );
}
