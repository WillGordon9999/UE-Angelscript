#include "ASRuntimeBind_80Module.h"
#include "AngelscriptBinds.h"
#include "InterchangeCommonPipelineDataFactoryNode.h"
#include "UObject/NoExportTypes.h"
#include "Nodes/InterchangeBaseNodeContainer.h"
void FASRuntimeBind_80Module::Bind_InterchangeCommonPipelineDataFactoryNode()
{
			FAngelscriptBinds::AddFunctionEntry(UInterchangeCommonPipelineDataFactoryNode::StaticClass(), "GetBakeMeshes", { ERASE_METHOD_PTR(UInterchangeCommonPipelineDataFactoryNode, GetBakeMeshes, (bool&) const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeCommonPipelineDataFactoryNode::StaticClass(), "GetCustomGlobalOffsetTransform", { ERASE_METHOD_PTR(UInterchangeCommonPipelineDataFactoryNode, GetCustomGlobalOffsetTransform, (FTransform&) const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeCommonPipelineDataFactoryNode::StaticClass(), "SetBakeMeshes", { ERASE_METHOD_PTR(UInterchangeCommonPipelineDataFactoryNode, SetBakeMeshes, (const UInterchangeBaseNodeContainer*,  const bool&), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeCommonPipelineDataFactoryNode::StaticClass(), "SetCustomGlobalOffsetTransform", { ERASE_METHOD_PTR(UInterchangeCommonPipelineDataFactoryNode, SetCustomGlobalOffsetTransform, (const UInterchangeBaseNodeContainer*,  const FTransform&), ERASE_ARGUMENT_PACK(bool )) } );
}
