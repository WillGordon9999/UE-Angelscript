#include "ASRuntimeBind_10Module.h"
#include "AngelscriptBinds.h"
#include "BrainComponent.h"
void FASRuntimeBind_10Module::Bind_BrainComponent()
{
			FAngelscriptBinds::AddFunctionEntry(UBrainComponent::StaticClass(), "IsPaused", { ERASE_METHOD_PTR(UBrainComponent, IsPaused, () const, ERASE_ARGUMENT_PACK(  bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UBrainComponent::StaticClass(), "IsRunning", { ERASE_METHOD_PTR(UBrainComponent, IsRunning, () const, ERASE_ARGUMENT_PACK(  bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UBrainComponent::StaticClass(), "RestartLogic", { ERASE_METHOD_PTR(UBrainComponent, RestartLogic, (), ERASE_ARGUMENT_PACK(  void )) } );
			FAngelscriptBinds::AddFunctionEntry(UBrainComponent::StaticClass(), "StartLogic", { ERASE_METHOD_PTR(UBrainComponent, StartLogic, (), ERASE_ARGUMENT_PACK(  void )) } );
			FAngelscriptBinds::AddFunctionEntry(UBrainComponent::StaticClass(), "StopLogic", { ERASE_METHOD_PTR(UBrainComponent, StopLogic, (const FString&), ERASE_ARGUMENT_PACK(  void )) } );
}
