#include "ASRuntimeBind_80Module.h"
#include "AngelscriptBinds.h"
#include "InterchangeLightFactoryNode.h"
void FASRuntimeBind_80Module::Bind_InterchangeRectLightFactoryNode()
{
			FAngelscriptBinds::AddFunctionEntry(UInterchangeRectLightFactoryNode::StaticClass(), "GetCustomSourceHeight", { ERASE_METHOD_PTR(UInterchangeRectLightFactoryNode, GetCustomSourceHeight, (float&) const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeRectLightFactoryNode::StaticClass(), "GetCustomSourceWidth", { ERASE_METHOD_PTR(UInterchangeRectLightFactoryNode, GetCustomSourceWidth, (float&) const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeRectLightFactoryNode::StaticClass(), "SetCustomSourceHeight", { ERASE_METHOD_PTR(UInterchangeRectLightFactoryNode, SetCustomSourceHeight, (float,  bool), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeRectLightFactoryNode::StaticClass(), "SetCustomSourceWidth", { ERASE_METHOD_PTR(UInterchangeRectLightFactoryNode, SetCustomSourceWidth, (float,  bool), ERASE_ARGUMENT_PACK(bool )) } );
}
