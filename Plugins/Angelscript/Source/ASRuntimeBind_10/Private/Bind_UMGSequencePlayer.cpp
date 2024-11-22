#include "ASRuntimeBind_10Module.h"
#include "AngelscriptBinds.h"
#include "Animation/UMGSequencePlayer.h"
void FASRuntimeBind_10Module::Bind_UMGSequencePlayer()
{
			FAngelscriptBinds::AddFunctionEntry(UUMGSequencePlayer::StaticClass(), "GetUserTag", { ERASE_METHOD_PTR(UUMGSequencePlayer, GetUserTag, () const, ERASE_ARGUMENT_PACK(FName )) } );
			FAngelscriptBinds::AddFunctionEntry(UUMGSequencePlayer::StaticClass(), "SetUserTag", { ERASE_METHOD_PTR(UUMGSequencePlayer, SetUserTag, (FName), ERASE_ARGUMENT_PACK(void )) } );
}
