#include "ASRuntimeBind_20Module.h"
#include "AngelscriptBinds.h"
#include "InterchangeManager.h"
void FASRuntimeBind_20Module::Bind_InterchangePipelineStackOverride()
{
			FAngelscriptBinds::AddFunctionEntry(UInterchangePipelineStackOverride::StaticClass(), "AddBlueprintPipeline", { ERASE_METHOD_PTR(UInterchangePipelineStackOverride, AddBlueprintPipeline, (UInterchangeBlueprintPipelineBase*), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangePipelineStackOverride::StaticClass(), "AddPipeline", { ERASE_METHOD_PTR(UInterchangePipelineStackOverride, AddPipeline, (UInterchangePipelineBase*), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangePipelineStackOverride::StaticClass(), "AddPythonPipeline", { ERASE_METHOD_PTR(UInterchangePipelineStackOverride, AddPythonPipeline, (UInterchangePythonPipelineBase*), ERASE_ARGUMENT_PACK( void )) } );
}
