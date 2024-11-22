#include "ASRuntimeBind_60Module.h"
#include "AngelscriptBinds.h"
#include "InterchangeLightNode.h"
void FASRuntimeBind_60Module::Bind_InterchangeRectLightNode()
{
			FAngelscriptBinds::AddFunctionEntry(UInterchangeRectLightNode::StaticClass(), "GetCustomSourceHeight", { ERASE_METHOD_PTR(UInterchangeRectLightNode, GetCustomSourceHeight, (float&) const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeRectLightNode::StaticClass(), "GetCustomSourceWidth", { ERASE_METHOD_PTR(UInterchangeRectLightNode, GetCustomSourceWidth, (float&) const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeRectLightNode::StaticClass(), "SetCustomSourceHeight", { ERASE_METHOD_PTR(UInterchangeRectLightNode, SetCustomSourceHeight, (float), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeRectLightNode::StaticClass(), "SetCustomSourceWidth", { ERASE_METHOD_PTR(UInterchangeRectLightNode, SetCustomSourceWidth, (float), ERASE_ARGUMENT_PACK(bool )) } );
}
