#include "ASEditorBind_30Module.h"
#include "AngelscriptBinds.h"
#include "RetargetEditor/IKRetargeterController.h"
void FASEditorBind_30Module::Bind_IKRetargeterController()
{
			FAngelscriptBinds::AddFunctionEntry(UIKRetargeterController::StaticClass(), "AddRetargetOp", { ERASE_METHOD_PTR(UIKRetargeterController, AddRetargetOp, (TSubclassOf<URetargetOpBase>) const, ERASE_ARGUMENT_PACK(int32 )) } );
			FAngelscriptBinds::AddFunctionEntry(UIKRetargeterController::StaticClass(), "AutoAlignAllBones", { ERASE_METHOD_PTR(UIKRetargeterController, AutoAlignAllBones, (ERetargetSourceOrTarget) const, ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UIKRetargeterController::StaticClass(), "AutoAlignBones", { ERASE_METHOD_PTR(UIKRetargeterController, AutoAlignBones, (const TArray<FName>&,  const ERetargetAutoAlignMethod,  ERetargetSourceOrTarget) const, ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UIKRetargeterController::StaticClass(), "AutoMapChains", { ERASE_METHOD_PTR(UIKRetargeterController, AutoMapChains, (const EAutoMapChainType,  const bool) const, ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UIKRetargeterController::StaticClass(), "CreateRetargetPose", { ERASE_METHOD_PTR(UIKRetargeterController, CreateRetargetPose, (const FName&,  const ERetargetSourceOrTarget) const, ERASE_ARGUMENT_PACK(FName )) } );
			FAngelscriptBinds::AddFunctionEntry(UIKRetargeterController::StaticClass(), "DuplicateRetargetPose", { ERASE_METHOD_PTR(UIKRetargeterController, DuplicateRetargetPose, (const FName,  const FName,  const ERetargetSourceOrTarget) const, ERASE_ARGUMENT_PACK(FName )) } );
			FAngelscriptBinds::AddFunctionEntry(UIKRetargeterController::StaticClass(), "GetAllChainSettings", { ERASE_METHOD_PTR(UIKRetargeterController, GetAllChainSettings, () const, ERASE_ARGUMENT_PACK(const TArray<URetargetChainSettings*>& )) } );
			FAngelscriptBinds::AddFunctionEntry(UIKRetargeterController::StaticClass(), "GetCurrentRetargetPose", { ERASE_METHOD_PTR(UIKRetargeterController, GetCurrentRetargetPose, (const ERetargetSourceOrTarget) const, ERASE_ARGUMENT_PACK(FIKRetargetPose& )) } );
			FAngelscriptBinds::AddFunctionEntry(UIKRetargeterController::StaticClass(), "GetCurrentRetargetPoseName", { ERASE_METHOD_PTR(UIKRetargeterController, GetCurrentRetargetPoseName, (const ERetargetSourceOrTarget) const, ERASE_ARGUMENT_PACK(FName )) } );
			FAngelscriptBinds::AddFunctionEntry(UIKRetargeterController::StaticClass(), "GetGlobalSettings", { ERASE_METHOD_PTR(UIKRetargeterController, GetGlobalSettings, () const, ERASE_ARGUMENT_PACK(FRetargetGlobalSettings )) } );
			FAngelscriptBinds::AddFunctionEntry(UIKRetargeterController::StaticClass(), "GetIKRig", { ERASE_METHOD_PTR(UIKRetargeterController, GetIKRig, (const ERetargetSourceOrTarget) const, ERASE_ARGUMENT_PACK(const UIKRigDefinition* )) } );
			FAngelscriptBinds::AddFunctionEntry(UIKRetargeterController::StaticClass(), "GetIndexOfRetargetOp", { ERASE_METHOD_PTR(UIKRetargeterController, GetIndexOfRetargetOp, (URetargetOpBase*) const, ERASE_ARGUMENT_PACK(int32 )) } );
			FAngelscriptBinds::AddFunctionEntry(UIKRetargeterController::StaticClass(), "GetNumRetargetOps", { ERASE_METHOD_PTR(UIKRetargeterController, GetNumRetargetOps, () const, ERASE_ARGUMENT_PACK(int32 )) } );
			FAngelscriptBinds::AddFunctionEntry(UIKRetargeterController::StaticClass(), "GetPreviewMesh", { ERASE_METHOD_PTR(UIKRetargeterController, GetPreviewMesh, (const ERetargetSourceOrTarget) const, ERASE_ARGUMENT_PACK(USkeletalMesh* )) } );
			FAngelscriptBinds::AddFunctionEntry(UIKRetargeterController::StaticClass(), "GetRetargetChainSettings", { ERASE_METHOD_PTR(UIKRetargeterController, GetRetargetChainSettings, (const FName&) const, ERASE_ARGUMENT_PACK(FTargetChainSettings )) } );
			FAngelscriptBinds::AddFunctionEntry(UIKRetargeterController::StaticClass(), "GetRetargetOpAtIndex", { ERASE_METHOD_PTR(UIKRetargeterController, GetRetargetOpAtIndex, (int32) const, ERASE_ARGUMENT_PACK(URetargetOpBase* )) } );
			FAngelscriptBinds::AddFunctionEntry(UIKRetargeterController::StaticClass(), "GetRetargetOpEnabled", { ERASE_METHOD_PTR(UIKRetargeterController, GetRetargetOpEnabled, (int32) const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UIKRetargeterController::StaticClass(), "GetRetargetPoses", { ERASE_METHOD_PTR(UIKRetargeterController, GetRetargetPoses, (const ERetargetSourceOrTarget) const, ERASE_ARGUMENT_PACK(TMap<FName, FIKRetargetPose>& )) } );
			FAngelscriptBinds::AddFunctionEntry(UIKRetargeterController::StaticClass(), "GetRootOffsetInRetargetPose", { ERASE_METHOD_PTR(UIKRetargeterController, GetRootOffsetInRetargetPose, (const ERetargetSourceOrTarget) const, ERASE_ARGUMENT_PACK(FVector )) } );
			FAngelscriptBinds::AddFunctionEntry(UIKRetargeterController::StaticClass(), "GetRootSettings", { ERASE_METHOD_PTR(UIKRetargeterController, GetRootSettings, () const, ERASE_ARGUMENT_PACK(FTargetRootSettings )) } );
			FAngelscriptBinds::AddFunctionEntry(UIKRetargeterController::StaticClass(), "GetRotationOffsetForRetargetPoseBone", { ERASE_METHOD_PTR(UIKRetargeterController, GetRotationOffsetForRetargetPoseBone, (
		const FName&, 
		const ERetargetSourceOrTarget) const, ERASE_ARGUMENT_PACK(FQuat )) } );
			FAngelscriptBinds::AddFunctionEntry(UIKRetargeterController::StaticClass(), "GetSourceChain", { ERASE_METHOD_PTR(UIKRetargeterController, GetSourceChain, (const FName&) const, ERASE_ARGUMENT_PACK(FName )) } );
			FAngelscriptBinds::AddFunctionEntry(UIKRetargeterController::StaticClass(), "MoveRetargetOpInStack", { ERASE_METHOD_PTR(UIKRetargeterController, MoveRetargetOpInStack, (int32,  int32) const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UIKRetargeterController::StaticClass(), "RemoveAllOps", { ERASE_METHOD_PTR(UIKRetargeterController, RemoveAllOps, () const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UIKRetargeterController::StaticClass(), "RemoveRetargetOp", { ERASE_METHOD_PTR(UIKRetargeterController, RemoveRetargetOp, (const int32) const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UIKRetargeterController::StaticClass(), "RemoveRetargetPose", { ERASE_METHOD_PTR(UIKRetargeterController, RemoveRetargetPose, (const FName&,  const ERetargetSourceOrTarget) const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UIKRetargeterController::StaticClass(), "RenameRetargetPose", { ERASE_METHOD_PTR(UIKRetargeterController, RenameRetargetPose, (const FName,  const FName,  const ERetargetSourceOrTarget) const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UIKRetargeterController::StaticClass(), "ResetRetargetPose", { ERASE_METHOD_PTR(UIKRetargeterController, ResetRetargetPose, (const FName&,  const TArray<FName>&,  const ERetargetSourceOrTarget) const, ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UIKRetargeterController::StaticClass(), "SetCurrentRetargetPose", { ERASE_METHOD_PTR(UIKRetargeterController, SetCurrentRetargetPose, (FName,  const ERetargetSourceOrTarget) const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UIKRetargeterController::StaticClass(), "SetGlobalSettings", { ERASE_METHOD_PTR(UIKRetargeterController, SetGlobalSettings, (const FRetargetGlobalSettings&) const, ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UIKRetargeterController::StaticClass(), "SetIKRig", { ERASE_METHOD_PTR(UIKRetargeterController, SetIKRig, (const ERetargetSourceOrTarget,  UIKRigDefinition*) const, ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UIKRetargeterController::StaticClass(), "SetPreviewMesh", { ERASE_METHOD_PTR(UIKRetargeterController, SetPreviewMesh, (const ERetargetSourceOrTarget,  USkeletalMesh*) const, ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UIKRetargeterController::StaticClass(), "SetRetargetChainSettings", { ERASE_METHOD_PTR(UIKRetargeterController, SetRetargetChainSettings, (const FName&,  const FTargetChainSettings&) const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UIKRetargeterController::StaticClass(), "SetRetargetOpEnabled", { ERASE_METHOD_PTR(UIKRetargeterController, SetRetargetOpEnabled, (int32,  bool) const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UIKRetargeterController::StaticClass(), "SetRootOffsetInRetargetPose", { ERASE_METHOD_PTR(UIKRetargeterController, SetRootOffsetInRetargetPose, (
		const FVector&, 
		const ERetargetSourceOrTarget) const, ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UIKRetargeterController::StaticClass(), "SetRootSettings", { ERASE_METHOD_PTR(UIKRetargeterController, SetRootSettings, (const FTargetRootSettings&) const, ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UIKRetargeterController::StaticClass(), "SetRotationOffsetForRetargetPoseBone", { ERASE_METHOD_PTR(UIKRetargeterController, SetRotationOffsetForRetargetPoseBone, (
		const FName&, 
		const FQuat&, 
		const ERetargetSourceOrTarget) const, ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UIKRetargeterController::StaticClass(), "SetSourceChain", { ERASE_METHOD_PTR(UIKRetargeterController, SetSourceChain, (FName,  FName) const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UIKRetargeterController::StaticClass(), "SnapBoneToGround", { ERASE_METHOD_PTR(UIKRetargeterController, SnapBoneToGround, (FName,  ERetargetSourceOrTarget), ERASE_ARGUMENT_PACK(void )) } );
}
