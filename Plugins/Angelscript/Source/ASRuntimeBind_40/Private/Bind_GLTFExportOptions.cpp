#include "ASRuntimeBind_40Module.h"
#include "AngelscriptBinds.h"
#include "Options/GLTFExportOptions.h"
void FASRuntimeBind_40Module::Bind_GLTFExportOptions()
{
			FAngelscriptBinds::AddFunctionEntry(UGLTFExportOptions::StaticClass(), "ResetToDefault", { ERASE_METHOD_PTR(UGLTFExportOptions, ResetToDefault, (), ERASE_ARGUMENT_PACK(void )) } );
}
