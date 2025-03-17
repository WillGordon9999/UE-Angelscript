#include "ASRuntimeBind_30Module.h"
#include "AngelscriptBinds.h"
#include "LevelSequenceActor.h"
#include "UObject/NoExportTypes.h"
void FASRuntimeBind_30Module::Bind_LevelSequenceBurnInOptions()
{
			FAngelscriptBinds::AddFunctionEntry(ULevelSequenceBurnInOptions::StaticClass(), "SetBurnIn", { ERASE_METHOD_PTR(ULevelSequenceBurnInOptions, SetBurnIn, (FSoftClassPath), ERASE_ARGUMENT_PACK( void )) } );
}
