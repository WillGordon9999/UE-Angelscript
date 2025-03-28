#include "ASRuntimeBind_50Module.h"
#include "AngelscriptBinds.h"
#include "ControlRigComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Rigs/RigHierarchyDefines.h"
#include "UObject/NoExportTypes.h"
#include "ControlRig.h"
#include "Engine/SkeletalMesh.h"
void FASRuntimeBind_50Module::Bind_ControlRigComponent()
{
			FAngelscriptBinds::AddFunctionEntry(UControlRigComponent::StaticClass(), "AddMappedCompleteSkeletalMesh", { ERASE_METHOD_PTR(UControlRigComponent, AddMappedCompleteSkeletalMesh, (USkeletalMeshComponent*,  const EControlRigComponentMapDirection), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UControlRigComponent::StaticClass(), "AddMappedComponents", { ERASE_METHOD_PTR(UControlRigComponent, AddMappedComponents, (TArray<FControlRigComponentMappedComponent>), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UControlRigComponent::StaticClass(), "AddMappedElements", { ERASE_METHOD_PTR(UControlRigComponent, AddMappedElements, (TArray<FControlRigComponentMappedElement>), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UControlRigComponent::StaticClass(), "AddMappedSkeletalMesh", { ERASE_METHOD_PTR(UControlRigComponent, AddMappedSkeletalMesh, (USkeletalMeshComponent*,  TArray<FControlRigComponentMappedBone>,  TArray<FControlRigComponentMappedCurve>,  const EControlRigComponentMapDirection), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UControlRigComponent::StaticClass(), "CanExecute", { ERASE_METHOD_PTR(UControlRigComponent, CanExecute, (), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UControlRigComponent::StaticClass(), "ClearMappedElements", { ERASE_METHOD_PTR(UControlRigComponent, ClearMappedElements, (), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UControlRigComponent::StaticClass(), "DoesElementExist", { ERASE_METHOD_PTR(UControlRigComponent, DoesElementExist, (FName,  ERigElementType), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UControlRigComponent::StaticClass(), "GetAbsoluteTime", { ERASE_METHOD_PTR(UControlRigComponent, GetAbsoluteTime, () const, ERASE_ARGUMENT_PACK(float )) } );
			FAngelscriptBinds::AddFunctionEntry(UControlRigComponent::StaticClass(), "GetBoneTransform", { ERASE_METHOD_PTR(UControlRigComponent, GetBoneTransform, (FName,  EControlRigComponentSpace), ERASE_ARGUMENT_PACK(FTransform )) } );
			FAngelscriptBinds::AddFunctionEntry(UControlRigComponent::StaticClass(), "GetControlBool", { ERASE_METHOD_PTR(UControlRigComponent, GetControlBool, (FName), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UControlRigComponent::StaticClass(), "GetControlFloat", { ERASE_METHOD_PTR(UControlRigComponent, GetControlFloat, (FName), ERASE_ARGUMENT_PACK(float )) } );
			FAngelscriptBinds::AddFunctionEntry(UControlRigComponent::StaticClass(), "GetControlInt", { ERASE_METHOD_PTR(UControlRigComponent, GetControlInt, (FName), ERASE_ARGUMENT_PACK(int32 )) } );
			FAngelscriptBinds::AddFunctionEntry(UControlRigComponent::StaticClass(), "GetControlOffset", { ERASE_METHOD_PTR(UControlRigComponent, GetControlOffset, (FName,  EControlRigComponentSpace), ERASE_ARGUMENT_PACK(FTransform )) } );
			FAngelscriptBinds::AddFunctionEntry(UControlRigComponent::StaticClass(), "GetControlPosition", { ERASE_METHOD_PTR(UControlRigComponent, GetControlPosition, (FName,  EControlRigComponentSpace), ERASE_ARGUMENT_PACK(FVector )) } );
			FAngelscriptBinds::AddFunctionEntry(UControlRigComponent::StaticClass(), "GetControlRig", { ERASE_METHOD_PTR(UControlRigComponent, GetControlRig, (), ERASE_ARGUMENT_PACK(UControlRig* )) } );
			FAngelscriptBinds::AddFunctionEntry(UControlRigComponent::StaticClass(), "GetControlRotator", { ERASE_METHOD_PTR(UControlRigComponent, GetControlRotator, (FName,  EControlRigComponentSpace), ERASE_ARGUMENT_PACK(FRotator )) } );
			FAngelscriptBinds::AddFunctionEntry(UControlRigComponent::StaticClass(), "GetControlScale", { ERASE_METHOD_PTR(UControlRigComponent, GetControlScale, (FName,  EControlRigComponentSpace), ERASE_ARGUMENT_PACK(FVector )) } );
			FAngelscriptBinds::AddFunctionEntry(UControlRigComponent::StaticClass(), "GetControlTransform", { ERASE_METHOD_PTR(UControlRigComponent, GetControlTransform, (FName,  EControlRigComponentSpace), ERASE_ARGUMENT_PACK(FTransform )) } );
			FAngelscriptBinds::AddFunctionEntry(UControlRigComponent::StaticClass(), "GetControlVector2D", { ERASE_METHOD_PTR(UControlRigComponent, GetControlVector2D, (FName), ERASE_ARGUMENT_PACK(FVector2D )) } );
			FAngelscriptBinds::AddFunctionEntry(UControlRigComponent::StaticClass(), "GetElementNames", { ERASE_METHOD_PTR(UControlRigComponent, GetElementNames, (ERigElementType), ERASE_ARGUMENT_PACK(TArray<FName> )) } );
			FAngelscriptBinds::AddFunctionEntry(UControlRigComponent::StaticClass(), "GetInitialBoneTransform", { ERASE_METHOD_PTR(UControlRigComponent, GetInitialBoneTransform, (FName,  EControlRigComponentSpace), ERASE_ARGUMENT_PACK(FTransform )) } );
			FAngelscriptBinds::AddFunctionEntry(UControlRigComponent::StaticClass(), "GetInitialSpaceTransform", { ERASE_METHOD_PTR(UControlRigComponent, GetInitialSpaceTransform, (FName,  EControlRigComponentSpace), ERASE_ARGUMENT_PACK(FTransform )) } );
			FAngelscriptBinds::AddFunctionEntry(UControlRigComponent::StaticClass(), "GetSpaceTransform", { ERASE_METHOD_PTR(UControlRigComponent, GetSpaceTransform, (FName,  EControlRigComponentSpace), ERASE_ARGUMENT_PACK(FTransform )) } );
			FAngelscriptBinds::AddFunctionEntry(UControlRigComponent::StaticClass(), "Initialize", { ERASE_METHOD_PTR(UControlRigComponent, Initialize, (), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UControlRigComponent::StaticClass(), "SetBoneInitialTransformsFromSkeletalMesh", { ERASE_METHOD_PTR(UControlRigComponent, SetBoneInitialTransformsFromSkeletalMesh, (USkeletalMesh*), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UControlRigComponent::StaticClass(), "SetBoneTransform", { ERASE_METHOD_PTR(UControlRigComponent, SetBoneTransform, (FName,  FTransform,  EControlRigComponentSpace,  float,  bool), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UControlRigComponent::StaticClass(), "SetControlBool", { ERASE_METHOD_PTR(UControlRigComponent, SetControlBool, (FName,  bool), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UControlRigComponent::StaticClass(), "SetControlFloat", { ERASE_METHOD_PTR(UControlRigComponent, SetControlFloat, (FName,  float), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UControlRigComponent::StaticClass(), "SetControlInt", { ERASE_METHOD_PTR(UControlRigComponent, SetControlInt, (FName,  int32), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UControlRigComponent::StaticClass(), "SetControlOffset", { ERASE_METHOD_PTR(UControlRigComponent, SetControlOffset, (FName,  FTransform,  EControlRigComponentSpace), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UControlRigComponent::StaticClass(), "SetControlPosition", { ERASE_METHOD_PTR(UControlRigComponent, SetControlPosition, (FName,  FVector,  EControlRigComponentSpace), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UControlRigComponent::StaticClass(), "SetControlRigClass", { ERASE_METHOD_PTR(UControlRigComponent, SetControlRigClass, (TSubclassOf<UControlRig>), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UControlRigComponent::StaticClass(), "SetControlRotator", { ERASE_METHOD_PTR(UControlRigComponent, SetControlRotator, (FName,  FRotator,  EControlRigComponentSpace), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UControlRigComponent::StaticClass(), "SetControlScale", { ERASE_METHOD_PTR(UControlRigComponent, SetControlScale, (FName,  FVector,  EControlRigComponentSpace), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UControlRigComponent::StaticClass(), "SetControlTransform", { ERASE_METHOD_PTR(UControlRigComponent, SetControlTransform, (FName,  FTransform,  EControlRigComponentSpace), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UControlRigComponent::StaticClass(), "SetControlVector2D", { ERASE_METHOD_PTR(UControlRigComponent, SetControlVector2D, (FName,  FVector2D), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UControlRigComponent::StaticClass(), "SetInitialBoneTransform", { ERASE_METHOD_PTR(UControlRigComponent, SetInitialBoneTransform, (FName,  FTransform,  EControlRigComponentSpace,  bool), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UControlRigComponent::StaticClass(), "SetInitialSpaceTransform", { ERASE_METHOD_PTR(UControlRigComponent, SetInitialSpaceTransform, (FName,  FTransform,  EControlRigComponentSpace), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UControlRigComponent::StaticClass(), "SetMappedElements", { ERASE_METHOD_PTR(UControlRigComponent, SetMappedElements, (TArray<FControlRigComponentMappedElement>), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UControlRigComponent::StaticClass(), "SetObjectBinding", { ERASE_METHOD_PTR(UControlRigComponent, SetObjectBinding, (UObject*), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UControlRigComponent::StaticClass(), "Update", { ERASE_METHOD_PTR(UControlRigComponent, Update, (float), ERASE_ARGUMENT_PACK(void )) } );
}
