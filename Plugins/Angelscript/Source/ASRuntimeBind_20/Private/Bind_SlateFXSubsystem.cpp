#include "ASRuntimeBind_20Module.h"
#include "AngelscriptBinds.h"
#include "FX/SlateFXSubsystem.h"
#include "FX/SlateRHIPostBufferProcessor.h"
#include "Rendering/SlateRendererTypes.h"
void FASRuntimeBind_20Module::Bind_SlateFXSubsystem()
{
			FAngelscriptBinds::AddFunctionEntry(USlateFXSubsystem::StaticClass(), "GetSlatePostProcessor", { ERASE_METHOD_PTR(USlateFXSubsystem, GetSlatePostProcessor, (ESlatePostRT), ERASE_ARGUMENT_PACK(USlateRHIPostBufferProcessor* )) } );
}
