#pragma once
#include "CoreMinimal.h"
#include "AngelscriptStaticJIT.h"

#if AS_CAN_GENERATE_JIT

#include "AngelscriptType.h"

enum EBytecodeUsageFlag
{
	BU_l_fp_write = 0x1,
	BU_l_valueRegister = 0x2,
	BU_l_objectRegister = 0x4,
};

struct FAngelscriptBytecode
{
	static TMap<asEBCInstr, FAngelscriptBytecode*>& GetBytecodeMap();
	static FAngelscriptBytecode& GetBytecode(asEBCInstr Instr);

	static FString GetInstrDebugString(asDWORD* BC);

	virtual ~FAngelscriptBytecode() {}

	virtual int32 AdditionalHash(FStaticJITContext& Context) const { return 0; }
	virtual void PrePass(FStaticJITContext& Context) const {}
	virtual bool Implement(FStaticJITContext& Context) const { return false; }

	virtual void WriteDebugComment(FStaticJITContext& Context) const {}
	virtual bool CanModifyStackVolatiles(FStaticJITContext& Context) const { return true; }

	virtual int32 GetUsageFlags(FStaticJITContext& Context) const { return GetUsageFlags(); };
	virtual int32 GetStackSizeChange(FStaticJITContext& Context) const { return 0; };

protected:
	virtual int32 GetUsageFlags() const { return 0; };
};

template<typename T, asEBCInstr Instr>
struct FAngelscriptBytecodeImpl : FAngelscriptBytecode
{
	static bool Register()
	{
		T* Instance = new T();
		FAngelscriptBytecode::GetBytecodeMap().Add(Instr, Instance);
		return true;
	};
	static bool bRegistered;

	virtual void WriteDebugComment(FStaticJITContext& Context) const override
	{
		FString DebugStr = GetInstrDebugString(Context.BC);
		if(DebugStr.Len() != 0)
			Context.Line("// {0}", DebugStr);
	}

	virtual ~FAngelscriptBytecodeImpl()
	{
		bRegistered = false;
	}
};

template<typename T, asEBCInstr Instr>
bool FAngelscriptBytecodeImpl<T, Instr>::bRegistered = FAngelscriptBytecodeImpl<T, Instr>::Register();

#define IMPL_BYTECODE_BEGIN(Instr) struct FAngelscriptBytecode_ ## Instr : public FAngelscriptBytecodeImpl<FAngelscriptBytecode_ ## Instr, Instr>
#define IMPL_BYTECODE_END(Instr) template<> bool FAngelscriptBytecodeImpl<FAngelscriptBytecode_ ## Instr, Instr>::bRegistered = FAngelscriptBytecode_ ## Instr::Register();

struct FResolvedNativeType
{
	FAngelscriptTypeUsage Usage;
	FAngelscriptType::FCppForm CppForm;

	bool HasGenericForm() const
	{
		if (Usage.bIsReference)
			return true;
		else if (CppForm.CppGenericType.Len() != 0)
			return true;
		else if (CppForm.CppType.Len() != 0 && !CppForm.bNativeCannotBeGeneric)
			return true;
		else
			return false;
	}

	FString GetGenericForm() const
	{
		if (Usage.bIsReference)
			return TEXT("void*");
		else if (CppForm.CppGenericType.Len() != 0)
			return CppForm.CppGenericType;
		else if (CppForm.CppType.Len() != 0 && !CppForm.bNativeCannotBeGeneric)
			return CppForm.CppType;
		else
			return TEXT("");

	}

	FString GetFuncCastForm() const
	{
		if (CppForm.OverrideFuncCastType.Len() != 0)
			return CppForm.OverrideFuncCastType;
		return GetGenericForm();
	}

	bool HasNativeForm() const
	{
		if (CppForm.CppType.Len() != 0)
			return true;
		else
			return false;
	}

	FString GetNativeForm() const
	{
		return CppForm.CppType;
	}
};

struct FNativeFunctionContext
{
	// This expression is the address to put the return value at
	//  Can be nothing if return value is handled locally.
	FString ReturnValueAddress;
	// This expression is the object's pointer that we're calling on
	FString ObjectAddress;
	// Expressions for each of the arguments, already casted to their native types
	TArray<FString> ArgumentValues;
	// Native types for arguments
	TArray<FResolvedNativeType> ArgumentTypes;
	// Native type for object pointer
	FResolvedNativeType ObjectType;
	// Native type for return value
	FResolvedNativeType ReturnType;
	// Last TYPEID that was pushed. Useful for pre-resolving ? arguments
	class asITypeInfo* LastPushedTypeInfo = nullptr;
	int32 LastPushedTypeId = 0;
	// Script function that we are generating a call for
	class asCScriptFunction* CallingFunction = nullptr;

	int32 AppendArgumentsTo(FString& CallCode, int32 ArgumentStart = 0);
};

struct FDestructorCall
{
	asCObjectType* ObjectType;

	FDestructorCall(asITypeInfo* InObjectType)
		: ObjectType((asCObjectType*)InObjectType)
	{
	}

	void CallDestroy(FStaticJITContext& Context, const FString& AddressExpression);
};

#endif