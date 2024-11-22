#include "ASRuntimeBind_70Module.h"
#include "AngelscriptBinds.h"
#include "MetasoundBuilderSubsystem.h"
void FASRuntimeBind_70Module::Bind_MetaSoundPatchBuilder()
{
			FAngelscriptBinds::AddFunctionEntry(UMetaSoundPatchBuilder::StaticClass(), "Build", { ERASE_METHOD_PTR(UMetaSoundPatchBuilder, Build, (UObject*,  const FMetaSoundBuilderOptions&) const, ERASE_ARGUMENT_PACK(  TScriptInterface<IMetaSoundDocumentInterface> )) } );
}
