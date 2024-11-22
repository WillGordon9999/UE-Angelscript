#pragma once
#include "CoreMinimal.h"
#include "AngelscriptCodeModule.h"
#include "AngelscriptManager.h"
#include "HAL/IConsoleManager.h"

template<typename VarType>
struct FScriptConsoleVariable
{
	IConsoleVariable* Variable = nullptr;
	FDelegateHandle LateInitializeDelegateHandle;

	FScriptConsoleVariable(const FString& Name, VarType DefaultValue, const FString& Help)
	{
		Variable = IConsoleManager::Get().FindConsoleVariable(*Name);
		if (Variable == nullptr)
		{
			if (!FAngelscriptManager::Get().bIsInitialCompileFinished)
			{
				// If we're still in the initial compile, we should not initialize the CVar until after compile is finished.
				// The initial compile can happen on a separate thread, so registering it now might end up crashing.
				FString NameCopy = Name;
				FString HelpCopy = Help;
				LateInitializeDelegateHandle = FAngelscriptCodeModule::GetOnInitialCompileFinished().AddLambda(
					[this, NameCopy, DefaultValue, HelpCopy]()
					{
						Variable = IConsoleManager::Get().RegisterConsoleVariable(*NameCopy, DefaultValue, *HelpCopy);
						LateInitializeDelegateHandle.Reset();
					}
				);
			}
			else
			{
				Variable = IConsoleManager::Get().RegisterConsoleVariable(*Name, DefaultValue, *Help);
			}
		}
	}

	~FScriptConsoleVariable()
	{
		if (LateInitializeDelegateHandle.IsValid())
		{
			FAngelscriptCodeModule::GetOnInitialCompileFinished().Remove(LateInitializeDelegateHandle);
			LateInitializeDelegateHandle.Reset();
		}
	}

	bool GetBool() const
	{
		if(Variable == nullptr)
			return false;
		return Variable->GetBool();
	}
	
	float GetFloat() const
	{
		if (Variable == nullptr)
			return 0.f;
		return Variable->GetFloat();
	}

	int GetInt() const
	{
		if (Variable == nullptr)
			return 0;
		return Variable->GetInt();
	}
	
	void SetBool(const bool InValue) const
	{
		if(Variable == nullptr)
			return;
		Variable->Set(InValue);
	}

	void SetFloat(const float InValue) const
	{
		if(Variable == nullptr)
			return;
		Variable->Set(InValue);
	}
	
	void SetInt(const int InValue) const
	{
		if(Variable == nullptr)
			return;
		Variable->Set(InValue);
	}
};
