#include "ASRuntimeBind_80Module.h"
#include "AngelscriptBinds.h"
#include "TemplateSequenceActor.h"
void FASRuntimeBind_80Module::Bind_TemplateSequenceActor()
{
			FAngelscriptBinds::AddFunctionEntry(ATemplateSequenceActor::StaticClass(), "GetSequence", { ERASE_METHOD_PTR(ATemplateSequenceActor, GetSequence, () const, ERASE_ARGUMENT_PACK(UTemplateSequence* )) } );
			FAngelscriptBinds::AddFunctionEntry(ATemplateSequenceActor::StaticClass(), "LoadSequence", { ERASE_METHOD_PTR(ATemplateSequenceActor, LoadSequence, () const, ERASE_ARGUMENT_PACK(UTemplateSequence* )) } );
			FAngelscriptBinds::AddFunctionEntry(ATemplateSequenceActor::StaticClass(), "SetBinding", { ERASE_METHOD_PTR(ATemplateSequenceActor, SetBinding, (AActor*,  bool), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(ATemplateSequenceActor::StaticClass(), "SetSequence", { ERASE_METHOD_PTR(ATemplateSequenceActor, SetSequence, (UTemplateSequence*), ERASE_ARGUMENT_PACK(void )) } );
}
