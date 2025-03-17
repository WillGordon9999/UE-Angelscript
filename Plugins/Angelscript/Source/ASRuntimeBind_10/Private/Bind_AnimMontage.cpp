#include "ASRuntimeBind_10Module.h"
#include "AngelscriptBinds.h"
#include "Animation/AnimMontage.h"
#include "AlphaBlend.h"
#include "Animation/AnimSequenceBase.h"
void FASRuntimeBind_10Module::Bind_AnimMontage()
{
			FAngelscriptBinds::AddFunctionEntry(UAnimMontage::StaticClass(), "GetBlendInArgs", { ERASE_METHOD_PTR(UAnimMontage, GetBlendInArgs, () const, ERASE_ARGUMENT_PACK(FAlphaBlendArgs )) } );
			FAngelscriptBinds::AddFunctionEntry(UAnimMontage::StaticClass(), "GetBlendOutArgs", { ERASE_METHOD_PTR(UAnimMontage, GetBlendOutArgs, () const, ERASE_ARGUMENT_PACK(FAlphaBlendArgs )) } );
			FAngelscriptBinds::AddFunctionEntry(UAnimMontage::StaticClass(), "GetDefaultBlendInTime", { ERASE_METHOD_PTR(UAnimMontage, GetDefaultBlendInTime, () const, ERASE_ARGUMENT_PACK(float )) } );
			FAngelscriptBinds::AddFunctionEntry(UAnimMontage::StaticClass(), "GetDefaultBlendOutTime", { ERASE_METHOD_PTR(UAnimMontage, GetDefaultBlendOutTime, () const, ERASE_ARGUMENT_PACK(float )) } );
			FAngelscriptBinds::AddFunctionEntry(UAnimMontage::StaticClass(), "GetFirstAnimReference", { ERASE_METHOD_PTR(UAnimMontage, GetFirstAnimReference, () const, ERASE_ARGUMENT_PACK( UAnimSequenceBase* )) } );
			FAngelscriptBinds::AddFunctionEntry(UAnimMontage::StaticClass(), "GetGroupName", { ERASE_METHOD_PTR(UAnimMontage, GetGroupName, () const, ERASE_ARGUMENT_PACK( FName )) } );
			FAngelscriptBinds::AddFunctionEntry(UAnimMontage::StaticClass(), "GetNumSections", { ERASE_METHOD_PTR(UAnimMontage, GetNumSections, () const, ERASE_ARGUMENT_PACK(int32 )) } );
			FAngelscriptBinds::AddFunctionEntry(UAnimMontage::StaticClass(), "GetSectionIndex", { ERASE_METHOD_PTR(UAnimMontage, GetSectionIndex, (FName) const, ERASE_ARGUMENT_PACK( int32 )) } );
			FAngelscriptBinds::AddFunctionEntry(UAnimMontage::StaticClass(), "GetSectionName", { ERASE_METHOD_PTR(UAnimMontage, GetSectionName, (int32) const, ERASE_ARGUMENT_PACK( FName )) } );
			FAngelscriptBinds::AddFunctionEntry(UAnimMontage::StaticClass(), "IsDynamicMontage", { ERASE_METHOD_PTR(UAnimMontage, IsDynamicMontage, () const, ERASE_ARGUMENT_PACK( bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UAnimMontage::StaticClass(), "IsValidSectionName", { ERASE_METHOD_PTR(UAnimMontage, IsValidSectionName, (FName) const, ERASE_ARGUMENT_PACK( bool )) } );
}
