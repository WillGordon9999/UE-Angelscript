#include "ASRuntimeBind_50Module.h"
#include "AngelscriptBinds.h"
#include "ActorComponents/IKRigComponent.h"
#include "Rig/IKRigDataTypes.h"
#include "UObject/NoExportTypes.h"
void FASRuntimeBind_50Module::Bind_IKRigComponent()
{
			FAngelscriptBinds::AddFunctionEntry(UIKRigComponent::StaticClass(), "ClearAllGoals", { ERASE_METHOD_PTR(UIKRigComponent, ClearAllGoals, (), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UIKRigComponent::StaticClass(), "SetIKRigGoal", { ERASE_METHOD_PTR(UIKRigComponent, SetIKRigGoal, (const FIKRigGoal&), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UIKRigComponent::StaticClass(), "SetIKRigGoalPositionAndRotation", { ERASE_METHOD_PTR(UIKRigComponent, SetIKRigGoalPositionAndRotation, (
        const FName, 
        const FVector, 
        const FQuat, 
        const float, 
        const float), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UIKRigComponent::StaticClass(), "SetIKRigGoalTransform", { ERASE_METHOD_PTR(UIKRigComponent, SetIKRigGoalTransform, (
        const FName, 
        const FTransform, 
        const float, 
        const float), ERASE_ARGUMENT_PACK(void )) } );
}
