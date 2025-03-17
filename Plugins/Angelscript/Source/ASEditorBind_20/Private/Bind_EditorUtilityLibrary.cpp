#include "ASEditorBind_20Module.h"
#include "AngelscriptBinds.h"
#include "EditorUtilityLibrary.h"
#include "GameFramework/Actor.h"
void FASEditorBind_20Module::Bind_EditorUtilityLibrary()
{
			FAngelscriptBinds::AddFunctionEntry(UEditorUtilityLibrary::StaticClass(), "GetActorReference", { ERASE_METHOD_PTR(UEditorUtilityLibrary, GetActorReference, (FString), ERASE_ARGUMENT_PACK(AActor* )) } );
}
