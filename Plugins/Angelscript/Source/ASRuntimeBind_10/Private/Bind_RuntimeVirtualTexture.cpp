#include "ASRuntimeBind_10Module.h"
#include "AngelscriptBinds.h"
#include "VT/RuntimeVirtualTexture.h"
void FASRuntimeBind_10Module::Bind_RuntimeVirtualTexture()
{
			FAngelscriptBinds::AddFunctionEntry(URuntimeVirtualTexture::StaticClass(), "GetPageTableSize", { ERASE_METHOD_PTR(URuntimeVirtualTexture, GetPageTableSize, () const, ERASE_ARGUMENT_PACK( int32 )) } );
			FAngelscriptBinds::AddFunctionEntry(URuntimeVirtualTexture::StaticClass(), "GetSize", { ERASE_METHOD_PTR(URuntimeVirtualTexture, GetSize, () const, ERASE_ARGUMENT_PACK(int32 )) } );
}
