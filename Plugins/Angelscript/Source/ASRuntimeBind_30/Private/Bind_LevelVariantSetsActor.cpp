#include "ASRuntimeBind_30Module.h"
#include "AngelscriptBinds.h"
#include "LevelVariantSetsActor.h"
void FASRuntimeBind_30Module::Bind_LevelVariantSetsActor()
{
			FAngelscriptBinds::AddFunctionEntry(ALevelVariantSetsActor::StaticClass(), "GetLevelVariantSets", { ERASE_METHOD_PTR(ALevelVariantSetsActor, GetLevelVariantSets, (bool), ERASE_ARGUMENT_PACK(ULevelVariantSets* )) } );
			FAngelscriptBinds::AddFunctionEntry(ALevelVariantSetsActor::StaticClass(), "SetLevelVariantSets", { ERASE_METHOD_PTR(ALevelVariantSetsActor, SetLevelVariantSets, (ULevelVariantSets*), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(ALevelVariantSetsActor::StaticClass(), "SwitchOnVariantByIndex", { ERASE_METHOD_PTR(ALevelVariantSetsActor, SwitchOnVariantByIndex, (int32,  int32), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(ALevelVariantSetsActor::StaticClass(), "SwitchOnVariantByName", { ERASE_METHOD_PTR(ALevelVariantSetsActor, SwitchOnVariantByName, (FString,  FString), ERASE_ARGUMENT_PACK(bool )) } );
}
