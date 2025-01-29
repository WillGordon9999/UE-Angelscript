#include "ASRuntimeBind_70Module.h"
#include "AngelscriptBinds.h"
#include "GameplayCueNotify_Static.h"
void FASRuntimeBind_70Module::Bind_GameplayCueNotify_Static()
{
			FAngelscriptBinds::AddFunctionEntry(UGameplayCueNotify_Static::StaticClass(), "OnActive", { ERASE_METHOD_PTR(UGameplayCueNotify_Static, OnActive, (AActor*,  const FGameplayCueParameters&) const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UGameplayCueNotify_Static::StaticClass(), "OnExecute", { ERASE_METHOD_PTR(UGameplayCueNotify_Static, OnExecute, (AActor*,  const FGameplayCueParameters&) const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UGameplayCueNotify_Static::StaticClass(), "OnRemove", { ERASE_METHOD_PTR(UGameplayCueNotify_Static, OnRemove, (AActor*,  const FGameplayCueParameters&) const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UGameplayCueNotify_Static::StaticClass(), "WhileActive", { ERASE_METHOD_PTR(UGameplayCueNotify_Static, WhileActive, (AActor*,  const FGameplayCueParameters&) const, ERASE_ARGUMENT_PACK(bool )) } );
}
