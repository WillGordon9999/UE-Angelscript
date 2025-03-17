#include "ASRuntimeBind_80Module.h"
#include "AngelscriptBinds.h"
#include "InterchangeActorFactoryNode.h"
#include "UObject/NoExportTypes.h"
void FASRuntimeBind_80Module::Bind_InterchangeActorFactoryNode()
{
			FAngelscriptBinds::AddFunctionEntry(UInterchangeActorFactoryNode::StaticClass(), "GetCustomActorClassName", { ERASE_METHOD_PTR(UInterchangeActorFactoryNode, GetCustomActorClassName, (FString&) const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeActorFactoryNode::StaticClass(), "GetCustomGlobalTransform", { ERASE_METHOD_PTR(UInterchangeActorFactoryNode, GetCustomGlobalTransform, (FTransform&) const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeActorFactoryNode::StaticClass(), "GetCustomLocalTransform", { ERASE_METHOD_PTR(UInterchangeActorFactoryNode, GetCustomLocalTransform, (FTransform&) const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeActorFactoryNode::StaticClass(), "GetCustomMobility", { ERASE_METHOD_PTR(UInterchangeActorFactoryNode, GetCustomMobility, (uint8&) const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeActorFactoryNode::StaticClass(), "SetCustomActorClassName", { ERASE_METHOD_PTR(UInterchangeActorFactoryNode, SetCustomActorClassName, (const FString&), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeActorFactoryNode::StaticClass(), "SetCustomGlobalTransform", { ERASE_METHOD_PTR(UInterchangeActorFactoryNode, SetCustomGlobalTransform, (const FTransform&,  bool), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeActorFactoryNode::StaticClass(), "SetCustomLocalTransform", { ERASE_METHOD_PTR(UInterchangeActorFactoryNode, SetCustomLocalTransform, (const FTransform&,  bool), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeActorFactoryNode::StaticClass(), "SetCustomMobility", { ERASE_METHOD_PTR(UInterchangeActorFactoryNode, SetCustomMobility, (const uint8&,  bool), ERASE_ARGUMENT_PACK(bool )) } );
}
