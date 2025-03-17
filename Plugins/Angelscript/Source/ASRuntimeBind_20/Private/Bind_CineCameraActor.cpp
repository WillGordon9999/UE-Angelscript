#include "ASRuntimeBind_20Module.h"
#include "AngelscriptBinds.h"
#include "CineCameraActor.h"
#include "CineCameraComponent.h"
void FASRuntimeBind_20Module::Bind_CineCameraActor()
{
			FAngelscriptBinds::AddFunctionEntry(ACineCameraActor::StaticClass(), "GetCineCameraComponent", { ERASE_METHOD_PTR(ACineCameraActor, GetCineCameraComponent, () const, ERASE_ARGUMENT_PACK(UCineCameraComponent* )) } );
}
