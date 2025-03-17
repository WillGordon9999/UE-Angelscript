#include "ASRuntimeBind_80Module.h"
#include "AngelscriptBinds.h"
#include "InterchangeTextureLightProfileFactoryNode.h"
void FASRuntimeBind_80Module::Bind_InterchangeTextureLightProfileFactoryNode()
{
			FAngelscriptBinds::AddFunctionEntry(UInterchangeTextureLightProfileFactoryNode::StaticClass(), "GetCustomBrightness", { ERASE_METHOD_PTR(UInterchangeTextureLightProfileFactoryNode, GetCustomBrightness, (float&) const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeTextureLightProfileFactoryNode::StaticClass(), "GetCustomTextureMultiplier", { ERASE_METHOD_PTR(UInterchangeTextureLightProfileFactoryNode, GetCustomTextureMultiplier, (float&) const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeTextureLightProfileFactoryNode::StaticClass(), "SetCustomBrightness", { ERASE_METHOD_PTR(UInterchangeTextureLightProfileFactoryNode, SetCustomBrightness, (const float,  bool), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeTextureLightProfileFactoryNode::StaticClass(), "SetCustomTextureMultiplier", { ERASE_METHOD_PTR(UInterchangeTextureLightProfileFactoryNode, SetCustomTextureMultiplier, (const float,  bool), ERASE_ARGUMENT_PACK(bool )) } );
}
