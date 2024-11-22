#include "ASRuntimeBind_40Module.h"
#include "AngelscriptBinds.h"
#include "Options/GLTFProxyOptions.h"
void FASRuntimeBind_40Module::Bind_GLTFProxyOptions()
{
			FAngelscriptBinds::AddFunctionEntry(UGLTFProxyOptions::StaticClass(), "ResetToDefault", { ERASE_METHOD_PTR(UGLTFProxyOptions, ResetToDefault, (), ERASE_ARGUMENT_PACK(void )) } );
}
