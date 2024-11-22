#include "ASRuntimeBind_60Module.h"
#include "AngelscriptBinds.h"
#include "PaperSpriteComponent.h"
void FASRuntimeBind_60Module::Bind_PaperSpriteComponent()
{
			FAngelscriptBinds::AddFunctionEntry(UPaperSpriteComponent::StaticClass(), "GetSprite", { ERASE_METHOD_PTR(UPaperSpriteComponent, GetSprite, (), ERASE_ARGUMENT_PACK( UPaperSprite* )) } );
			FAngelscriptBinds::AddFunctionEntry(UPaperSpriteComponent::StaticClass(), "SetSprite", { ERASE_METHOD_PTR(UPaperSpriteComponent, SetSprite, (class UPaperSprite*), ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UPaperSpriteComponent::StaticClass(), "SetSpriteColor", { ERASE_METHOD_PTR(UPaperSpriteComponent, SetSpriteColor, (FLinearColor), ERASE_ARGUMENT_PACK(void )) } );
}
