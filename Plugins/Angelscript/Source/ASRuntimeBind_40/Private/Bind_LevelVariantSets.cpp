#include "ASRuntimeBind_40Module.h"
#include "AngelscriptBinds.h"
#include "LevelVariantSets.h"
#include "VariantSet.h"
void FASRuntimeBind_40Module::Bind_LevelVariantSets()
{
			FAngelscriptBinds::AddFunctionEntry(ULevelVariantSets::StaticClass(), "GetNumVariantSets", { ERASE_METHOD_PTR(ULevelVariantSets, GetNumVariantSets, (), ERASE_ARGUMENT_PACK(int32 )) } );
			FAngelscriptBinds::AddFunctionEntry(ULevelVariantSets::StaticClass(), "GetVariantSet", { ERASE_METHOD_PTR(ULevelVariantSets, GetVariantSet, (int32), ERASE_ARGUMENT_PACK(UVariantSet* )) } );
			FAngelscriptBinds::AddFunctionEntry(ULevelVariantSets::StaticClass(), "GetVariantSetByName", { ERASE_METHOD_PTR(ULevelVariantSets, GetVariantSetByName, (FString), ERASE_ARGUMENT_PACK(UVariantSet* )) } );
}
