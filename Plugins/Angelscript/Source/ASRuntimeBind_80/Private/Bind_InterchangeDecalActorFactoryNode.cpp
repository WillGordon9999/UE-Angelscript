#include "ASRuntimeBind_80Module.h"
#include "AngelscriptBinds.h"
#include "InterchangeDecalActorFactoryNode.h"
#include "UObject/NoExportTypes.h"
void FASRuntimeBind_80Module::Bind_InterchangeDecalActorFactoryNode()
{
			FAngelscriptBinds::AddFunctionEntry(UInterchangeDecalActorFactoryNode::StaticClass(), "GetCustomDecalMaterialPathName", { ERASE_METHOD_PTR(UInterchangeDecalActorFactoryNode, GetCustomDecalMaterialPathName, (FString&) const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeDecalActorFactoryNode::StaticClass(), "GetCustomDecalSize", { ERASE_METHOD_PTR(UInterchangeDecalActorFactoryNode, GetCustomDecalSize, (FVector&) const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeDecalActorFactoryNode::StaticClass(), "GetCustomSortOrder", { ERASE_METHOD_PTR(UInterchangeDecalActorFactoryNode, GetCustomSortOrder, (int32&) const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeDecalActorFactoryNode::StaticClass(), "GetObjectClass", { ERASE_METHOD_PTR(UInterchangeDecalActorFactoryNode, GetObjectClass, () const, ERASE_ARGUMENT_PACK(UClass* )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeDecalActorFactoryNode::StaticClass(), "SetCustomDecalMaterialPathName", { ERASE_METHOD_PTR(UInterchangeDecalActorFactoryNode, SetCustomDecalMaterialPathName, (const FString&), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeDecalActorFactoryNode::StaticClass(), "SetCustomDecalSize", { ERASE_METHOD_PTR(UInterchangeDecalActorFactoryNode, SetCustomDecalSize, (const FVector&,  bool), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeDecalActorFactoryNode::StaticClass(), "SetCustomSortOrder", { ERASE_METHOD_PTR(UInterchangeDecalActorFactoryNode, SetCustomSortOrder, (const int32&,  bool), ERASE_ARGUMENT_PACK(bool )) } );
}
