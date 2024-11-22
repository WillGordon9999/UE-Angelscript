#include "ASRuntimeBind_60Module.h"
#include "AngelscriptBinds.h"
#include "RigVMModel/RigVMPin.h"
void FASRuntimeBind_60Module::Bind_RigVMPin()
{
			FAngelscriptBinds::AddFunctionEntry(URigVMPin::StaticClass(), "ContainsWildCardSubPin", { ERASE_METHOD_PTR(URigVMPin, ContainsWildCardSubPin, () const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMPin::StaticClass(), "FindLinkForPin", { ERASE_METHOD_PTR(URigVMPin, FindLinkForPin, (const URigVMPin*) const, ERASE_ARGUMENT_PACK(URigVMLink* )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMPin::StaticClass(), "FindSubPin", { ERASE_METHOD_PTR(URigVMPin, FindSubPin, (const FString&) const, ERASE_ARGUMENT_PACK(URigVMPin* )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMPin::StaticClass(), "GetAbsolutePinIndex", { ERASE_METHOD_PTR(URigVMPin, GetAbsolutePinIndex, () const, ERASE_ARGUMENT_PACK(int32 )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMPin::StaticClass(), "GetArrayElementCppType", { ERASE_METHOD_PTR(URigVMPin, GetArrayElementCppType, () const, ERASE_ARGUMENT_PACK(FString )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMPin::StaticClass(), "GetArraySize", { ERASE_METHOD_PTR(URigVMPin, GetArraySize, () const, ERASE_ARGUMENT_PACK(int32 )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMPin::StaticClass(), "GetCPPType", { ERASE_METHOD_PTR(URigVMPin, GetCPPType, () const, ERASE_ARGUMENT_PACK(FString )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMPin::StaticClass(), "GetCPPTypeObject", { ERASE_METHOD_PTR(URigVMPin, GetCPPTypeObject, () const, ERASE_ARGUMENT_PACK(UObject* )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMPin::StaticClass(), "GetCustomWidgetName", { ERASE_METHOD_PTR(URigVMPin, GetCustomWidgetName, () const, ERASE_ARGUMENT_PACK(FName )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMPin::StaticClass(), "GetDefaultValue", { ERASE_METHOD_PTR(URigVMPin, GetDefaultValue, () const, ERASE_ARGUMENT_PACK(FString )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMPin::StaticClass(), "GetDirection", { ERASE_METHOD_PTR(URigVMPin, GetDirection, () const, ERASE_ARGUMENT_PACK(ERigVMPinDirection )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMPin::StaticClass(), "GetDisplayName", { ERASE_METHOD_PTR(URigVMPin, GetDisplayName, () const, ERASE_ARGUMENT_PACK(FName )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMPin::StaticClass(), "GetEnum", { ERASE_METHOD_PTR(URigVMPin, GetEnum, () const, ERASE_ARGUMENT_PACK(UEnum* )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMPin::StaticClass(), "GetGraph", { ERASE_METHOD_PTR(URigVMPin, GetGraph, () const, ERASE_ARGUMENT_PACK(URigVMGraph* )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMPin::StaticClass(), "GetLinkedSourcePins", { ERASE_METHOD_PTR(URigVMPin, GetLinkedSourcePins, (bool) const, ERASE_ARGUMENT_PACK(TArray<URigVMPin*> )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMPin::StaticClass(), "GetLinkedTargetPins", { ERASE_METHOD_PTR(URigVMPin, GetLinkedTargetPins, (bool) const, ERASE_ARGUMENT_PACK(TArray<URigVMPin*> )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMPin::StaticClass(), "GetLinks", { ERASE_METHOD_PTR(URigVMPin, GetLinks, () const, ERASE_ARGUMENT_PACK(const TArray<URigVMLink*>& )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMPin::StaticClass(), "GetMetaData", { ERASE_METHOD_PTR(URigVMPin, GetMetaData, (FName) const, ERASE_ARGUMENT_PACK(FString )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMPin::StaticClass(), "GetNode", { ERASE_METHOD_PTR(URigVMPin, GetNode, () const, ERASE_ARGUMENT_PACK(URigVMNode* )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMPin::StaticClass(), "GetOriginalPinFromInjectedNode", { ERASE_METHOD_PTR(URigVMPin, GetOriginalPinFromInjectedNode, () const, ERASE_ARGUMENT_PACK(URigVMPin* )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMPin::StaticClass(), "GetParentPin", { ERASE_METHOD_PTR(URigVMPin, GetParentPin, () const, ERASE_ARGUMENT_PACK(URigVMPin* )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMPin::StaticClass(), "GetPinForLink", { ERASE_METHOD_PTR(URigVMPin, GetPinForLink, () const, ERASE_ARGUMENT_PACK(URigVMPin* )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMPin::StaticClass(), "GetPinIndex", { ERASE_METHOD_PTR(URigVMPin, GetPinIndex, () const, ERASE_ARGUMENT_PACK(int32 )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMPin::StaticClass(), "GetPinPath", { ERASE_METHOD_PTR(URigVMPin, GetPinPath, (bool) const, ERASE_ARGUMENT_PACK(FString )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMPin::StaticClass(), "GetRootPin", { ERASE_METHOD_PTR(URigVMPin, GetRootPin, () const, ERASE_ARGUMENT_PACK(URigVMPin* )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMPin::StaticClass(), "GetScriptStruct", { ERASE_METHOD_PTR(URigVMPin, GetScriptStruct, () const, ERASE_ARGUMENT_PACK(UScriptStruct* )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMPin::StaticClass(), "GetSegmentPath", { ERASE_METHOD_PTR(URigVMPin, GetSegmentPath, (bool) const, ERASE_ARGUMENT_PACK(FString )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMPin::StaticClass(), "GetSourceLinks", { ERASE_METHOD_PTR(URigVMPin, GetSourceLinks, (bool) const, ERASE_ARGUMENT_PACK(TArray<URigVMLink*> )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMPin::StaticClass(), "GetSubPinPath", { ERASE_METHOD_PTR(URigVMPin, GetSubPinPath, (const URigVMPin*,  bool) const, ERASE_ARGUMENT_PACK(FString )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMPin::StaticClass(), "GetSubPins", { ERASE_METHOD_PTR(URigVMPin, GetSubPins, () const, ERASE_ARGUMENT_PACK(const TArray<URigVMPin*>& )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMPin::StaticClass(), "GetTargetLinks", { ERASE_METHOD_PTR(URigVMPin, GetTargetLinks, (bool) const, ERASE_ARGUMENT_PACK(TArray<URigVMLink*> )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMPin::StaticClass(), "GetToolTipText", { ERASE_METHOD_PTR(URigVMPin, GetToolTipText, () const, ERASE_ARGUMENT_PACK(FText )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMPin::StaticClass(), "IsArray", { ERASE_METHOD_PTR(URigVMPin, IsArray, () const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMPin::StaticClass(), "IsArrayElement", { ERASE_METHOD_PTR(URigVMPin, IsArrayElement, () const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMPin::StaticClass(), "IsDecoratorPin", { ERASE_METHOD_PTR(URigVMPin, IsDecoratorPin, () const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMPin::StaticClass(), "IsDefinedAsConstant", { ERASE_METHOD_PTR(URigVMPin, IsDefinedAsConstant, () const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMPin::StaticClass(), "IsDynamicArray", { ERASE_METHOD_PTR(URigVMPin, IsDynamicArray, () const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMPin::StaticClass(), "IsEnum", { ERASE_METHOD_PTR(URigVMPin, IsEnum, () const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMPin::StaticClass(), "IsExecuteContext", { ERASE_METHOD_PTR(URigVMPin, IsExecuteContext, () const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMPin::StaticClass(), "IsExpanded", { ERASE_METHOD_PTR(URigVMPin, IsExpanded, () const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMPin::StaticClass(), "IsFixedSizeArray", { ERASE_METHOD_PTR(URigVMPin, IsFixedSizeArray, () const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMPin::StaticClass(), "IsInterface", { ERASE_METHOD_PTR(URigVMPin, IsInterface, () const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMPin::StaticClass(), "IsLazy", { ERASE_METHOD_PTR(URigVMPin, IsLazy, () const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMPin::StaticClass(), "IsLinkedTo", { ERASE_METHOD_PTR(URigVMPin, IsLinkedTo, (const URigVMPin*) const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMPin::StaticClass(), "IsReferenceCountedContainer", { ERASE_METHOD_PTR(URigVMPin, IsReferenceCountedContainer, () const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMPin::StaticClass(), "IsRootPin", { ERASE_METHOD_PTR(URigVMPin, IsRootPin, () const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMPin::StaticClass(), "IsStringType", { ERASE_METHOD_PTR(URigVMPin, IsStringType, () const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMPin::StaticClass(), "IsStruct", { ERASE_METHOD_PTR(URigVMPin, IsStruct, () const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMPin::StaticClass(), "IsStructMember", { ERASE_METHOD_PTR(URigVMPin, IsStructMember, () const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMPin::StaticClass(), "IsUObject", { ERASE_METHOD_PTR(URigVMPin, IsUObject, () const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMPin::StaticClass(), "IsWildCard", { ERASE_METHOD_PTR(URigVMPin, IsWildCard, () const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMPin::StaticClass(), "RequiresWatch", { ERASE_METHOD_PTR(URigVMPin, RequiresWatch, (const bool) const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMPin::StaticClass(), "ShouldHideSubPins", { ERASE_METHOD_PTR(URigVMPin, ShouldHideSubPins, () const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(URigVMPin::StaticClass(), "ShouldOnlyShowSubPins", { ERASE_METHOD_PTR(URigVMPin, ShouldOnlyShowSubPins, () const, ERASE_ARGUMENT_PACK(bool )) } );
}
