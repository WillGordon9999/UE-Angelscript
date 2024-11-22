#include "Bind_Debugging.h"

#include "AngelscriptBinds.h"
#include "AngelscriptManager.h"

#include "GameDelegates.h"

#include "UObject/UObjectIterator.h"
#include "UObject/PropertyPortFlags.h"
#include "UObject/UnrealType.h"

static bool GDebugBreaksEnabled = true;

static void ASDebugBreak()
{
	if (!GDebugBreaksEnabled)
		return;

#if WITH_AS_DEBUGSERVER
	if (FAngelscriptManager::Get().IsEvaluatingDebuggerWatch())
		return;
#endif

	volatile TArray<FString> ScriptCallstack = FAngelscriptManager::GetAngelscriptCallstack();
	if (FAngelscriptManager::TryBreakpointAngelscriptDebugging())
		return;

	UE_DEBUG_BREAK();
}

static int32 GEndPlayMapCount = 0;

void AngelscriptDisableDebugBreaks()
{
	GDebugBreaksEnabled = false;
}

void AngelscriptEnableDebugBreaks()
{
	GDebugBreaksEnabled = true;
}

static TMap<FString, int32>& GetPoppedEnsures()
{
	static TMap<FString, int32> PoppedEnsures;
	return PoppedEnsures;
}

void AngelscriptForgetSeenEnsures()
{
	GetPoppedEnsures().Empty();
}

static bool ASShouldBreakEnsure(const FString& Position)
{
#if DO_CHECK && !USING_CODE_ANALYSIS
	TMap<FString, int32>& PoppedEnsures = GetPoppedEnsures();
	int32* PreviousPop = PoppedEnsures.Find(Position);
	const bool bShouldBreak = (PreviousPop == nullptr) || (*PreviousPop != GEndPlayMapCount);
	if (bShouldBreak)
		PoppedEnsures.Add(Position, GEndPlayMapCount);
	return bShouldBreak;
#else
	return false;
#endif
}

AS_FORCE_LINK const FAngelscriptBinds::FBind Bind_Debugging([]
{
#if WITH_EDITOR
	FGameDelegates::Get().GetEndPlayMapDelegate().AddLambda([] {
		GEndPlayMapCount += 1;
	});
#endif

	FAngelscriptBinds::BindGlobalFunction("void DebugBreak()", &ASDebugBreak);

	FAngelscriptBinds::CompileOutAsEnsure(FAngelscriptBinds::BindGlobalFunction(
	"bool ensure(bool Condition)", [](bool Condition) -> bool
	{
#if WITH_AS_DEBUGSERVER
		if (FAngelscriptManager::Get().IsEvaluatingDebuggerWatch())
			return Condition;
#endif

#if DO_CHECK
		if (!Condition)
		{
			FString Position = FAngelscriptManager::GetAngelscriptExecutionPosition();
			if(ASShouldBreakEnsure(Position))
			{
				UE_LOG(Angelscript, Error, TEXT("Ensure condition failed\n%s"), *Position);
				ASDebugBreak();
			}
		}
#endif

		return Condition;
	}));

	FAngelscriptBinds::CompileOutAsEnsure(FAngelscriptBinds::BindGlobalFunction(
	"bool ensure(bool Condition, const FString& Message)",
	[](bool Condition, const FString& Message) -> bool
	{
#if WITH_AS_DEBUGSERVER
		if (FAngelscriptManager::Get().IsEvaluatingDebuggerWatch())
			return Condition;
#endif

#if DO_CHECK
		if (!Condition)
		{
			FString Position = FAngelscriptManager::GetAngelscriptExecutionPosition();
			if (ASShouldBreakEnsure(Position))
			{
				UE_LOG(Angelscript, Error, TEXT("Ensure condition failed: %s\n%s"), *Message, *Position);
				ASDebugBreak();
			}
		}
#endif
		return Condition;
	}));

	FAngelscriptBinds::CompileOutAsEnsure(FAngelscriptBinds::BindGlobalFunction(
	"bool ensureAlways(bool Condition)", [](bool Condition) -> bool
	{
#if WITH_AS_DEBUGSERVER
		if (FAngelscriptManager::Get().IsEvaluatingDebuggerWatch())
			return Condition;
#endif

#if DO_CHECK
		if (!Condition)
		{
			FString Position = FAngelscriptManager::GetAngelscriptExecutionPosition();
			UE_LOG(Angelscript, Error, TEXT("Ensure condition failed\n%s"), *Position);
			ASDebugBreak();
		}
#endif
		return Condition;
	}));

	FAngelscriptBinds::CompileOutAsEnsure(FAngelscriptBinds::BindGlobalFunction(
	"bool ensureAlways(bool Condition, const FString& Message)",
	[](bool Condition, const FString& Message) -> bool
	{
#if WITH_AS_DEBUGSERVER
		if (FAngelscriptManager::Get().IsEvaluatingDebuggerWatch())
			return Condition;
#endif

#if DO_CHECK
		if (!Condition)
		{
			FString Position = FAngelscriptManager::GetAngelscriptExecutionPosition();
			UE_LOG(Angelscript, Error, TEXT("Ensure condition failed: %s\n%s"), *Message, *Position);
			ASDebugBreak();
		}
#endif
		return Condition;
	}));

	FAngelscriptBinds::CompileOutAsCheck(FAngelscriptBinds::BindGlobalFunction(
	"void check(bool Condition)", [](bool Condition) -> void
	{
#if WITH_AS_DEBUGSERVER
		if (FAngelscriptManager::Get().IsEvaluatingDebuggerWatch())
			return;
#endif

#if DO_CHECK
		if (!Condition)
		{
			FString Position = FAngelscriptManager::GetAngelscriptExecutionPosition();
			UE_LOG(Angelscript, Error, TEXT("Check condition failed\n%s"), *Position);
			ASDebugBreak();
		}
#endif
	}));

	FAngelscriptBinds::CompileOutAsCheck(FAngelscriptBinds::BindGlobalFunction(
	"void check(bool Condition, const FString& Message)",
	[](bool Condition, const FString& Message) -> void
	{
#if WITH_AS_DEBUGSERVER
		if (FAngelscriptManager::Get().IsEvaluatingDebuggerWatch())
			return;
#endif

#if DO_CHECK
		if (!Condition)
		{
			FString Position = FAngelscriptManager::GetAngelscriptExecutionPosition();
			UE_LOG(Angelscript, Error, TEXT("Check condition failed: %s\n%s"), *Message, *Position);
			ASDebugBreak();
		}
#endif
	}));


	FAngelscriptBinds::BindGlobalFunction("void throw(const FString& Message)",
	[](const FString& Message)
	{
		FAngelscriptManager::Throw(TCHAR_TO_ANSI(*Message));
	});

	FAngelscriptBinds::BindGlobalFunction("TArray<FString> GetAngelscriptCallstack()",
	[]() -> TArray<FString>
	{
		return FAngelscriptManager::Get().GetAngelscriptCallstack();
	});

	FAngelscriptBinds::BindGlobalFunction("FString FormatAngelscriptCallstack()",
	[]() -> FString
	{
		return FAngelscriptManager::Get().FormatAngelscriptCallstack();
	});
});
