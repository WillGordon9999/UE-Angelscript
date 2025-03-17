#include "ASRuntimeBind_10Module.h"
#include "AngelscriptBinds.h"
#include "Animation/AnimSingleNodeInstance.h"
#include "Animation/AnimationAsset.h"
#include "Animation/MirrorDataTable.h"
#include "UObject/NoExportTypes.h"
void FASRuntimeBind_10Module::Bind_AnimSingleNodeInstance()
{
			FAngelscriptBinds::AddFunctionEntry(UAnimSingleNodeInstance::StaticClass(), "GetAnimationAsset", { ERASE_METHOD_PTR(UAnimSingleNodeInstance, GetAnimationAsset, () const, ERASE_ARGUMENT_PACK(  UAnimationAsset* )) } );
			FAngelscriptBinds::AddFunctionEntry(UAnimSingleNodeInstance::StaticClass(), "GetLength", { ERASE_METHOD_PTR(UAnimSingleNodeInstance, GetLength, (), ERASE_ARGUMENT_PACK( float )) } );
			FAngelscriptBinds::AddFunctionEntry(UAnimSingleNodeInstance::StaticClass(), "GetMirrorDataTable", { ERASE_METHOD_PTR(UAnimSingleNodeInstance, GetMirrorDataTable, (), ERASE_ARGUMENT_PACK( const UMirrorDataTable* )) } );
			FAngelscriptBinds::AddFunctionEntry(UAnimSingleNodeInstance::StaticClass(), "PlayAnim", { ERASE_METHOD_PTR(UAnimSingleNodeInstance, PlayAnim, (bool,  float,  float), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UAnimSingleNodeInstance::StaticClass(), "SetAnimationAsset", { ERASE_METHOD_PTR(UAnimSingleNodeInstance, SetAnimationAsset, (UAnimationAsset*,  bool,  float), ERASE_ARGUMENT_PACK(  void )) } );
			FAngelscriptBinds::AddFunctionEntry(UAnimSingleNodeInstance::StaticClass(), "SetBlendSpacePosition", { ERASE_METHOD_PTR(UAnimSingleNodeInstance, SetBlendSpacePosition, (const FVector&), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UAnimSingleNodeInstance::StaticClass(), "SetLooping", { ERASE_METHOD_PTR(UAnimSingleNodeInstance, SetLooping, (bool), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UAnimSingleNodeInstance::StaticClass(), "SetMirrorDataTable", { ERASE_METHOD_PTR(UAnimSingleNodeInstance, SetMirrorDataTable, (const UMirrorDataTable*), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UAnimSingleNodeInstance::StaticClass(), "SetPlaying", { ERASE_METHOD_PTR(UAnimSingleNodeInstance, SetPlaying, (bool), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UAnimSingleNodeInstance::StaticClass(), "SetPlayRate", { ERASE_METHOD_PTR(UAnimSingleNodeInstance, SetPlayRate, (float), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UAnimSingleNodeInstance::StaticClass(), "SetPosition", { ERASE_METHOD_PTR(UAnimSingleNodeInstance, SetPosition, (float,  bool), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UAnimSingleNodeInstance::StaticClass(), "SetPositionWithPreviousTime", { ERASE_METHOD_PTR(UAnimSingleNodeInstance, SetPositionWithPreviousTime, (float,  float,  bool), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UAnimSingleNodeInstance::StaticClass(), "SetPreviewCurveOverride", { ERASE_METHOD_PTR(UAnimSingleNodeInstance, SetPreviewCurveOverride, (const FName&,  float,  bool), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UAnimSingleNodeInstance::StaticClass(), "SetReverse", { ERASE_METHOD_PTR(UAnimSingleNodeInstance, SetReverse, (bool), ERASE_ARGUMENT_PACK( void )) } );
			FAngelscriptBinds::AddFunctionEntry(UAnimSingleNodeInstance::StaticClass(), "StopAnim", { ERASE_METHOD_PTR(UAnimSingleNodeInstance, StopAnim, (), ERASE_ARGUMENT_PACK( void )) } );
}
