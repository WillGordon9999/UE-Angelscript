#include "ASRuntimeBind_10Module.h"
#include "AngelscriptBinds.h"
#include "Animation/AnimationSettings.h"
void FASRuntimeBind_10Module::Bind_AnimationSettings()
{
			FAngelscriptBinds::AddFunctionEntry(UAnimationSettings::StaticClass(), "GetBoneCustomAttributeNamesToImport", { ERASE_METHOD_PTR(UAnimationSettings, GetBoneCustomAttributeNamesToImport, () const, ERASE_ARGUMENT_PACK( TArray<FString> )) } );
}
