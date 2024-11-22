#include "ASRuntimeBind_0Module.h"
#include "AngelscriptBinds.h"
#include "GameMapsSettings.h"
void FASRuntimeBind_0Module::Bind_GameMapsSettings()
{
			FAngelscriptBinds::AddFunctionEntry(UGameMapsSettings::StaticClass(), "GetSkipAssigningGamepadToPlayer1", { ERASE_METHOD_PTR(UGameMapsSettings, GetSkipAssigningGamepadToPlayer1, () const, ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UGameMapsSettings::StaticClass(), "SetSkipAssigningGamepadToPlayer1", { ERASE_METHOD_PTR(UGameMapsSettings, SetSkipAssigningGamepadToPlayer1, (bool), ERASE_ARGUMENT_PACK( void )) } );
}
