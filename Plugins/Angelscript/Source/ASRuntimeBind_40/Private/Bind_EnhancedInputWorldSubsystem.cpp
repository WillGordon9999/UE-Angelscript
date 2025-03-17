#include "ASRuntimeBind_40Module.h"
#include "AngelscriptBinds.h"
#include "EnhancedInputSubsystems.h"
#include "GameFramework/Actor.h"
void FASRuntimeBind_40Module::Bind_EnhancedInputWorldSubsystem()
{
			FAngelscriptBinds::AddFunctionEntry(UEnhancedInputWorldSubsystem::StaticClass(), "AddActorInputComponent", { ERASE_METHOD_PTR(UEnhancedInputWorldSubsystem, AddActorInputComponent, (AActor*), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UEnhancedInputWorldSubsystem::StaticClass(), "RemoveActorInputComponent", { ERASE_METHOD_PTR(UEnhancedInputWorldSubsystem, RemoveActorInputComponent, (AActor*), ERASE_ARGUMENT_PACK(bool )) } );
}
