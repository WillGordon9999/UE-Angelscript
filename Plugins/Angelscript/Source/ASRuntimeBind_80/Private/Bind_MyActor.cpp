#include "ASRuntimeBind_80Module.h"
#include "AngelscriptBinds.h"
#include "../../../../../../Users/Will/Documents/Unreal Projects/AngelPortV2/Source/AngelPortV2/MyActor.h"
void FASRuntimeBind_80Module::Bind_MyActor()
{
			FAngelscriptBinds::AddFunctionEntry(AMyActor::StaticClass(), "Test", { ERASE_METHOD_PTR(AMyActor, Test, (FVector,  float,  bool,  int32), ERASE_ARGUMENT_PACK(void )) } );
}
