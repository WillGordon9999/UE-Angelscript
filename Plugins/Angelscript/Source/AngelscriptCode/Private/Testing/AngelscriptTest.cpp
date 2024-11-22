#include "Testing/AngelscriptTest.h"

#include "AngelscriptBinds.h"
#include "AngelscriptManager.h"
#include "Binds/Bind_Debugging.h"
#include "GameFramework/OnlineReplStructs.h"
#include "Misc/AutomationTest.h"

#include "StartAngelscriptHeaders.h"
//#include "as_context.h"
#include "source/as_context.h"
#include "EndAngelscriptHeaders.h"

// We need the editor running both when we invoke tests through hot reloading
// and through the automation system. If we don't have it, make asserts etc. do
// nothing but make sure they're defined, since production AngelScript code could
// - theoretically - call test code by accident.
bool WithEditor() {
#if WITH_EDITOR
	return true;
#else
	return false;
#endif
}

static FString LexToString(const FUniqueNetIdRepl& Value)
{
	return Value.ToString();
}

template <typename T>
void BindAssertEq(FAngelscriptBinds& Testing, const char* AngelScriptType)
{
	const FString Signature = FString::Printf(
		TEXT("void AssertEquals(const %s Expected, const %s Actual, const FString& Message = \"\")"),
		*FString(AngelScriptType), *FString(AngelScriptType));
	Testing.Method(Signature, [](
		FAngelscriptTest& Self, const T Expected, const T Actual, const FString& Message)
	{
		if (WithEditor())
		{
			Self.AssertEquals(Expected, Actual, Message);
		}
	});
}

template <typename T>
void BindAssertNotEq(FAngelscriptBinds& Testing, const char* AngelScriptType)
{
	const FString Signature = FString::Printf(
		TEXT("void AssertNotEquals(const %s Expected, const %s Actual, const FString& Message = \"\")"),
		*FString(AngelScriptType), *FString(AngelScriptType));
	Testing.Method(Signature, [](
		FAngelscriptTest& Self, const T Expected, const T Actual, const FString& Message)
	{
		if (WithEditor())
		{
			Self.AssertNotEquals(Expected, Actual, Message);
		}
	});
}

template <typename T>
void BindAssertAlmostEq(FAngelscriptBinds& UnitTest, const char* AngelScriptType)
{
	const FString Signature = FString::Printf(
		TEXT("void AssertAlmostEquals(const %s Expected, const %s Actual, const %s AbsError=0.0001f, const FString& Message = \"\")"),
		*FString(AngelScriptType), *FString(AngelScriptType), *FString(AngelScriptType));
	UnitTest.Method(
		Signature, [](FAngelscriptTest& Self, const T Expected, const T Actual, const T AbsError, const FString& Message) {
			if (WithEditor())
			{
				Self.AssertAlmostEquals(Expected, Actual, AbsError, Message);
			}
		});
}

template <typename T>
void BindAssertGreaterThan(FAngelscriptBinds& Testing, const char* AngelScriptType)
{
	const FString Signature = FString::Printf(
		TEXT("void AssertGreaterThan(const %s Left, const %s Right, const FString& Message = \"\")"),
		*FString(AngelScriptType), *FString(AngelScriptType));
	Testing.Method(Signature, [](
		FAngelscriptTest& Self, const T Left, const T Right, const FString& Message)
	{
		if (WithEditor())
		{
			Self.AssertGreaterThan(Left, Right, Message);
		}
	});
}
template <typename T>
void BindAssertGreaterThanOrEqual(FAngelscriptBinds& Testing, const char* AngelScriptType)
{
	const FString Signature = FString::Printf(
		TEXT("void AssertGreaterThanOrEqual(const %s Left, const %s Right, const FString& Message = \"\")"),
		*FString(AngelScriptType), *FString(AngelScriptType));
	Testing.Method(Signature, [](
		FAngelscriptTest& Self, const T Left, const T Right, const FString& Message)
	{
		if (WithEditor())
		{
			Self.AssertGreaterThanOrEqual(Left, Right, Message);
		}
	});
}

template <typename T>
void BindAssertLessThan(FAngelscriptBinds& Testing, const char* AngelScriptType)
{
	const FString Signature = FString::Printf(
		TEXT("void AssertLessThan(const %s Left, const %s Right, const FString& Message = \"\")"),
		*FString(AngelScriptType), *FString(AngelScriptType));
	Testing.Method(Signature, [](
		FAngelscriptTest& Self, const T Left, const T Right, const FString& Message)
	{
		if (WithEditor())
		{
			Self.AssertLessThan(Left, Right, Message);
		}
	});
}

template <typename T>
void BindAssertLessThanOrEqual(FAngelscriptBinds& Testing, const char* AngelScriptType)
{
	const FString Signature = FString::Printf(
		TEXT("void AssertLessThanOrEqual(const %s Left, const %s Right, const FString& Message = \"\")"),
		*FString(AngelScriptType), *FString(AngelScriptType));
	Testing.Method(Signature, [](
		FAngelscriptTest& Self, const T Left, const T Right, const FString& Message)
	{
		if (WithEditor())
		{
			Self.AssertLessThanOrEqual(Left, Right, Message);
		}
	});
}

void BindAssertSame(FAngelscriptBinds& Testing)
{
	// Only UObject subclasses can be references in AngelScript.
	const FString Signature = FString::Printf(TEXT(
		"void AssertSame(const UObject Expected, const UObject Actual, const FString& Message = \"\")"));
	Testing.Method(Signature, [](
		FAngelscriptTest& Self, const UObject* Expected, const UObject* Actual, const FString& Message)
	{
		if (WithEditor())
		{
			Self.AssertSame(Expected, Actual, Message);
		}
	});
}

void BindAssertNotSame(FAngelscriptBinds& Testing)
{
	const FString Signature = FString::Printf(TEXT(
		"void AssertNotSame(const UObject Expected, const UObject Actual, const FString& Message = \"\")"));
	Testing.Method(Signature, [](
		FAngelscriptTest& Self, const UObject* Expected, const UObject* Actual, const FString& Message)
	{
		if (WithEditor())
		{
			Self.AssertNotSame(Expected, Actual, Message);
		}
	});
}

void BindBasicAsserts(FAngelscriptBinds& Testing)
{
	Testing.Method("void Fail(const FString& Message)",
					[](FAngelscriptTest& Self, const FString& Message)
					{
						if (WithEditor()) {
							Self.Fail(Message);
						}
					});

	Testing.Method("void AssertTrue(bool Expression, const FString& Message = \"\")",
					[](FAngelscriptTest& Self, bool Expression, const FString& Message)
					{
						if (WithEditor()) {
							Self.AssertTrue(Expression, Message);
						}
					});

	Testing.Method("void AssertFalse(bool Expression, const FString& Message = \"\")",
					[](FAngelscriptTest& Self, bool Expression, const FString& Message)
					{
						if (WithEditor()) {
							Self.AssertFalse(Expression, Message);
						}
					});

	Testing.Method("void AssertNull(const UObject Object, const FString& Message = \"\")",
					[](FAngelscriptTest& Self, const UObject* Object,
					   const FString& Message)
					{
						if (WithEditor()) {
							Self.AssertNull(Object, Message);
						}
					});
	Testing.Method("void AssertNotNull(const UObject Object, const FString& Message = \"\")",
					[](FAngelscriptTest& Self, const UObject* Object,
					   const FString& Message)
					{
						if (WithEditor()) {
							Self.AssertNotNull(Object, Message);
						}
					});
}

void FAngelscriptTest::BindAsserts(FAngelscriptBinds& T)
{
	BindBasicAsserts(T);

	BindAssertEq<int>(T, "int");
	BindAssertEq<float>(T, "float32");
	BindAssertEq<double>(T, "float64");
	BindAssertEq<bool>(T, "bool");
	BindAssertEq<FName>(T, "FName");
	BindAssertEq<FString>(T, "FString");
	BindAssertEq<FVector>(T, "FVector");
	BindAssertEq<FRotator>(T, "FRotator");
	BindAssertEq<FUniqueNetIdRepl>(T, "FUniqueNetIdRepl");

	BindAssertNotEq<int>(T, "int");
	BindAssertNotEq<float>(T, "float32");
	BindAssertNotEq<double>(T, "float64");
	BindAssertNotEq<bool>(T, "bool");
	BindAssertNotEq<FName>(T, "FName");
	BindAssertNotEq<FString>(T, "FString");
	BindAssertNotEq<FVector>(T, "FVector");
	BindAssertNotEq<FRotator>(T, "FRotator");
	BindAssertNotEq<FUniqueNetIdRepl>(T, "FUniqueNetIdRepl");

	BindAssertAlmostEq<float>(T, "float32");
	BindAssertAlmostEq<double>(T, "float64");

	BindAssertLessThan<int>(T, "int");
	BindAssertLessThan<float>(T, "float32");
	BindAssertLessThan<double>(T, "float64");

	BindAssertGreaterThan<int>(T, "int");
	BindAssertGreaterThan<float>(T, "float32");
	BindAssertGreaterThan<double>(T, "float64");

	BindAssertLessThanOrEqual<int>(T, "int");
	BindAssertLessThanOrEqual<float>(T, "float32");
	BindAssertLessThanOrEqual<double>(T, "float64");

	BindAssertGreaterThanOrEqual<int>(T, "int");
	BindAssertGreaterThanOrEqual<float>(T, "float32");
	BindAssertGreaterThanOrEqual<double>(T, "float64");

	BindAssertSame(T);
	BindAssertNotSame(T);
}

class AssertFormatter
{
public:
	AssertFormatter(FString InTestNamespace, FString InTestFunctionName)
	{
		TestNamespace = InTestNamespace;
		TestFunctionName = InTestFunctionName;
	}

private:
	FString TestNamespace;
	FString TestFunctionName;

public:
	template<typename T>
	FString AssertFailed(
		const FString& AssertMessage, const FString& CustomMessage, const T Expected, const T Actual)
	{
		FString ErrorMessage = FString::Printf(
			TEXT("%s::%s\n%s\n Expected: `%s`\nActual: `%s`"),
			*TestNamespace, *TestFunctionName, *AssertMessage, *ToString(Expected), *ToString(Actual));

		if (!CustomMessage.IsEmpty())
		{
			ErrorMessage += "\n" + CustomMessage;
		}
		return ErrorMessage;
	}

	template<typename T>
	FString AssertFailed(
		const FString& AssertMessage, const FString& CustomMessage, const T Value)
	{
		FString ErrorMessage = FString::Printf(
			TEXT("%s::%s\n%s\n Got %s\nIn: %s"),
			*TestNamespace, *TestFunctionName, *AssertMessage, *ToString(Value));

		if (!CustomMessage.IsEmpty())
		{
			ErrorMessage += "\n" + CustomMessage;
		}
		return ErrorMessage;
	}

	FString AssertFailed(const FString& AssertMessage, const FString& CustomMessage)
	{
		FString ErrorMessage = AssertMessage;
		if (!CustomMessage.IsEmpty())
		{
			ErrorMessage += "\n" + CustomMessage;
		}
		return ErrorMessage;
	}

private:
	// LexToString can deal with basic types; add specializations below for complex types.
	// ToString should return something that clearly represents the value as a string.
	template<typename T>
	FString ToString(T Value)
	{
		return LexToString(Value);
	}

	template<>
	FString ToString(FVector Value) {
		return Value.ToString();
	}

	template<>
	FString ToString(const FRotator Value) {
		return Value.ToString();
	}

	template<>
	FString ToString(const UObject* Value) {
		return Value->GetPathName();
	}
};

FAngelscriptTest::FAngelscriptTest(FAngelscriptModuleDesc* Module, asIScriptFunction* TestFunction, FAngelscriptManager* AngelscriptManager)
	: Module(Module), TestFunction(TestFunction), AngelscriptManager(AngelscriptManager)
{
    Formatter = new AssertFormatter(FString(ANSI_TO_TCHAR(TestFunction->GetNamespace())), FString(ANSI_TO_TCHAR(TestFunction->GetName())));
}

FAngelscriptTest::~FAngelscriptTest()
{
    delete Formatter;
}

void FAngelscriptTest::StartTest(FAngelscriptContext& AngelscriptContext)
{
	// Make sure to forget if we hit any ensures - they should consistently fail the
	// test even on hot reloads etc.
	AngelscriptForgetSeenEnsures();

	AngelscriptContext->Prepare(TestFunction);
	AngelscriptContext->SetArgObject(0, this);
	switch (AngelscriptContext->Execute())
	{
		case asEXECUTION_EXCEPTION:
		case asEXECUTION_ERROR:
			// TODO: this doesn't work for some reason; nullptrs in test functions does not trigger this line.
			ReportErrorOnCurrentLine("Test failed to execute or threw exception.");
			break;
		default:
			break;
	};
}

void FAngelscriptTest::ReportError(const FString& Message, int Line, int Column)
{
	if (Message.IsEmpty())
	{
		AngelscriptManager->Throw("The message can't be empty");
		return;
	}


	FAngelscriptManager::FDiagnostic Diagnostic;
	Diagnostic.Row = Line;
	Diagnostic.Column = Column;
	Diagnostic.bIsError = true;
	Diagnostic.bIsInfo = false;
	Diagnostic.Message = Message;

	// ScriptCompileError logs an error to the Unreal log, which is sufficient to break
	// the test if we're running in the automation framework or on hot reload.
	const FString& Filename = Module->Code[0].AbsoluteFilename;
	AngelscriptManager->ScriptCompileError(Filename, Diagnostic);
}

void FAngelscriptTest::ReportErrorOnCurrentLine(const FString& Message)
{
	int Line;
	int Column;
	GetCurrentLineAndColumn(Line, Column);
	ReportError(Message, Line, Column);
}

void FAngelscriptTest::GetCurrentLineAndColumn(int& Line, int& Column) const
{
	asIScriptContext* ActiveContext = asGetActiveContext();
	if (ActiveContext == nullptr) {
		// Looks like we've exited the current context, fall back to the
		// line the test function was declared on instead.
		asCScriptFunction* InternalFunction = (asCScriptFunction*)TestFunction;
		Line = InternalFunction->scriptData->declaredAt & 0xFFFFF;
		Column = (InternalFunction->scriptData->declaredAt >> 20) & 0xFFF;
	} else {
		Line = ActiveContext->GetLineNumber(0, &Column);
	}
}

FString FAngelscriptTest::QualifiedTestName() const
{
	return Module->ModuleName + "." + TestFunction->GetName();
}

void FAngelscriptTest::AddExpectedError(FString ExpectedPatternString, EAutomationExpectedErrorFlags::MatchType CompareType, int32 Occurrences)
{
	// Hand to the automation framework or our own list if we're hot reloading.
	FAutomationTestBase* CurrentTest = FAutomationTestFramework::Get().GetCurrentTest();
	if (CurrentTest) {
		CurrentTest->AddExpectedError(ExpectedPatternString, CompareType, Occurrences);
	}
	else
	{
		FAutomationExpectedMessage* FoundEntry = ExpectedErrors.FindByPredicate(
			[ExpectedPatternString](const FAutomationExpectedMessage& InItem)
				{
					return InItem.MessagePatternString == ExpectedPatternString;
				}
		);

		if (FoundEntry)
		{
			UE_LOG(Angelscript, Warning, TEXT("Adding expected error matching '%s' failed: cannot add duplicate entries"), *ExpectedPatternString)
			return;
		}
		UE_LOG(Angelscript, Warning, TEXT("Note: The following errors are expected (unit testing error paths): \"%s\"."), *ExpectedPatternString);
		ExpectedErrors.Add(FAutomationExpectedMessage(ExpectedPatternString, ELogVerbosity::Error, CompareType, Occurrences));
	}
}

bool FAngelscriptTest::IsExpectedError(const FString& Message)
{
	if (FAutomationTestFramework::Get().GetCurrentTest() != nullptr)
	{
		// Only use this function when hot reloading.
		return false;
	}

	for (auto& EError : ExpectedErrors)
	{
		if (!EError.MessagePatternRegex.IsSet())
			continue;

		FRegexMatcher ErrorMatcher(EError.MessagePatternRegex.GetValue(), Message);

		if (ErrorMatcher.FindNext())
		{
			EError.ActualNumberOfOccurrences++;
			return true;
		}
	}
	return false;
}

// Note: copied from AutomationTest.cpp, keep this in sync with that algorithm.
bool FAngelscriptTest::HasMetExpectedErrors()
{
	if (FAutomationTestFramework::Get().GetCurrentTest() != nullptr)
	{
		// Only use this function when hot reloading.
		return true;
	}

	bool HasMetAllExpectedErrors = true;

	for (auto& EError : ExpectedErrors)
	{
		if ((EError.ExpectedNumberOfOccurrences > 0) && (EError.ExpectedNumberOfOccurrences != EError.ActualNumberOfOccurrences))
		{
			HasMetAllExpectedErrors = false;

			// Report the error on line 1, 0 here. Figure out how to get the test function start line?
			ReportError(FString::Printf(
				TEXT("%s: Expected Error or Warning matching '%s' to occur %d times with %s match type, but it was found %d time(s).")
					, *QualifiedTestName()
					, *EError.MessagePatternString
					, EError.ExpectedNumberOfOccurrences
					, EAutomationExpectedErrorFlags::ToString(EError.CompareType)
					, EError.ActualNumberOfOccurrences),
				1, 0);
		}
		else if (EError.ExpectedNumberOfOccurrences == 0)
		{
			if (EError.ActualNumberOfOccurrences == 0)
			{
				HasMetAllExpectedErrors = false;

				ReportError(FString::Printf(TEXT("%s: Expected suppressed Error or Warning matching '%s' did not occur.")
					, *QualifiedTestName()
					, *EError.MessagePatternString),
				1, 0);
			}
			else
			{
				UE_LOG(Angelscript, Log,
					TEXT("Suppressed expected Error or Warning matching '%s' %d times.")
						, *EError.MessagePatternString
						, EError.ActualNumberOfOccurrences);
			}
		}
	}

	return HasMetAllExpectedErrors;
}

void FAngelscriptTest::Fail(const FString& Message)
{
	ReportErrorOnCurrentLine(Message);
}

template <typename T>
void FAngelscriptTest::AssertEquals(const T Expected, const T Actual, const FString& Message)
{
	if (UNLIKELY(Expected != Actual))
	{
		ReportErrorOnCurrentLine(Formatter->AssertFailed(
			TEXT("Assert failed (Expected == Actual)"),
			Message, Expected, Actual));
	}
}

template <>
void FAngelscriptTest::AssertEquals(const FVector Expected, const FVector Actual, const FString& Message)
{
	FVector Diff = Expected - Actual;
	if (UNLIKELY(Diff.Size() > 0.001))
	{
		ReportErrorOnCurrentLine(Formatter->AssertFailed(
			TEXT("Assert failed (FVector (Expected - Actual).Size() <= 0.001"),
			Message, Expected, Actual));
	}
}

template <>
void FAngelscriptTest::AssertEquals(const FRotator Expected, const FRotator Actual, const FString& Message)
{
	FRotator Diff = Expected - Actual;
	if (UNLIKELY(FGenericPlatformMath::Abs(Diff.Pitch) > 0.001 || FGenericPlatformMath::Abs(Diff.Yaw) > 0.001 || FGenericPlatformMath::Abs(Diff.Roll) > 0.001))
	{
		ReportErrorOnCurrentLine(Formatter->AssertFailed(
			TEXT("Assert failed (FRotator (Expected - Actual).Pitch|.Yaw|.Roll <= 0.001"),
			Message, Expected, Actual));
	}
}

UE_DISABLE_OPTIMIZATION
template <typename T>
void FAngelscriptTest::AssertNotEquals(const T Expected, const T Actual, const FString& Message)
{
	if (UNLIKELY(Expected == Actual))
	{
		ReportErrorOnCurrentLine(Formatter->AssertFailed(
			TEXT("Assert failed (Expected != Actual)"),
			Message, Expected, Actual));
	}
}
UE_ENABLE_OPTIMIZATION

template <>
void FAngelscriptTest::AssertNotEquals(const FVector Expected, const FVector Actual, const FString& Message)
{
	FVector Diff = Expected - Actual;
	if (UNLIKELY(Diff.Size() < 0.001))
	{
		ReportErrorOnCurrentLine(Formatter->AssertFailed(
			TEXT("Assert failed (FVector (Expected - Actual).Size() => 0.001"),
			Message, Expected, Actual));
	}
}

template <>
void FAngelscriptTest::AssertNotEquals(const FRotator Expected, const FRotator Actual, const FString& Message)
{
	FRotator Diff = Expected - Actual;
	if (UNLIKELY(FGenericPlatformMath::Abs(Diff.Pitch) < 0.001 && FGenericPlatformMath::Abs(Diff.Yaw) < 0.001 && FGenericPlatformMath::Abs(Diff.Roll) < 0.001))
	{
		ReportErrorOnCurrentLine(Formatter->AssertFailed(
			TEXT("Assert failed (FRotator (Expected - Actual).Pitch|.Yaw|.Roll => 0.001"),
			Message, Expected, Actual));
	}
}

template <typename T>
void FAngelscriptTest::AssertAlmostEquals(const T Expected, const T Actual, const T AbsError, const FString& Message)
{
	T Difference = FGenericPlatformMath::Abs(Expected - Actual);
	if (UNLIKELY(Difference >= AbsError))
	{
		FString AssertMsg =
			FString::Printf(TEXT("Assert failed |Expected - Actual| (%s) < %s"), *LexToString(Difference), *LexToString(AbsError));
		ReportErrorOnCurrentLine(Formatter->AssertFailed(AssertMsg, Message, Expected, Actual));
	}
}

template <typename T>
void FAngelscriptTest::AssertGreaterThan(const T Left, const T Right, const FString& Message)
{
	if (UNLIKELY(Left <= Right))
	{
		ReportErrorOnCurrentLine(Formatter->AssertFailed(
			TEXT("Assert failed (Left > Right)"),
			Message, Left, Right));
	}
}

template <typename T>
void FAngelscriptTest::AssertGreaterThanOrEqual(const T Left, const T Right, const FString& Message)
{
	if (UNLIKELY(Left < Right))
	{
		ReportErrorOnCurrentLine(Formatter->AssertFailed(
			TEXT("Assert failed (Left >= Right)"),
			Message, Left, Right));
	}
}

template <typename T>
void FAngelscriptTest::AssertLessThan(const T Left, const T Right, const FString& Message)
{
	if (UNLIKELY(Left >= Right))
	{
		ReportErrorOnCurrentLine(Formatter->AssertFailed(
			TEXT("Assert failed (Left < Right)"),
			Message, Left, Right));
	}
}

template <typename T>
void FAngelscriptTest::AssertLessThanOrEqual(const T Left, const T Right, const FString& Message)
{
	if (UNLIKELY(Left > Right))
	{
		ReportErrorOnCurrentLine(Formatter->AssertFailed(
			TEXT("Assert failed (Left <= Right)"),
			Message, Left, Right));
	}
}

void FAngelscriptTest::AssertSame(const UObject* Expected, const UObject* Actual, const FString& Message)
{
	if (UNLIKELY(Expected != Actual))
	{
		ReportErrorOnCurrentLine(Formatter->AssertFailed(
			TEXT("Assertion failed (Expected is same object as Actual)"),
		    Message, Expected, Actual));
	}
}

void FAngelscriptTest::AssertNotSame(const UObject* Expected, const UObject* Actual, const FString& Message)
{
	if (UNLIKELY(Expected == Actual))
	{
		ReportErrorOnCurrentLine(Formatter->AssertFailed(
			TEXT("Assertion failed (Expected is not the same object as Actual)"),
		    Message, Expected, Actual));
	}
}

void FAngelscriptTest::AssertTrue(bool Expression, const FString& Message)
{
	if (UNLIKELY(!Expression))
	{
		ReportErrorOnCurrentLine(Formatter->AssertFailed(
			TEXT("Assertion failed (Expected true, got false)"),
			Message));
	}
}

void FAngelscriptTest::AssertFalse(bool Expression, const FString& Message)
{
	if (UNLIKELY(Expression))
	{
		ReportErrorOnCurrentLine(Formatter->AssertFailed(
			TEXT("Assertion failed (Expected false, got true)"),
			Message));
	}
}

void FAngelscriptTest::AssertNull(const UObject* Object, const FString& Message)
{
	if (UNLIKELY(Object != nullptr))
	{
		ReportErrorOnCurrentLine(Formatter->AssertFailed(
			TEXT("Assertion failed (Expected nullptr)"),
			Message, Object));
	}
}

void FAngelscriptTest::AssertNotNull(const UObject* Object, const FString& Message)
{
	if (UNLIKELY(Object == nullptr))
	{
		ReportErrorOnCurrentLine(Formatter->AssertFailed(
			TEXT("Assertion failed (Expected valid pointer, got nullptr)"),
			Message));
	}
}
