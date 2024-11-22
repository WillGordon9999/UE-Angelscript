#include "DiscoverTests.h"

#include <functional>

#include "AngelscriptManager.h"
#include "Containers/UnrealString.h"

#include "StartAngelscriptHeaders.h"
//#include "as_context.h"
//#include "as_module.h"
#include "source/as_context.h"
#include "source/as_module.h"
#include "EndAngelscriptHeaders.h"

namespace
{

typedef TFunction<bool(asIScriptFunction *)> OneArgFunctionFilter;

// Filters AS functions as NameStartsWith*NameEndsWith(ArgType&*);
OneArgFunctionFilter CreateOneArgFilter(const char* NameStartsWith, const char* NameEndsWith, const char* ArgType)
{
	return [=](asIScriptFunction *F) {
		const char * const FuncName = F->GetName();
		SIZE_T lenSuffix = FCStringAnsi::Strlen(NameEndsWith);
		SIZE_T lenName = FCStringAnsi::Strlen(FuncName);
		if (FCStringAnsi::Strncmp(NameStartsWith, FuncName, FCStringAnsi::Strlen(NameStartsWith)) != 0)
		{
			return false;
		}
		if (FCStringAnsi::Strncmp(NameEndsWith, FuncName + lenName - lenSuffix, lenSuffix) != 0)
		{
			return false;
		}
		if (F->GetParamCount() != 1)
		{
			return false;
		}

		int TypeId;
		asDWORD Flags;

		if (F->GetParam(0, &TypeId, &Flags) != asSUCCESS)
		{
			return false;
		}
		asITypeInfo *Type = F->GetEngine()->GetTypeInfoById(TypeId);
		if (FCStringAnsi::Strcmp(Type->GetName(), ArgType) != 0)
		{
			return false;
		}
		bool bIsNonConstRef =
			(Flags & asTM_INOUTREF) == asTM_INOUTREF && (Flags & asTM_CONST) == 0;
		if (!bIsNonConstRef)
		{
			return false;
		}
		return true;
	};
}

void DiscoverWithFilter(
	const FAngelscriptModuleDesc &Module,
	TMap<FString, asIScriptFunction *> &Result,
	OneArgFunctionFilter Filter)
{
#if WITH_EDITOR
	const asIScriptModule *ScriptModule = Module.ScriptModule;
	if (!ScriptModule)
	{
		UE_LOG(Angelscript, Log,
			   TEXT("Skipping test discovery in %s (not compiling?)"),
			   *Module.ModuleName);
		return;
	}

	for (asUINT i = 0, iEnd = ScriptModule->GetFunctionCount(); i < iEnd; ++i)
	{
		asIScriptFunction *Function = ScriptModule->GetFunctionByIndex(i);
		if (Filter(Function))
		{
			Result.Add(Function->GetName(), Function);
		}
	}
#endif
}

} // namespace

void ComplexTestScriptCompileError(
	const FAngelscriptModuleDesc &Module,
	asIScriptFunction *TestFunction,
	const FString& Message)
{
	asCScriptFunction* InternalFunction = (asCScriptFunction*)TestFunction;
	FAngelscriptManager::FDiagnostic Diagnostic;
	Diagnostic.Row = InternalFunction->scriptData->declaredAt & 0xFFFFF;
	Diagnostic.Column = (InternalFunction->scriptData->declaredAt >> 20) & 0xFFF;
	Diagnostic.bIsError = true;
	Diagnostic.bIsInfo = false;
	Diagnostic.Message = Message;
	FAngelscriptManager::Get().ScriptCompileError(Module.Code[0].AbsoluteFilename, Diagnostic);
}

void RegisterSimpleFunctions(
	const TMap<FString, asIScriptFunction*> &SimpleTestFunctions,
	TMap<FString, FAngelscriptTestDesc> &TestFunctions)
{
	for (auto Element : SimpleTestFunctions)
	{
		FAngelscriptTestDesc TestDesc;
		TestDesc.Function = Element.Value;
		TestDesc.ComplexTestParam = nullptr;
		TestDesc.bIsComplexTest = false;
		TestFunctions.Add(Element.Key, TestDesc);
	}
}

void RegisterComplexFunctions(
	const FAngelscriptModuleDesc &Module,
	TMap<FString, asIScriptFunction*> &ComplexTestFunctions,
	TMap<FString, asIScriptFunction*> &ComplexTestGetTestsFunctions,
	TMap<FString, FAngelscriptTestDesc> &TestFunctions)
{
	for (auto Element : ComplexTestFunctions)
	{
		FString GetTestFunctionName = Element.Key + "_GetTests";
		if (!ComplexTestGetTestsFunctions.Contains(GetTestFunctionName))
		{
			ComplexTestScriptCompileError(Module, Element.Value,
				FString::Printf(TEXT("During test discovery I found a function %s, but there is no corresponding function %s(TArray&)"),
					*Element.Key, *GetTestFunctionName));
			continue;
		}
		asIScriptFunction *GetTestFunction = ComplexTestGetTestsFunctions.FindAndRemoveChecked(GetTestFunctionName);
		TArray<FString> OutTestCommands;
		FAngelscriptContext AngelscriptContext;
		AngelscriptContext->Prepare(GetTestFunction);
		AngelscriptContext->SetArgAddress(0, (void*)&OutTestCommands);
		AngelscriptContext->Execute();
		if (OutTestCommands.Num() == 0)
		{
			ComplexTestScriptCompileError(Module, GetTestFunction,
				FString::Printf(TEXT("During test discovery I found a function %s which does not produce any output parameters!"),
					*GetTestFunctionName));
			continue;
		}
		for (FString TestParam : OutTestCommands)
		{
			if (TestParam.IsEmpty())
			{
				ComplexTestScriptCompileError(Module, GetTestFunction,
					FString::Printf(TEXT("During test discovery I found a function %s which returns an empty string; the empty string is not a valid parameter!"),
						*GetTestFunctionName));
				break;
			}

			FAngelscriptTestDesc TestDesc;
			TestDesc.Function = Element.Value;
			TestDesc.ComplexTestParam = TestParam;
			TestDesc.bIsComplexTest = true;
			TestFunctions.Add(Element.Key + "[" + TestParam + "]", TestDesc);
		}
	}
}

void DiscoverUnitTests(
	const FAngelscriptModuleDesc &Module,
	TMap<FString, FAngelscriptTestDesc> &UnitTestFunctions)
{
	TMap<FString, asIScriptFunction*> UnitTestRunTestFunctions;
	OneArgFunctionFilter Filter = CreateOneArgFilter("Test_", "", "FUnitTest");
	DiscoverWithFilter(Module, UnitTestRunTestFunctions, Filter);
	RegisterSimpleFunctions(UnitTestRunTestFunctions, UnitTestFunctions);

	TMap<FString, asIScriptFunction*> ComplexUnitTestRunTestFunctions;
	OneArgFunctionFilter ComplexFilter = CreateOneArgFilter("ComplexUnitTest_", "", "FUnitTest");
	DiscoverWithFilter(Module, ComplexUnitTestRunTestFunctions, ComplexFilter);

	TMap<FString, asIScriptFunction*> ComplexUnitTestGetTestFunctions;
	ComplexFilter = CreateOneArgFilter("ComplexUnitTest_", "GetTests", "TArray");
	DiscoverWithFilter(Module, ComplexUnitTestGetTestFunctions, ComplexFilter);
	RegisterComplexFunctions(Module, ComplexUnitTestRunTestFunctions, ComplexUnitTestGetTestFunctions, UnitTestFunctions);
}

void DiscoverIntegrationTests(
	const FAngelscriptModuleDesc& Module,
	TMap<FString,
	FAngelscriptTestDesc>& IntegrationTestFunctions)
{
	TMap<FString, asIScriptFunction*> IntegrationTestRunTestFunctions;
	OneArgFunctionFilter Filter = CreateOneArgFilter("IntegrationTest_", "", "FIntegrationTest");
	DiscoverWithFilter(Module, IntegrationTestRunTestFunctions, Filter);
	RegisterSimpleFunctions(IntegrationTestRunTestFunctions, IntegrationTestFunctions);

	TMap<FString, asIScriptFunction*> ComplexIntegrationTestRunTestFunctions;
	OneArgFunctionFilter ComplexFilter = CreateOneArgFilter("ComplexIntegrationTest_", "", "FIntegrationTest");
	DiscoverWithFilter(Module, ComplexIntegrationTestRunTestFunctions, ComplexFilter);

	TMap<FString, asIScriptFunction*> ComplexIntegrationTestGetTestFunctions;
	ComplexFilter = CreateOneArgFilter("ComplexIntegrationTest_", "GetTests", "TArray");
	DiscoverWithFilter(Module, ComplexIntegrationTestGetTestFunctions, ComplexFilter);
	RegisterComplexFunctions(Module, ComplexIntegrationTestRunTestFunctions, ComplexIntegrationTestGetTestFunctions, IntegrationTestFunctions);
}