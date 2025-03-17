#include "ASRuntimeBind_40Module.h"
#include "AngelscriptBinds.h"
#include "DatasmithImportedSequencesActor.h"
#include "LevelSequence.h"
void FASRuntimeBind_40Module::Bind_DatasmithImportedSequencesActor()
{
			FAngelscriptBinds::AddFunctionEntry(ADatasmithImportedSequencesActor::StaticClass(), "PlayLevelSequence", { ERASE_METHOD_PTR(ADatasmithImportedSequencesActor, PlayLevelSequence, (ULevelSequence*), ERASE_ARGUMENT_PACK(void )) } );
}
