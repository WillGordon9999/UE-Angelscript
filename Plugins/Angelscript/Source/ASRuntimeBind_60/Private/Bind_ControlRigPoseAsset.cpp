#include "ASRuntimeBind_60Module.h"
#include "AngelscriptBinds.h"
#include "Tools/ControlRigPose.h"
void FASRuntimeBind_60Module::Bind_ControlRigPoseAsset()
{
			FAngelscriptBinds::AddFunctionEntry(UControlRigPoseAsset::StaticClass(), "DoesMirrorMatch", { ERASE_METHOD_PTR(UControlRigPoseAsset, DoesMirrorMatch, (UControlRig*,  const FName&) const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UControlRigPoseAsset::StaticClass(), "GetControlNames", { ERASE_METHOD_PTR(UControlRigPoseAsset, GetControlNames, () const, ERASE_ARGUMENT_PACK(TArray<FName> )) } );
			FAngelscriptBinds::AddFunctionEntry(UControlRigPoseAsset::StaticClass(), "GetCurrentPose", { ERASE_METHOD_PTR(UControlRigPoseAsset, GetCurrentPose, (UControlRig*,  FControlRigControlPose&), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UControlRigPoseAsset::StaticClass(), "PastePose", { ERASE_METHOD_PTR(UControlRigPoseAsset, PastePose, (UControlRig*,  bool,  bool), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UControlRigPoseAsset::StaticClass(), "ReplaceControlName", { ERASE_METHOD_PTR(UControlRigPoseAsset, ReplaceControlName, (const FName&,  const FName&), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UControlRigPoseAsset::StaticClass(), "SavePose", { ERASE_METHOD_PTR(UControlRigPoseAsset, SavePose, (UControlRig*,  bool), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UControlRigPoseAsset::StaticClass(), "SelectControls", { ERASE_METHOD_PTR(UControlRigPoseAsset, SelectControls, (UControlRig*,  bool), ERASE_ARGUMENT_PACK(void )) } );
}
