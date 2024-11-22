#include "StaticJIT/StaticJITHeader.h"
#include "AngelscriptStaticJIT.h"

#include "StartAngelscriptHeaders.h"
//#include "as_context.h"
//#include "as_scriptengine.h"
//#include "as_scriptobject.h"
//#include "as_callfunc.h"
//#include "as_generic.h"
//#include "as_texts.h"
#include "source/as_context.h"
#include "source/as_scriptengine.h"
#include "source/as_scriptobject.h"
#include "source/as_callfunc.h"
#include "source/as_generic.h"
#include "source/as_texts.h"
#include "EndAngelscriptHeaders.h"

static const FStaticJITCompiledInfo*& GetActiveCompiledInfo()
{
	static const FStaticJITCompiledInfo* ActiveInfo = nullptr;
	return ActiveInfo;
}

FStaticJITCompiledInfo::FStaticJITCompiledInfo(FGuid Guid)
	: PrecompiledDataGuid(Guid)
{
	const FStaticJITCompiledInfo*& ActiveInfo = GetActiveCompiledInfo();
	checkf(ActiveInfo == nullptr, TEXT("Only one angelscript static JIT info can be compiled in!"))
	ActiveInfo = this;
}

const FStaticJITCompiledInfo* FStaticJITCompiledInfo::Get()
{
	return GetActiveCompiledInfo();
}

FStaticJITFunction::FStaticJITFunction(uint32 FunctionId, asJITFunction InVMEntry, asJITFunction_ParmsEntry InParmsEntry, asJITFunction_Raw InRawFunction)
{
	FJITDatabase::FJITFunctions Funcs;
	Funcs.VMEntry = InVMEntry;
	Funcs.ParmsEntry = InParmsEntry;
	Funcs.RawFunction = InRawFunction;

	auto& JITDatabase = FJITDatabase::Get();
	JITDatabase.Functions.Add(FunctionId, Funcs);
}

FJitRef_Function::FJitRef_Function(uint64 FunctionRef)
{
	Pointer = (void*)FunctionRef;

	auto& JITDatabase = FJITDatabase::Get();
	JITDatabase.FunctionLookups.Add(&Pointer);
}

FJitRef_SystemFunctionPointer::FJitRef_SystemFunctionPointer(uint64 FunctionRef)
{
	Pointer = (void*)FunctionRef;

	auto& JITDatabase = FJITDatabase::Get();
	JITDatabase.SystemFunctionPointerLookups.Add(this);
}

FJitRef_Type::FJitRef_Type(uint64 TypeRef)
{
	Pointer = (void*)TypeRef;

	auto& JITDatabase = FJITDatabase::Get();
	JITDatabase.TypeInfoLookups.Add(&Pointer);
}

FJitRef_GlobalVar::FJitRef_GlobalVar(uint64 GlobalRef)
{
	Pointer = (void*)GlobalRef;

	auto& JITDatabase = FJITDatabase::Get();
	JITDatabase.GlobalVarLookups.Add(&Pointer);
}

FJitRef_PropertyOffset::FJitRef_PropertyOffset(uint64 PropertyRef)
{
	Offset = 0xffff;

	auto& JITDatabase = FJITDatabase::Get();
	JITDatabase.PropertyOffsetLookups.Add(TPair<uint64,uint32*>(PropertyRef, &Offset));
}

#if AS_JIT_VERIFY_PROPERTY_OFFSETS
FJitVerifyPropertyOffset::FJitVerifyPropertyOffset(uint64 PropertyRef, SIZE_T ComputedOffset)
{
	auto& JITDatabase = FJITDatabase::Get();
	JITDatabase.VerifyPropertyOffsets.Add(TPair<uint64,SIZE_T>(PropertyRef, ComputedOffset));
}

FJitVerifyTypeSize::FJitVerifyTypeSize(uint64 TypeRef, SIZE_T ComputedSize, SIZE_T ComputedAlignment)
{
	auto& JITDatabase = FJITDatabase::Get();
	JITDatabase.VerifyTypeSizes.Add(TPair<uint64,SIZE_T>(TypeRef, ComputedSize));
	JITDatabase.VerifyTypeAlignments.Add(TPair<uint64,SIZE_T>(TypeRef, ComputedAlignment));
}
#endif

void FStaticJITFunction::SetException(FScriptExecution& Execution, EJITException Exception)
{
	Execution.bExceptionThrown = true;

	if (Exception == EJITException::NullPointer)
		FAngelscriptManager::HandleExceptionFromJIT(TXT_NULL_POINTER_ACCESS);
	else if (Exception == EJITException::Div0)
		FAngelscriptManager::HandleExceptionFromJIT(TXT_DIVIDE_BY_ZERO);
	else if (Exception == EJITException::Overflow)
		FAngelscriptManager::HandleExceptionFromJIT(TXT_DIVIDE_OVERFLOW);
	else if (Exception == EJITException::UnboundFunction)
		FAngelscriptManager::HandleExceptionFromJIT(TXT_UNBOUND_FUNCTION);
	else if (Exception == EJITException::OutOfBounds)
		FAngelscriptManager::HandleExceptionFromJIT("Index out of bounds.");
	else
		FAngelscriptManager::HandleExceptionFromJIT("Unknown exception.");
}

void FStaticJITFunction::SetNullPointerException(FScriptExecution& Execution)
{
	Execution.bExceptionThrown = true;
	FAngelscriptManager::HandleExceptionFromJIT(TXT_NULL_POINTER_ACCESS);
}

void FStaticJITFunction::SetDivByZeroException(FScriptExecution& Execution)
{
	Execution.bExceptionThrown = true;
	FAngelscriptManager::HandleExceptionFromJIT(TXT_DIVIDE_BY_ZERO);
}

void FStaticJITFunction::SetOverflowException(FScriptExecution& Execution)
{
	Execution.bExceptionThrown = true;
	FAngelscriptManager::HandleExceptionFromJIT(TXT_DIVIDE_OVERFLOW);
}

void FStaticJITFunction::SetUnboundFunctionException(FScriptExecution& Execution)
{
	Execution.bExceptionThrown = true;
	FAngelscriptManager::HandleExceptionFromJIT(TXT_UNBOUND_FUNCTION);
}

void FStaticJITFunction::SetOutOfBoundsException(FScriptExecution& Execution)
{
	Execution.bExceptionThrown = true;
	FAngelscriptManager::HandleExceptionFromJIT("Index out of bounds.");
}

void FStaticJITFunction::SetSwitchValueInvalidException(FScriptExecution& Execution)
{
	Execution.bExceptionThrown = true;
	FAngelscriptManager::HandleExceptionFromJIT("Invalid enum value passed to switch");
}

void FStaticJITFunction::SetUnknownException(FScriptExecution& Execution)
{
	Execution.bExceptionThrown = true;
	FAngelscriptManager::HandleExceptionFromJIT("Unknown exception");
}

void FStaticJITFunction::ScriptFinishConstruct(FScriptExecution& Execution, asIScriptObject* Object, asITypeInfo* TypeInfo)
{
	SCRIPT_ENGINE->FinishConstructObject(Object, TypeInfo);
}

void FStaticJITFunction::ScriptCallNative(FScriptExecution& Execution, asCScriptFunction* Function, asBYTE* l_sp, asQWORD* valueRegister, void** objectRegister)
{
	asCScriptFunction* descr = Function;
	asSSystemFunctionInterface *sysFunc = descr->sysFuncIntf;

	int callConv = sysFunc->callConv;
	if (callConv == ICC_GENERIC_FUNC || callConv == ICC_GENERIC_METHOD)
	{
		void (*func)(asIScriptGeneric*) = (void (*)(asIScriptGeneric*))sysFunc->func;
		asDWORD *args = (asDWORD*)l_sp;

		// Verify the object pointer if it is a class method
		void *currentObject = 0;
		check( sysFunc->callConv == ICC_GENERIC_FUNC || sysFunc->callConv == ICC_GENERIC_METHOD );
		if( sysFunc->callConv == ICC_GENERIC_METHOD )
		{
			// The object pointer should be popped from the context stack
			// Check for null pointer
			currentObject = (void*)*(asPWORD*)(args);
			if( currentObject == 0 )
			{
				FStaticJITFunction::SetException(Execution, EJITException::NullPointer);
				return;
			}

			check( sysFunc->baseOffset == 0 );
		}

		asCGeneric gen(SCRIPT_ENGINE, descr, currentObject, args);

		auto* tld = Execution.tld;
		auto* prevActiveFunction = tld->activeFunction;
		tld->activeFunction = descr;

		func(&gen);

		tld->activeFunction = prevActiveFunction;

		*valueRegister = gen.returnVal;
		*objectRegister = (void*)gen.objectRegister;

		return;
	}

	if (sysFunc->caller.IsBound())
	{ 
		asDWORD* StackArgs = (asDWORD*)l_sp;

		void* FunctionArgs[32];
		void* ReturnAddress;
		unsigned int ArgIndex = 0;

		// Verify the object pointer if it is a class method
		void *currentObject = 0;
		if( sysFunc->callConv >= ICC_THISCALL )
		{
			// The object pointer should be popped from the context stack
			FunctionArgs[ArgIndex] = *(void**)&StackArgs[0];

			// Skip object pointer
			ArgIndex++;
		}

		// Some system functions want to know the script function that is being called
		if (sysFunc->passFirstParamMetaData != asEFirstParamMetaData::None)
		{
			if (sysFunc->passFirstParamMetaData == asEFirstParamMetaData::ScriptFunction)
			{
				FunctionArgs[ArgIndex] = descr;
				ArgIndex++;
			}
			else
			{
				FunctionArgs[ArgIndex] = descr->objectType;
				ArgIndex++;
			}
		}

		if( descr->DoesReturnOnStack() )
		{
			// Skip the address where the return value will be stored
			if (sysFunc->callConv >= ICC_THISCALL)
				ReturnAddress = *(void**)(StackArgs + AS_PTR_SIZE);
			else
				ReturnAddress = *(void**)StackArgs;

			// TODO: Do we need to destroy the object here in case of exception?
		}
		else if (descr->returnType.IsObjectHandle() && !descr->returnType.IsReference())
		{
			ReturnAddress = objectRegister;
		}
		else
		{
			ReturnAddress = valueRegister;
		}

		for (int i = 0, paramCount = descr->parameterOffsets.GetLength(); i < paramCount; ++i)
		{
			auto& paramType = descr->parameterTypes[i];
			auto paramOffset = descr->parameterOffsets[i];

			if (paramType.GetTokenType() == ttQuestion)
			{
				FunctionArgs[ArgIndex] = *(void**)&StackArgs[paramOffset];
				++ArgIndex;
				FunctionArgs[ArgIndex] = &StackArgs[paramOffset+2];
			}
			else if (paramType.IsObject() || paramType.IsReference())
			{
				FunctionArgs[ArgIndex] = *(void**)&StackArgs[paramOffset];
			}
			else
			{
				FunctionArgs[ArgIndex] = &StackArgs[paramOffset];
			}

			++ArgIndex;
		}

		auto* tld = Execution.tld;
		auto* prevActiveFunction = tld->activeFunction;
		tld->activeFunction = descr;

		if (sysFunc->caller.type == 1)
			sysFunc->caller.FunctionCaller(sysFunc->func, &FunctionArgs[0], ReturnAddress);
		else //if (sysFunc->caller.type == 2)
			sysFunc->caller.MethodCaller(sysFunc->method, &FunctionArgs[0], ReturnAddress);

		tld->activeFunction = prevActiveFunction;

		return;
	}

	checkf(false,
		TEXT("Function %s had no way to call it. Needs to be either generic or have a Caller."),
		ANSI_TO_TCHAR(Function->GetName()));
}
