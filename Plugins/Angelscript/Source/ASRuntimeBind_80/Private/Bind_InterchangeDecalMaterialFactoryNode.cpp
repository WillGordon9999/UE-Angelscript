#include "ASRuntimeBind_80Module.h"
#include "AngelscriptBinds.h"
#include "InterchangeDecalMaterialFactoryNode.h"
#include "UObject/NoExportTypes.h"
void FASRuntimeBind_80Module::Bind_InterchangeDecalMaterialFactoryNode()
{
			FAngelscriptBinds::AddFunctionEntry(UInterchangeDecalMaterialFactoryNode::StaticClass(), "GetCustomDiffuseTexturePath", { ERASE_METHOD_PTR(UInterchangeDecalMaterialFactoryNode, GetCustomDiffuseTexturePath, (FString&) const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeDecalMaterialFactoryNode::StaticClass(), "GetCustomNormalTexturePath", { ERASE_METHOD_PTR(UInterchangeDecalMaterialFactoryNode, GetCustomNormalTexturePath, (FString&) const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeDecalMaterialFactoryNode::StaticClass(), "GetObjectClass", { ERASE_METHOD_PTR(UInterchangeDecalMaterialFactoryNode, GetObjectClass, () const, ERASE_ARGUMENT_PACK(UClass* )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeDecalMaterialFactoryNode::StaticClass(), "SetCustomDiffuseTexturePath", { ERASE_METHOD_PTR(UInterchangeDecalMaterialFactoryNode, SetCustomDiffuseTexturePath, (const FString&), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeDecalMaterialFactoryNode::StaticClass(), "SetCustomNormalTexturePath", { ERASE_METHOD_PTR(UInterchangeDecalMaterialFactoryNode, SetCustomNormalTexturePath, (const FString&), ERASE_ARGUMENT_PACK(bool )) } );
}
