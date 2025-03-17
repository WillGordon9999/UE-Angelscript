#include "ASRuntimeBind_60Module.h"
#include "AngelscriptBinds.h"
#include "Abilities/Tasks/AbilityTask_ApplyRootMotionJumpForce.h"
void FASRuntimeBind_60Module::Bind_AbilityTask_ApplyRootMotionJumpForce()
{
			FAngelscriptBinds::AddFunctionEntry(UAbilityTask_ApplyRootMotionJumpForce::StaticClass(), "Finish", { ERASE_METHOD_PTR(UAbilityTask_ApplyRootMotionJumpForce, Finish, (), ERASE_ARGUMENT_PACK(void )) } );
}
