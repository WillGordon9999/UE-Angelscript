#include "ASRuntimeBind_30Module.h"
#include "AngelscriptBinds.h"
#include "MediaPlaylist.h"
#include "MediaSource.h"
void FASRuntimeBind_30Module::Bind_MediaPlaylist()
{
			FAngelscriptBinds::AddFunctionEntry(UMediaPlaylist::StaticClass(), "Add", { ERASE_METHOD_PTR(UMediaPlaylist, Add, (UMediaSource*), ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UMediaPlaylist::StaticClass(), "AddFile", { ERASE_METHOD_PTR(UMediaPlaylist, AddFile, (const FString&), ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UMediaPlaylist::StaticClass(), "AddUrl", { ERASE_METHOD_PTR(UMediaPlaylist, AddUrl, (const FString&), ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UMediaPlaylist::StaticClass(), "Get", { ERASE_METHOD_PTR(UMediaPlaylist, Get, (int32), ERASE_ARGUMENT_PACK( UMediaSource* )) } );
			FAngelscriptBinds::AddFunctionEntry(UMediaPlaylist::StaticClass(), "GetNext", { ERASE_METHOD_PTR(UMediaPlaylist, GetNext, (int32&), ERASE_ARGUMENT_PACK( UMediaSource* )) } );
			FAngelscriptBinds::AddFunctionEntry(UMediaPlaylist::StaticClass(), "GetPrevious", { ERASE_METHOD_PTR(UMediaPlaylist, GetPrevious, (int32&), ERASE_ARGUMENT_PACK( UMediaSource* )) } );
			FAngelscriptBinds::AddFunctionEntry(UMediaPlaylist::StaticClass(), "GetRandom", { ERASE_METHOD_PTR(UMediaPlaylist, GetRandom, (int32&), ERASE_ARGUMENT_PACK( UMediaSource* )) } );
			FAngelscriptBinds::AddFunctionEntry(UMediaPlaylist::StaticClass(), "Insert", { ERASE_METHOD_PTR(UMediaPlaylist, Insert, (UMediaSource*,  int32), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UMediaPlaylist::StaticClass(), "Num", { ERASE_METHOD_PTR(UMediaPlaylist, Num, (), ERASE_ARGUMENT_PACK(int32 )) } );
			FAngelscriptBinds::AddFunctionEntry(UMediaPlaylist::StaticClass(), "Remove", { ERASE_METHOD_PTR(UMediaPlaylist, Remove, (UMediaSource*), ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UMediaPlaylist::StaticClass(), "RemoveAt", { ERASE_METHOD_PTR(UMediaPlaylist, RemoveAt, (int32), ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UMediaPlaylist::StaticClass(), "Replace", { ERASE_METHOD_PTR(UMediaPlaylist, Replace, (int32,  UMediaSource*), ERASE_ARGUMENT_PACK( bool )) } );
}
