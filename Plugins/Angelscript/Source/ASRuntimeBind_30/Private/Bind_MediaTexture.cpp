#include "ASRuntimeBind_30Module.h"
#include "AngelscriptBinds.h"
#include "MediaTexture.h"
#include "MediaPlayer.h"
void FASRuntimeBind_30Module::Bind_MediaTexture()
{
			FAngelscriptBinds::AddFunctionEntry(UMediaTexture::StaticClass(), "GetAspectRatio", { ERASE_METHOD_PTR(UMediaTexture, GetAspectRatio, () const, ERASE_ARGUMENT_PACK( float )) } );
			FAngelscriptBinds::AddFunctionEntry(UMediaTexture::StaticClass(), "GetHeight", { ERASE_METHOD_PTR(UMediaTexture, GetHeight, () const, ERASE_ARGUMENT_PACK( int32 )) } );
			FAngelscriptBinds::AddFunctionEntry(UMediaTexture::StaticClass(), "GetMediaPlayer", { ERASE_METHOD_PTR(UMediaTexture, GetMediaPlayer, () const, ERASE_ARGUMENT_PACK( UMediaPlayer* )) } );
			FAngelscriptBinds::AddFunctionEntry(UMediaTexture::StaticClass(), "GetTextureNumMips", { ERASE_METHOD_PTR(UMediaTexture, GetTextureNumMips, () const, ERASE_ARGUMENT_PACK( int32 )) } );
			FAngelscriptBinds::AddFunctionEntry(UMediaTexture::StaticClass(), "GetWidth", { ERASE_METHOD_PTR(UMediaTexture, GetWidth, () const, ERASE_ARGUMENT_PACK( int32 )) } );
			FAngelscriptBinds::AddFunctionEntry(UMediaTexture::StaticClass(), "SetMediaPlayer", { ERASE_METHOD_PTR(UMediaTexture, SetMediaPlayer, (UMediaPlayer*), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UMediaTexture::StaticClass(), "UpdateResource", { ERASE_METHOD_PTR(UMediaTexture, UpdateResource, (), ERASE_ARGUMENT_PACK( void )) } );
}
