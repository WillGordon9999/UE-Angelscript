#include "ASRuntimeBind_60Module.h"
#include "AngelscriptBinds.h"
#include "InterchangeCameraFactoryNode.h"
void FASRuntimeBind_60Module::Bind_InterchangePhysicalCameraFactoryNode()
{
			FAngelscriptBinds::AddFunctionEntry(UInterchangePhysicalCameraFactoryNode::StaticClass(), "GetCustomFocalLength", { ERASE_METHOD_PTR(UInterchangePhysicalCameraFactoryNode, GetCustomFocalLength, (float&) const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangePhysicalCameraFactoryNode::StaticClass(), "GetCustomFocusMethod", { ERASE_METHOD_PTR(UInterchangePhysicalCameraFactoryNode, GetCustomFocusMethod, (ECameraFocusMethod&) const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangePhysicalCameraFactoryNode::StaticClass(), "GetCustomSensorHeight", { ERASE_METHOD_PTR(UInterchangePhysicalCameraFactoryNode, GetCustomSensorHeight, (float&) const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangePhysicalCameraFactoryNode::StaticClass(), "GetCustomSensorWidth", { ERASE_METHOD_PTR(UInterchangePhysicalCameraFactoryNode, GetCustomSensorWidth, (float&) const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangePhysicalCameraFactoryNode::StaticClass(), "SetCustomFocalLength", { ERASE_METHOD_PTR(UInterchangePhysicalCameraFactoryNode, SetCustomFocalLength, (const float&,  bool), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangePhysicalCameraFactoryNode::StaticClass(), "SetCustomFocusMethod", { ERASE_METHOD_PTR(UInterchangePhysicalCameraFactoryNode, SetCustomFocusMethod, (const ECameraFocusMethod&,  bool), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangePhysicalCameraFactoryNode::StaticClass(), "SetCustomSensorHeight", { ERASE_METHOD_PTR(UInterchangePhysicalCameraFactoryNode, SetCustomSensorHeight, (const float&,  bool), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangePhysicalCameraFactoryNode::StaticClass(), "SetCustomSensorWidth", { ERASE_METHOD_PTR(UInterchangePhysicalCameraFactoryNode, SetCustomSensorWidth, (const float&,  bool), ERASE_ARGUMENT_PACK(bool )) } );
}
