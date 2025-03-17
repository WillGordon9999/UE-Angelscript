#include "ASRuntimeBind_40Module.h"
#include "AngelscriptBinds.h"
#include "SwitchActor.h"
#include "GameFramework/Actor.h"
void FASRuntimeBind_40Module::Bind_SwitchActor()
{
			FAngelscriptBinds::AddFunctionEntry(ASwitchActor::StaticClass(), "GetOptions", { ERASE_METHOD_PTR(ASwitchActor, GetOptions, () const, ERASE_ARGUMENT_PACK(TArray<AActor*> )) } );
			FAngelscriptBinds::AddFunctionEntry(ASwitchActor::StaticClass(), "GetSelectedOption", { ERASE_METHOD_PTR(ASwitchActor, GetSelectedOption, () const, ERASE_ARGUMENT_PACK(int32 )) } );
			FAngelscriptBinds::AddFunctionEntry(ASwitchActor::StaticClass(), "SelectOption", { ERASE_METHOD_PTR(ASwitchActor, SelectOption, (int32), ERASE_ARGUMENT_PACK(void )) } );
}
