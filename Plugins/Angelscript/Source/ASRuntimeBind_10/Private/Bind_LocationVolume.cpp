#include "ASRuntimeBind_10Module.h"
#include "AngelscriptBinds.h"
#include "LocationVolume.h"
void FASRuntimeBind_10Module::Bind_LocationVolume()
{
			FAngelscriptBinds::AddFunctionEntry(ALocationVolume::StaticClass(), "IsLoaded", { ERASE_METHOD_PTR(ALocationVolume, IsLoaded, () const, ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(ALocationVolume::StaticClass(), "Load", { ERASE_METHOD_PTR(ALocationVolume, Load, (), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(ALocationVolume::StaticClass(), "Unload", { ERASE_METHOD_PTR(ALocationVolume, Unload, (), ERASE_ARGUMENT_PACK( void )) } );
}
