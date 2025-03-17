#include "ASRuntimeBind_80Module.h"
#include "AngelscriptBinds.h"
#include "InterchangeTexture2DArrayFactoryNode.h"
void FASRuntimeBind_80Module::Bind_InterchangeTexture2DArrayFactoryNode()
{
			FAngelscriptBinds::AddFunctionEntry(UInterchangeTexture2DArrayFactoryNode::StaticClass(), "GetCustomAddressX", { ERASE_METHOD_PTR(UInterchangeTexture2DArrayFactoryNode, GetCustomAddressX, (uint8&) const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeTexture2DArrayFactoryNode::StaticClass(), "GetCustomAddressY", { ERASE_METHOD_PTR(UInterchangeTexture2DArrayFactoryNode, GetCustomAddressY, (uint8&) const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeTexture2DArrayFactoryNode::StaticClass(), "GetCustomAddressZ", { ERASE_METHOD_PTR(UInterchangeTexture2DArrayFactoryNode, GetCustomAddressZ, (uint8&) const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeTexture2DArrayFactoryNode::StaticClass(), "SetCustomAddressZ", { ERASE_METHOD_PTR(UInterchangeTexture2DArrayFactoryNode, SetCustomAddressZ, (const uint8,  bool), ERASE_ARGUMENT_PACK(bool )) } );
}
