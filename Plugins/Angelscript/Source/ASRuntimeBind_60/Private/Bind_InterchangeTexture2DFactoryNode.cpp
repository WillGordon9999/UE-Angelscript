#include "ASRuntimeBind_60Module.h"
#include "AngelscriptBinds.h"
#include "InterchangeTexture2DFactoryNode.h"
void FASRuntimeBind_60Module::Bind_InterchangeTexture2DFactoryNode()
{
			FAngelscriptBinds::AddFunctionEntry(UInterchangeTexture2DFactoryNode::StaticClass(), "GetCustomAddressX", { ERASE_METHOD_PTR(UInterchangeTexture2DFactoryNode, GetCustomAddressX, (TEnumAsByte<TextureAddress>&) const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeTexture2DFactoryNode::StaticClass(), "GetCustomAddressY", { ERASE_METHOD_PTR(UInterchangeTexture2DFactoryNode, GetCustomAddressY, (TEnumAsByte<TextureAddress>&) const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeTexture2DFactoryNode::StaticClass(), "GetSourceBlock", { ERASE_METHOD_PTR(UInterchangeTexture2DFactoryNode, GetSourceBlock, (int32,  FString&) const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeTexture2DFactoryNode::StaticClass(), "GetSourceBlockByCoordinates", { ERASE_METHOD_PTR(UInterchangeTexture2DFactoryNode, GetSourceBlockByCoordinates, (int32,  int32,  FString&) const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeTexture2DFactoryNode::StaticClass(), "GetSourceBlocks", { ERASE_METHOD_PTR(UInterchangeTexture2DFactoryNode, GetSourceBlocks, () const, ERASE_ARGUMENT_PACK(TMap<int32, FString> )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeTexture2DFactoryNode::StaticClass(), "SetCustomAddressX", { ERASE_METHOD_PTR(UInterchangeTexture2DFactoryNode, SetCustomAddressX, (const TEnumAsByte<TextureAddress>,  bool), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeTexture2DFactoryNode::StaticClass(), "SetCustomAddressY", { ERASE_METHOD_PTR(UInterchangeTexture2DFactoryNode, SetCustomAddressY, (const TEnumAsByte<TextureAddress>,  bool), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeTexture2DFactoryNode::StaticClass(), "SetSourceBlock", { ERASE_METHOD_PTR(UInterchangeTexture2DFactoryNode, SetSourceBlock, (int32,  const FString&), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeTexture2DFactoryNode::StaticClass(), "SetSourceBlockByCoordinates", { ERASE_METHOD_PTR(UInterchangeTexture2DFactoryNode, SetSourceBlockByCoordinates, (int32,  int32,   const FString&), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeTexture2DFactoryNode::StaticClass(), "SetSourceBlocks", { ERASE_METHOD_PTR(UInterchangeTexture2DFactoryNode, SetSourceBlocks, (const TMap<int32, FString>&), ERASE_ARGUMENT_PACK(void )) } );
}
