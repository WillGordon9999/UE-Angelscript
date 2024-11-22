#include "ASRuntimeBind_10Module.h"
#include "AngelscriptBinds.h"
#include "Camera/CameraActor.h"
void FASRuntimeBind_10Module::Bind_CameraActor()
{
			FAngelscriptBinds::AddFunctionEntry(ACameraActor::StaticClass(), "GetAutoActivatePlayerIndex", { ERASE_METHOD_PTR(ACameraActor, GetAutoActivatePlayerIndex, () const, ERASE_ARGUMENT_PACK( int32 )) } );
}
