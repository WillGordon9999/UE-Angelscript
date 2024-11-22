#include "ASRuntimeBind_50Module.h"
#include "AngelscriptBinds.h"
#include "InterchangeCameraFactoryNode.h"
void FASRuntimeBind_50Module::Bind_InterchangeStandardCameraFactoryNode()
{
			FAngelscriptBinds::AddFunctionEntry(UInterchangeStandardCameraFactoryNode::StaticClass(), "GetCustomAspectRatio", { ERASE_METHOD_PTR(UInterchangeStandardCameraFactoryNode, GetCustomAspectRatio, (float&) const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeStandardCameraFactoryNode::StaticClass(), "GetCustomFarClipPlane", { ERASE_METHOD_PTR(UInterchangeStandardCameraFactoryNode, GetCustomFarClipPlane, (float&) const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeStandardCameraFactoryNode::StaticClass(), "GetCustomFieldOfView", { ERASE_METHOD_PTR(UInterchangeStandardCameraFactoryNode, GetCustomFieldOfView, (float&) const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeStandardCameraFactoryNode::StaticClass(), "GetCustomNearClipPlane", { ERASE_METHOD_PTR(UInterchangeStandardCameraFactoryNode, GetCustomNearClipPlane, (float&) const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeStandardCameraFactoryNode::StaticClass(), "GetCustomProjectionMode", { ERASE_METHOD_PTR(UInterchangeStandardCameraFactoryNode, GetCustomProjectionMode, (TEnumAsByte<ECameraProjectionMode::Type>&) const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeStandardCameraFactoryNode::StaticClass(), "GetCustomWidth", { ERASE_METHOD_PTR(UInterchangeStandardCameraFactoryNode, GetCustomWidth, (float&) const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeStandardCameraFactoryNode::StaticClass(), "SetCustomAspectRatio", { ERASE_METHOD_PTR(UInterchangeStandardCameraFactoryNode, SetCustomAspectRatio, (const float&,  bool), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeStandardCameraFactoryNode::StaticClass(), "SetCustomFarClipPlane", { ERASE_METHOD_PTR(UInterchangeStandardCameraFactoryNode, SetCustomFarClipPlane, (const float&,  bool), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeStandardCameraFactoryNode::StaticClass(), "SetCustomFieldOfView", { ERASE_METHOD_PTR(UInterchangeStandardCameraFactoryNode, SetCustomFieldOfView, (const float&,  bool), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeStandardCameraFactoryNode::StaticClass(), "SetCustomNearClipPlane", { ERASE_METHOD_PTR(UInterchangeStandardCameraFactoryNode, SetCustomNearClipPlane, (const float&,  bool), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeStandardCameraFactoryNode::StaticClass(), "SetCustomProjectionMode", { ERASE_METHOD_PTR(UInterchangeStandardCameraFactoryNode, SetCustomProjectionMode, (const TEnumAsByte<ECameraProjectionMode::Type>&,  bool), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangeStandardCameraFactoryNode::StaticClass(), "SetCustomWidth", { ERASE_METHOD_PTR(UInterchangeStandardCameraFactoryNode, SetCustomWidth, (const float&,  bool), ERASE_ARGUMENT_PACK(bool )) } );
}
