#include "ASRuntimeBind_80Module.h"
#include "AngelscriptBinds.h"
#include "PaperFlipbook.h"
#include "PaperSprite.h"
void FASRuntimeBind_80Module::Bind_PaperFlipbook()
{
			FAngelscriptBinds::AddFunctionEntry(UPaperFlipbook::StaticClass(), "GetKeyFrameIndexAtTime", { ERASE_METHOD_PTR(UPaperFlipbook, GetKeyFrameIndexAtTime, (float,  bool) const, ERASE_ARGUMENT_PACK(int32 )) } );
			FAngelscriptBinds::AddFunctionEntry(UPaperFlipbook::StaticClass(), "GetNumFrames", { ERASE_METHOD_PTR(UPaperFlipbook, GetNumFrames, () const, ERASE_ARGUMENT_PACK(int32 )) } );
			FAngelscriptBinds::AddFunctionEntry(UPaperFlipbook::StaticClass(), "GetNumKeyFrames", { ERASE_METHOD_PTR(UPaperFlipbook, GetNumKeyFrames, () const, ERASE_ARGUMENT_PACK(int32 )) } );
			FAngelscriptBinds::AddFunctionEntry(UPaperFlipbook::StaticClass(), "GetSpriteAtFrame", { ERASE_METHOD_PTR(UPaperFlipbook, GetSpriteAtFrame, (int32) const, ERASE_ARGUMENT_PACK(UPaperSprite* )) } );
			FAngelscriptBinds::AddFunctionEntry(UPaperFlipbook::StaticClass(), "GetSpriteAtTime", { ERASE_METHOD_PTR(UPaperFlipbook, GetSpriteAtTime, (float,  bool) const, ERASE_ARGUMENT_PACK(UPaperSprite* )) } );
			FAngelscriptBinds::AddFunctionEntry(UPaperFlipbook::StaticClass(), "GetTotalDuration", { ERASE_METHOD_PTR(UPaperFlipbook, GetTotalDuration, () const, ERASE_ARGUMENT_PACK(float )) } );
			FAngelscriptBinds::AddFunctionEntry(UPaperFlipbook::StaticClass(), "IsValidKeyFrameIndex", { ERASE_METHOD_PTR(UPaperFlipbook, IsValidKeyFrameIndex, (int32) const, ERASE_ARGUMENT_PACK(bool )) } );
}
