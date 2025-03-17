#include "ASRuntimeBind_30Module.h"
#include "AngelscriptBinds.h"
#include "MediaComponent.h"
#include "MediaPlayer.h"
#include "MediaTexture.h"
void FASRuntimeBind_30Module::Bind_MediaComponent()
{
			FAngelscriptBinds::AddFunctionEntry(UMediaComponent::StaticClass(), "GetMediaPlayer", { ERASE_METHOD_PTR(UMediaComponent, GetMediaPlayer, () const, ERASE_ARGUMENT_PACK( UMediaPlayer* )) } );
			FAngelscriptBinds::AddFunctionEntry(UMediaComponent::StaticClass(), "GetMediaTexture", { ERASE_METHOD_PTR(UMediaComponent, GetMediaTexture, () const, ERASE_ARGUMENT_PACK( UMediaTexture* )) } );
}
