#include "ASRuntimeBind_50Module.h"
#include "AngelscriptBinds.h"
#include "MetasoundBuilderSubsystem.h"
void FASRuntimeBind_50Module::Bind_MetaSoundPatchBuilder()
{
			FAngelscriptBinds::AddFunctionEntry(UMetaSoundPatchBuilder::StaticClass(), "Build", { ERASE_METHOD_PTR(UMetaSoundPatchBuilder, Build, (UObject*,  const FMetaSoundBuilderOptions&) const, ERASE_ARGUMENT_PACK(  TScriptInterface<IMetaSoundDocumentInterface> )) } );
}
