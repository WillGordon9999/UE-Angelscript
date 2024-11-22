#include "ASRuntimeBind_40Module.h"
#include "AngelscriptBinds.h"
#include "GroundTruthData.h"
void FASRuntimeBind_40Module::Bind_GroundTruthData()
{
			FAngelscriptBinds::AddFunctionEntry(UGroundTruthData::StaticClass(), "CanModify", { ERASE_METHOD_PTR(UGroundTruthData, CanModify, () const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UGroundTruthData::StaticClass(), "LoadObject", { ERASE_METHOD_PTR(UGroundTruthData, LoadObject, (), ERASE_ARGUMENT_PACK(UObject* )) } );
			FAngelscriptBinds::AddFunctionEntry(UGroundTruthData::StaticClass(), "ResetObject", { ERASE_METHOD_PTR(UGroundTruthData, ResetObject, (), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UGroundTruthData::StaticClass(), "SaveObject", { ERASE_METHOD_PTR(UGroundTruthData, SaveObject, (UObject*), ERASE_ARGUMENT_PACK(void )) } );
}
