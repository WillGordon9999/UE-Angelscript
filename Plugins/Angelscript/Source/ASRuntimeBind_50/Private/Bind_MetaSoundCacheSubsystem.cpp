#include "ASRuntimeBind_50Module.h"
#include "AngelscriptBinds.h"
#include "MetasoundOperatorCacheSubsystem.h"
void FASRuntimeBind_50Module::Bind_MetaSoundCacheSubsystem()
{
			FAngelscriptBinds::AddFunctionEntry(UMetaSoundCacheSubsystem::StaticClass(), "PrecacheMetaSound", { ERASE_METHOD_PTR(UMetaSoundCacheSubsystem, PrecacheMetaSound, ( UMetaSoundSource*,  int32), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UMetaSoundCacheSubsystem::StaticClass(), "RemoveCachedOperatorsForMetaSound", { ERASE_METHOD_PTR(UMetaSoundCacheSubsystem, RemoveCachedOperatorsForMetaSound, ( UMetaSoundSource*), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UMetaSoundCacheSubsystem::StaticClass(), "TouchOrPrecacheMetaSound", { ERASE_METHOD_PTR(UMetaSoundCacheSubsystem, TouchOrPrecacheMetaSound, ( UMetaSoundSource*,  int32), ERASE_ARGUMENT_PACK(void )) } );
}
