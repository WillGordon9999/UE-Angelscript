#include "ASRuntimeBind_100Module.h"
#include "AngelscriptBinds.h"
#include "ImgMediaSource.h"
#include "GameFramework/Actor.h"
void FASRuntimeBind_100Module::Bind_ImgMediaSource()
{
			FAngelscriptBinds::AddFunctionEntry(UImgMediaSource::StaticClass(), "AddTargetObject", { ERASE_METHOD_PTR(UImgMediaSource, AddTargetObject, (AActor*), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UImgMediaSource::StaticClass(), "GetProxies", { ERASE_METHOD_PTR(UImgMediaSource, GetProxies, (TArray<FString>&) const, ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UImgMediaSource::StaticClass(), "GetSequencePath", { ERASE_METHOD_PTR(UImgMediaSource, GetSequencePath, () const, ERASE_ARGUMENT_PACK(const FString )) } );
			FAngelscriptBinds::AddFunctionEntry(UImgMediaSource::StaticClass(), "RemoveTargetObject", { ERASE_METHOD_PTR(UImgMediaSource, RemoveTargetObject, (AActor*), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UImgMediaSource::StaticClass(), "SetSequencePath", { ERASE_METHOD_PTR(UImgMediaSource, SetSequencePath, (const FString&), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UImgMediaSource::StaticClass(), "SetTokenizedSequencePath", { ERASE_METHOD_PTR(UImgMediaSource, SetTokenizedSequencePath, (const FString&), ERASE_ARGUMENT_PACK(void )) } );
}
