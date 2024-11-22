#include "AngelscriptBinds/Bind_Console.h"
#include "HAL/IConsoleManager.h"
#include "Engine/World.h"

#include "AngelscriptManager.h"
#include "AngelscriptBinds.h"
#include "AngelscriptSharedPtr.h"
#include "AngelscriptCodeModule.h"

#include "StartAngelscriptHeaders.h"
//#include "as_context.h"
#include "source/as_context.h"
#include "EndAngelscriptHeaders.h"

AS_FORCE_LINK const FAngelscriptBinds::FBind Bind_ConsoleVariables((int32)FAngelscriptBinds::EOrder::Late - 1, []
{
	FBindFlags Flags;
	auto FConsoleVariable_ = FAngelscriptBinds::ValueClass<FScriptConsoleVariable<int32>>("FConsoleVariable", Flags);

	FConsoleVariable_.Constructor("void f(const FString& Name, int DefaultValue, const FString& Help = \"\")",
	[](void* Memory, const FString& Name, int32 DefaultValue, const FString& Help)
	{
		new(Memory) FScriptConsoleVariable<int32>(Name, DefaultValue, Help);
	});

	FConsoleVariable_.Constructor("void f(const FString& Name, float32 DefaultValue, const FString& Help = \"\")",
	[](void* Memory, const FString& Name, float DefaultValue, const FString& Help)
	{
		new(Memory) FScriptConsoleVariable<float>(Name, DefaultValue, Help);
	});

	FConsoleVariable_.Destructor("void f()",
	[](FScriptConsoleVariable<int32>* Memory)
	{
		Memory->~FScriptConsoleVariable<int32>();
	});


	FConsoleVariable_.Method("bool GetBool() const", &FScriptConsoleVariable<bool>::GetBool);
	FConsoleVariable_.Method("float32 GetFloat() const", &FScriptConsoleVariable<float>::GetFloat);
	FConsoleVariable_.Method("int GetInt() const", &FScriptConsoleVariable<int>::GetInt);
	
	FConsoleVariable_.Method("void SetBool(bool InValue) const", &FScriptConsoleVariable<bool>::SetBool);
	FConsoleVariable_.Method("void SetFloat(float32 InValue) const", &FScriptConsoleVariable<float>::SetFloat);
	FConsoleVariable_.Method("void SetInt(int InValue) const", &FScriptConsoleVariable<int32>::SetInt);
});

struct FScriptConsoleCommand
{
	IConsoleCommand* Command = nullptr;
	FString CommandName;

	FScriptConsoleCommand(const FString& Name, const FString& FunctionName)
	{
#if !UE_BUILD_SHIPPING
		auto* Context = FAngelscriptManager::Get().GetPreviousScriptContext();
		asIScriptFunction* Function = Context->GetFunction(0);
		if (!ensure(Function != nullptr))
			return;

		asIScriptModule* Module = Function->GetModule();
		if (!ensure(Module != nullptr))
			return;

		FString Decl = FString::Printf(TEXT("void %s(const TArray<FString>& Args)"), *FunctionName);
		auto* CallFunction = Module->GetFunctionByDecl(TCHAR_TO_ANSI(*Decl));
		if (CallFunction == nullptr)
		{
			auto* NamedFunction = Module->GetFunctionByName(TCHAR_TO_ANSI(*FunctionName));

			FString Message;
			if (NamedFunction == nullptr)
				Message = FString::Printf(TEXT("Could not find global function '%s' to bind as console command."), *FunctionName);
			else
				Message = FString::Printf(TEXT("Global function for console command must have signature `void %s(TArray<FString> Arguments)`"), *FunctionName);

			FAngelscriptManager::Throw(TCHAR_TO_ANSI(*Message));
			return;
		}

		TAngelscriptSharedPtr<asIScriptFunction> FunPtr = CallFunction;

		auto* Existing = IConsoleManager::Get().FindConsoleObject(*Name);
		if (Existing != nullptr)
			IConsoleManager::Get().UnregisterConsoleObject(Existing);

		CommandName = Name;
		Command = IConsoleManager::Get().RegisterConsoleCommand(*Name, TEXT(""),

		FConsoleCommandWithWorldAndArgsDelegate::CreateLambda(
		[FunPtr](const TArray<FString>& Args, UWorld* World)
		{
			if (!FunPtr.IsValid())
				return;
			auto* Module = FunPtr->GetModule();
			if (Module == nullptr)
				return;

			FAngelscriptContext Context(World);
			Context->Prepare(FunPtr.Get());
			Context->SetArgAddress(0, (void*)&Args);
			Context->Execute();
		}));
#endif
	}

	~FScriptConsoleCommand()
	{
#if !UE_BUILD_SHIPPING
		// Make sure the command is still registered. If it's already been unregistered then Command is now
		// a pointer to deleted memory, so we should not unregister it again.
		auto* RegisteredCommand = IConsoleManager::Get().FindConsoleObject(*CommandName);
		if (RegisteredCommand == Command)
			IConsoleManager::Get().UnregisterConsoleObject(Command);
#endif
	}
};

AS_FORCE_LINK const FAngelscriptBinds::FBind Bind_ConsoleCommands((int32)FAngelscriptBinds::EOrder::Late - 1, []
{
	FBindFlags Flags;
	auto FConsoleCommand_ = FAngelscriptBinds::ValueClass<FScriptConsoleCommand>("FConsoleCommand", Flags);

	FConsoleCommand_.Constructor("void f(const FString& Name, const FName& FunctionName)",
	[](void* Memory, const FString& Name, const FName& FunctionName)
	{
		new(Memory) FScriptConsoleCommand(Name, FunctionName.ToString());
	});

	FConsoleCommand_.Destructor("void f()",
	[](FScriptConsoleCommand* Memory)
	{
		Memory->~FScriptConsoleCommand();
	});
});
