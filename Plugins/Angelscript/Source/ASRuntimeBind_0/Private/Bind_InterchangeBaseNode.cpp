#include "ASRuntimeBind_0Module.h"
#include "AngelscriptBinds.h"
#include "Nodes/InterchangeBaseNode.h"
void FASRuntimeBind_0Module::Bind_InterchangeBaseNode()
{
			FAngelscriptBinds::AddFunctionEntry(UInterchangeBaseNode::StaticClass(), "AddBooleanAttribute", { ERASE_METHOD_PTR(UInterchangeBaseNode, AddBooleanAttribute, (const FString&,  const bool&), ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeBaseNode::StaticClass(), "AddDoubleAttribute", { ERASE_METHOD_PTR(UInterchangeBaseNode, AddDoubleAttribute, (const FString&,  const double&), ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeBaseNode::StaticClass(), "AddFloatAttribute", { ERASE_METHOD_PTR(UInterchangeBaseNode, AddFloatAttribute, (const FString&,  const float&), ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeBaseNode::StaticClass(), "AddGuidAttribute", { ERASE_METHOD_PTR(UInterchangeBaseNode, AddGuidAttribute, (const FString&,  const FGuid&), ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeBaseNode::StaticClass(), "AddInt32Attribute", { ERASE_METHOD_PTR(UInterchangeBaseNode, AddInt32Attribute, (const FString&,  const int32&), ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeBaseNode::StaticClass(), "AddLinearColorAttribute", { ERASE_METHOD_PTR(UInterchangeBaseNode, AddLinearColorAttribute, (const FString&,  const FLinearColor&), ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeBaseNode::StaticClass(), "AddStringAttribute", { ERASE_METHOD_PTR(UInterchangeBaseNode, AddStringAttribute, (const FString&,  const FString&), ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeBaseNode::StaticClass(), "AddTargetNodeUid", { ERASE_METHOD_PTR(UInterchangeBaseNode, AddTargetNodeUid, (const FString&) const, ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeBaseNode::StaticClass(), "AddVector2Attribute", { ERASE_METHOD_PTR(UInterchangeBaseNode, AddVector2Attribute, (const FString&,  const FVector2f&), ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeBaseNode::StaticClass(), "GetAssetName", { ERASE_METHOD_PTR(UInterchangeBaseNode, GetAssetName, () const, ERASE_ARGUMENT_PACK(  FString )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeBaseNode::StaticClass(), "GetBooleanAttribute", { ERASE_METHOD_PTR(UInterchangeBaseNode, GetBooleanAttribute, (const FString&,  bool&) const, ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeBaseNode::StaticClass(), "GetDisplayLabel", { ERASE_METHOD_PTR(UInterchangeBaseNode, GetDisplayLabel, () const, ERASE_ARGUMENT_PACK( FString )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeBaseNode::StaticClass(), "GetDoubleAttribute", { ERASE_METHOD_PTR(UInterchangeBaseNode, GetDoubleAttribute, (const FString&,  double&) const, ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeBaseNode::StaticClass(), "GetFloatAttribute", { ERASE_METHOD_PTR(UInterchangeBaseNode, GetFloatAttribute, (const FString&,  float&) const, ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeBaseNode::StaticClass(), "GetGuidAttribute", { ERASE_METHOD_PTR(UInterchangeBaseNode, GetGuidAttribute, (const FString&,  FGuid&) const, ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeBaseNode::StaticClass(), "GetInt32Attribute", { ERASE_METHOD_PTR(UInterchangeBaseNode, GetInt32Attribute, (const FString&,  int32&) const, ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeBaseNode::StaticClass(), "GetLinearColorAttribute", { ERASE_METHOD_PTR(UInterchangeBaseNode, GetLinearColorAttribute, (const FString&,  FLinearColor&) const, ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeBaseNode::StaticClass(), "GetNodeContainerType", { ERASE_METHOD_PTR(UInterchangeBaseNode, GetNodeContainerType, () const, ERASE_ARGUMENT_PACK( EInterchangeNodeContainerType )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeBaseNode::StaticClass(), "GetParentUid", { ERASE_METHOD_PTR(UInterchangeBaseNode, GetParentUid, () const, ERASE_ARGUMENT_PACK( FString )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeBaseNode::StaticClass(), "GetStringAttribute", { ERASE_METHOD_PTR(UInterchangeBaseNode, GetStringAttribute, (const FString&,  FString&) const, ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeBaseNode::StaticClass(), "GetTargetNodeCount", { ERASE_METHOD_PTR(UInterchangeBaseNode, GetTargetNodeCount, () const, ERASE_ARGUMENT_PACK( int32 )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeBaseNode::StaticClass(), "GetTargetNodeUids", { ERASE_METHOD_PTR(UInterchangeBaseNode, GetTargetNodeUids, (TArray<FString>&) const, ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeBaseNode::StaticClass(), "GetUniqueID", { ERASE_METHOD_PTR(UInterchangeBaseNode, GetUniqueID, () const, ERASE_ARGUMENT_PACK( FString )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeBaseNode::StaticClass(), "GetVector2Attribute", { ERASE_METHOD_PTR(UInterchangeBaseNode, GetVector2Attribute, (const FString&,  FVector2f&) const, ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeBaseNode::StaticClass(), "InitializeNode", { ERASE_METHOD_PTR(UInterchangeBaseNode, InitializeNode, (const FString&,  const FString&,  const EInterchangeNodeContainerType), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeBaseNode::StaticClass(), "IsEnabled", { ERASE_METHOD_PTR(UInterchangeBaseNode, IsEnabled, () const, ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeBaseNode::StaticClass(), "RemoveAttribute", { ERASE_METHOD_PTR(UInterchangeBaseNode, RemoveAttribute, (const FString&), ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeBaseNode::StaticClass(), "RemoveTargetNodeUid", { ERASE_METHOD_PTR(UInterchangeBaseNode, RemoveTargetNodeUid, (const FString&) const, ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeBaseNode::StaticClass(), "SetAssetName", { ERASE_METHOD_PTR(UInterchangeBaseNode, SetAssetName, (const FString&), ERASE_ARGUMENT_PACK(  bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeBaseNode::StaticClass(), "SetDisplayLabel", { ERASE_METHOD_PTR(UInterchangeBaseNode, SetDisplayLabel, (const FString&), ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeBaseNode::StaticClass(), "SetEnabled", { ERASE_METHOD_PTR(UInterchangeBaseNode, SetEnabled, (const bool), ERASE_ARGUMENT_PACK( bool )) } );
}
