#include "ASRuntimeBind_10Module.h"
#include "AngelscriptBinds.h"
#include "PhysicsEngine/PhysicsSettings.h"
void FASRuntimeBind_10Module::Bind_PhysicsSettings()
{
			FAngelscriptBinds::AddFunctionEntry(UPhysicsSettings::StaticClass(), "GetPhysicsHistoryCount", { ERASE_METHOD_PTR(UPhysicsSettings, GetPhysicsHistoryCount, () const, ERASE_ARGUMENT_PACK(int32 )) } );
}
