#pragma once
#include "AngelscriptBinds.h"
#include "AngelscriptType.h"
#include "Bind_TArray_Structs.h"

struct ANGELSCRIPTCODE_API FAngelscriptArrayType : public FAngelscriptType
{
	bool HasReferences(const FAngelscriptTypeUsage& Usage) const override;
	FString GetAngelscriptTypeName() const override;
	virtual bool CanQueryPropertyType() const;
	void EmitReferenceInfo(const FAngelscriptTypeUsage& Usage, FGCReferenceParams& Params) const override;
	bool CanCreateProperty(const FAngelscriptTypeUsage& Usage) const override;
	FProperty* CreateProperty(const FAngelscriptTypeUsage& Usage, const FPropertyParams& Params) const override;
	bool MatchesProperty(const FAngelscriptTypeUsage& Usage, const FProperty* Property, EPropertyMatchType MatchType) const;
	bool CanCopy(const FAngelscriptTypeUsage& Usage) const override;
	bool NeedCopy(const FAngelscriptTypeUsage& Usage) const override;
	void CopyValue(const FAngelscriptTypeUsage& Usage, void* SourcePtr, void* DestinationPtr) const override;
	bool CanConstruct(const FAngelscriptTypeUsage& Usage) const override;
	bool NeedConstruct(const FAngelscriptTypeUsage& Usage) const override;
	void ConstructValue(const FAngelscriptTypeUsage& Usage, void* DestinationPtr) const override;
	bool CanDestruct(const FAngelscriptTypeUsage& Usage) const override;
	bool NeedDestruct(const FAngelscriptTypeUsage& Usage) const override;
	void DestructValue(const FAngelscriptTypeUsage& Usage, void* DestinationPtr) const override;
	int32 GetValueSize(const FAngelscriptTypeUsage& Usage) const override;
	int32 GetValueAlignment(const FAngelscriptTypeUsage& Usage) const;
	bool CanBeArgument(const FAngelscriptTypeUsage& Usage) const override;
	void SetArgument(const FAngelscriptTypeUsage& Usage, int32 ArgumentIndex, class asIScriptContext* Context, struct FFrame& Stack, const FArgData& Data) const override;
	bool CanBeReturned(const FAngelscriptTypeUsage& Usage) const override;
	void GetReturnValue(const FAngelscriptTypeUsage& Usage, class asIScriptContext* Context, void* Destination) const override;
	bool CanCompare(const FAngelscriptTypeUsage& Usage) const override;
	bool IsValueEqual(const FAngelscriptTypeUsage& Usage, void* SourcePtr, void* DestinationPtr) const override;
	FASDebugValue* CreateDebugValue(const FAngelscriptTypeUsage& Usage, FDebugValuePrototype& Values, int32 Offset) const override;
	bool GetDebuggerValue(const FAngelscriptTypeUsage& Usage, void* Address, struct FDebuggerValue& Value) const override;
	bool GetDebuggerScope(const FAngelscriptTypeUsage& Usage, void* Address, struct FDebuggerScope& Scope) const override;
	bool GetDebuggerMember(const FAngelscriptTypeUsage& Usage, void* Address, const FString& Member, struct FDebuggerValue& Value) const override;
	bool GetCppForm(const FAngelscriptTypeUsage& Usage, FCppForm& OutCppForm) const override;
	bool IsParamForcedOutParam() const override { return true; }
	bool CanBeTemplateSubType() const override { return false; }
};
