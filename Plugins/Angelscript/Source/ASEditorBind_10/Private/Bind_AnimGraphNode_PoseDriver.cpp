#include "ASEditorBind_10Module.h"
#include "AngelscriptBinds.h"
#include "AnimGraphNode_PoseDriver.h"
#include "AnimNodes/AnimNode_PoseDriver.h"
#include "RBF/RBFSolver.h"
void FASEditorBind_10Module::Bind_AnimGraphNode_PoseDriver()
{
			FAngelscriptBinds::AddFunctionEntry(UAnimGraphNode_PoseDriver::StaticClass(), "CopyTargetsFromPoseAsset", { ERASE_METHOD_PTR(UAnimGraphNode_PoseDriver, CopyTargetsFromPoseAsset, (), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UAnimGraphNode_PoseDriver::StaticClass(), "GetDrivingBoneNames", { ERASE_METHOD_PTR(UAnimGraphNode_PoseDriver, GetDrivingBoneNames, (TArray<FName>&), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UAnimGraphNode_PoseDriver::StaticClass(), "GetPoseDriverOutput", { ERASE_METHOD_PTR(UAnimGraphNode_PoseDriver, GetPoseDriverOutput, (), ERASE_ARGUMENT_PACK(EPoseDriverOutput& )) } );
			FAngelscriptBinds::AddFunctionEntry(UAnimGraphNode_PoseDriver::StaticClass(), "GetPoseDriverSource", { ERASE_METHOD_PTR(UAnimGraphNode_PoseDriver, GetPoseDriverSource, (), ERASE_ARGUMENT_PACK(EPoseDriverSource& )) } );
			FAngelscriptBinds::AddFunctionEntry(UAnimGraphNode_PoseDriver::StaticClass(), "GetRBFParameters", { ERASE_METHOD_PTR(UAnimGraphNode_PoseDriver, GetRBFParameters, (), ERASE_ARGUMENT_PACK(FRBFParams& )) } );
			FAngelscriptBinds::AddFunctionEntry(UAnimGraphNode_PoseDriver::StaticClass(), "GetSourceBoneNames", { ERASE_METHOD_PTR(UAnimGraphNode_PoseDriver, GetSourceBoneNames, (TArray<FName>&), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UAnimGraphNode_PoseDriver::StaticClass(), "SetDrivingBones", { ERASE_METHOD_PTR(UAnimGraphNode_PoseDriver, SetDrivingBones, (const TArray<FName>&), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UAnimGraphNode_PoseDriver::StaticClass(), "SetPoseDriverOutput", { ERASE_METHOD_PTR(UAnimGraphNode_PoseDriver, SetPoseDriverOutput, (EPoseDriverOutput), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UAnimGraphNode_PoseDriver::StaticClass(), "SetPoseDriverSource", { ERASE_METHOD_PTR(UAnimGraphNode_PoseDriver, SetPoseDriverSource, (EPoseDriverSource), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UAnimGraphNode_PoseDriver::StaticClass(), "SetRBFParameters", { ERASE_METHOD_PTR(UAnimGraphNode_PoseDriver, SetRBFParameters, (FRBFParams), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UAnimGraphNode_PoseDriver::StaticClass(), "SetSourceBones", { ERASE_METHOD_PTR(UAnimGraphNode_PoseDriver, SetSourceBones, (const TArray<FName>&), ERASE_ARGUMENT_PACK(void )) } );
}
