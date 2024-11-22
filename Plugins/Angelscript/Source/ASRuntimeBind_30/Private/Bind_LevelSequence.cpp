#include "ASRuntimeBind_30Module.h"
#include "AngelscriptBinds.h"
#include "LevelSequence.h"
void FASRuntimeBind_30Module::Bind_LevelSequence()
{
			FAngelscriptBinds::AddFunctionEntry(ULevelSequence::StaticClass(), "CopyMetaData", { ERASE_METHOD_PTR(ULevelSequence, CopyMetaData, (UObject*), ERASE_ARGUMENT_PACK(UObject* )) } );
			FAngelscriptBinds::AddFunctionEntry(ULevelSequence::StaticClass(), "FindMetaDataByClass", { ERASE_METHOD_PTR(ULevelSequence, FindMetaDataByClass, (TSubclassOf<UObject>) const, ERASE_ARGUMENT_PACK(UObject* )) } );
			FAngelscriptBinds::AddFunctionEntry(ULevelSequence::StaticClass(), "FindOrAddMetaDataByClass", { ERASE_METHOD_PTR(ULevelSequence, FindOrAddMetaDataByClass, (TSubclassOf<UObject>), ERASE_ARGUMENT_PACK(UObject* )) } );
			FAngelscriptBinds::AddFunctionEntry(ULevelSequence::StaticClass(), "RemoveMetaDataByClass", { ERASE_METHOD_PTR(ULevelSequence, RemoveMetaDataByClass, (TSubclassOf<UObject>), ERASE_ARGUMENT_PACK(void )) } );
}
