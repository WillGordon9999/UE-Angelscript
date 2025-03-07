#include "ASRuntimeBind_10Module.h"
#include "AngelscriptBinds.h"
#include "Animation/PoseAsset.h"
//#include "../../../Engine/Source/Runtime/Engine/Private/Animation/PoseAsset.cpp"
//#include "/Engine/Source/Runtime/Engine/Private/Animation/PoseAsset.cpp"
//#include "Bind_SkeletalMeshComponent.cpp"

//extern bool(UPoseAsset::*set)(const FName&);

//AS_FORCE_LINK const FAngelscriptBinds::FBind Bind_PoseAsset_Minimal((int32)FAngelscriptBinds::EOrder::Late - 1,
//	[]()
//	{
//	}
//);

void FASRuntimeBind_10Module::Bind_PoseAsset()
{
			//FAngelscriptBinds::AddFunctionEntry(UPoseAsset::StaticClass(), "GetBasePoseName", { ERASE_METHOD_PTR(UPoseAsset, GetBasePoseName, () const, ERASE_ARGUMENT_PACK(FName )) } );
			//FAngelscriptBinds::AddFunctionEntry(UPoseAsset::StaticClass(), "GetPoseNames", { ERASE_METHOD_PTR(UPoseAsset, GetPoseNames, (TArray<FName>&) const, ERASE_ARGUMENT_PACK(void )) } );
			//FAngelscriptBinds::AddFunctionEntry(UPoseAsset::StaticClass(), "RenamePose", { ERASE_METHOD_PTR(UPoseAsset, RenamePose, (const FName&,  const FName&), ERASE_ARGUMENT_PACK(void )) } );
			//FAngelscriptBinds::AddFunctionEntry(UPoseAsset::StaticClass(), "SetBasePoseName", { ERASE_METHOD_PTR(UPoseAsset, SetBasePoseName, (const FName&), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UPoseAsset::StaticClass(), "UpdatePoseFromAnimation", { ERASE_METHOD_PTR(UPoseAsset, UpdatePoseFromAnimation, (class UAnimSequence*), ERASE_ARGUMENT_PACK( void )) } );
			
			auto PoseAsset = FAngelscriptBinds::ExistingClass("UPoseAsset");
			PoseAsset.Method
			(
				"FName GetBasePoseName() const", [](UPoseAsset* Asset) -> FName
				//"FName GetBasePoseName() const", [Func]() -> FName
				{
					//FName newName;					
					if (UFunction* Func = UPoseAsset::StaticClass()->FindFunctionByName("GetBasePoseName"))
					{
						FStructOnScope scope(Func);
						Asset->ProcessEvent(Func, scope.GetStructMemory());

						if (FNameProperty* retProp = CastField<FNameProperty>(Func->GetReturnProperty()))
						{
							return retProp->GetPropertyValue_InContainer(scope.GetStructMemory());
						}
					}

					return NAME_None;
				}
			);

			//FName(UPoseAsset::*init)()const = &UPoseAsset::GetBasePoseName;
			//long addr = *(long*)&init;
			//FName(UPoseAsset::*func)()const = (FName(UPoseAsset::*)()const)addr;
			
			////PoseAsset.Method("bool SetBasePoseName(const FName&)", METHODPR_TRIVIAL(bool, UPoseAsset, SetBasePoseName, (const FName&)));						

			//FName(UPoseAsset::*func)()const = *(FName(UPoseAsset::*)()const)ptr;			
			//void* offset = (void*)(&((UPoseAsset*)0)->GetBasePoseName);

}
