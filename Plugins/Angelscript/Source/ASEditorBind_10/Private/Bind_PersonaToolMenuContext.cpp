#include "ASEditorBind_10Module.h"
#include "AngelscriptBinds.h"
#include "PersonaToolMenuContext.h"
void FASEditorBind_10Module::Bind_PersonaToolMenuContext()
{
			FAngelscriptBinds::AddFunctionEntry(UPersonaToolMenuContext::StaticClass(), "GetAnimationAsset", { ERASE_METHOD_PTR(UPersonaToolMenuContext, GetAnimationAsset, () const, ERASE_ARGUMENT_PACK(UAnimationAsset* )) } );
			FAngelscriptBinds::AddFunctionEntry(UPersonaToolMenuContext::StaticClass(), "GetAnimBlueprint", { ERASE_METHOD_PTR(UPersonaToolMenuContext, GetAnimBlueprint, () const, ERASE_ARGUMENT_PACK(UAnimBlueprint* )) } );
			FAngelscriptBinds::AddFunctionEntry(UPersonaToolMenuContext::StaticClass(), "GetMesh", { ERASE_METHOD_PTR(UPersonaToolMenuContext, GetMesh, () const, ERASE_ARGUMENT_PACK(USkeletalMesh* )) } );
			FAngelscriptBinds::AddFunctionEntry(UPersonaToolMenuContext::StaticClass(), "GetPreviewMeshComponent", { ERASE_METHOD_PTR(UPersonaToolMenuContext, GetPreviewMeshComponent, () const, ERASE_ARGUMENT_PACK(UDebugSkelMeshComponent* )) } );
			FAngelscriptBinds::AddFunctionEntry(UPersonaToolMenuContext::StaticClass(), "GetSkeleton", { ERASE_METHOD_PTR(UPersonaToolMenuContext, GetSkeleton, () const, ERASE_ARGUMENT_PACK(USkeleton* )) } );
}
