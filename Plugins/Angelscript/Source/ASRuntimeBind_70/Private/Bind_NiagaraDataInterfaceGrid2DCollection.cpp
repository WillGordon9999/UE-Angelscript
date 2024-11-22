#include "ASRuntimeBind_70Module.h"
#include "AngelscriptBinds.h"
#include "NiagaraDataInterfaceGrid2DCollection.h"
void FASRuntimeBind_70Module::Bind_NiagaraDataInterfaceGrid2DCollection()
{
			FAngelscriptBinds::AddFunctionEntry(UNiagaraDataInterfaceGrid2DCollection::StaticClass(), "GetTextureSize", { ERASE_METHOD_PTR(UNiagaraDataInterfaceGrid2DCollection, GetTextureSize, (const UNiagaraComponent *,  int &,  int &), ERASE_ARGUMENT_PACK(  void )) } );
}
