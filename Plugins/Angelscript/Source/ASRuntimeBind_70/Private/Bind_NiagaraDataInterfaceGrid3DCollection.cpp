#include "ASRuntimeBind_70Module.h"
#include "AngelscriptBinds.h"
#include "NiagaraDataInterfaceGrid3DCollection.h"
void FASRuntimeBind_70Module::Bind_NiagaraDataInterfaceGrid3DCollection()
{
			FAngelscriptBinds::AddFunctionEntry(UNiagaraDataInterfaceGrid3DCollection::StaticClass(), "GetRawTextureSize", { ERASE_METHOD_PTR(UNiagaraDataInterfaceGrid3DCollection, GetRawTextureSize, (const UNiagaraComponent*,  int&,  int&,  int&), ERASE_ARGUMENT_PACK(  void )) } );
			FAngelscriptBinds::AddFunctionEntry(UNiagaraDataInterfaceGrid3DCollection::StaticClass(), "GetTextureSize", { ERASE_METHOD_PTR(UNiagaraDataInterfaceGrid3DCollection, GetTextureSize, (const UNiagaraComponent*,  int&,  int&,  int&), ERASE_ARGUMENT_PACK(  void )) } );
}