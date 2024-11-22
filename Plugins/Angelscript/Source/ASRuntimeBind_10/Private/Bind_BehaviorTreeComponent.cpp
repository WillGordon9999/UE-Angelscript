#include "ASRuntimeBind_10Module.h"
#include "AngelscriptBinds.h"
#include "BehaviorTree/BehaviorTreeComponent.h"
void FASRuntimeBind_10Module::Bind_BehaviorTreeComponent()
{
			FAngelscriptBinds::AddFunctionEntry(UBehaviorTreeComponent::StaticClass(), "AddCooldownTagDuration", { ERASE_METHOD_PTR(UBehaviorTreeComponent, AddCooldownTagDuration, (FGameplayTag,  float,  bool), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UBehaviorTreeComponent::StaticClass(), "GetTagCooldownEndTime", { ERASE_METHOD_PTR(UBehaviorTreeComponent, GetTagCooldownEndTime, (FGameplayTag) const, ERASE_ARGUMENT_PACK( double )) } );
			FAngelscriptBinds::AddFunctionEntry(UBehaviorTreeComponent::StaticClass(), "SetDynamicSubtree", { ERASE_METHOD_PTR(UBehaviorTreeComponent, SetDynamicSubtree, (FGameplayTag,  UBehaviorTree*), ERASE_ARGUMENT_PACK(  void )) } );
}
