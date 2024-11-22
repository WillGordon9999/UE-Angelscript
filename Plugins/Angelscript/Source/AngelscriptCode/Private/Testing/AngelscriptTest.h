#pragma once

#include "AngelscriptManager.h"
#include "Misc/AutomationTest.h"

class AssertFormatter;
struct FAngelscriptBinds;
class asIScriptFunction;

class FAngelscriptTest
{
public:
	/**
	 * @param Module 	The module where the test is defined.
	 * @param FunctionName 	The name of the test function.
	 * @param AngelscriptManager	The Angelscript manager.
	 */
	FAngelscriptTest(
        FAngelscriptModuleDesc* Module,
        asIScriptFunction* TestFunction,
        FAngelscriptManager* AngelscriptManager);
    ~FAngelscriptTest();

    /**
	 * Executes all the Angelscript in the test.
	 *
	 * The test is considered finished when PrintResults is called later.
	 * Normally this is done right after this method returns, but in
	 * integration tests we also have to wait for latent actions to finish.
	 *
	 * @param AngelscriptContext	The AS context to execute within. This contains
	 * 								the UWorld and AS environment.
	 */
    void StartTest(FAngelscriptContext& AngelscriptContext);

	/**
	 * @return ModuleName.Testname.
	 */
	FString QualifiedTestName() const;

	/**
	 * See documentation on FAutomationTestBase::AddExpectedError.
	 */
	void AddExpectedError(FString ExpectedPatternString, EAutomationExpectedErrorFlags::MatchType CompareType, int32 Occurrences);

	// If hot reloading: feed in all test errors here and then call HasMetExpectedErrors.
	bool IsExpectedError(const FString& Message);

	// If hot reloading: call this to discover if we missed any expected errors.
	bool HasMetExpectedErrors();

public:
	/**
	 * Exports the assert methods on this class as Angelscript methods.
	 *
	 * @param Binds The binding class to put the bindings on.
	 */
	static void BindAsserts(FAngelscriptBinds& Binds);

public:
    // These functions implement various asserts that ReportError if they fail.
	void Fail(const FString& Message);
	template <typename T>
	void AssertEquals(const T Expected, const T Actual, const FString& Message);
	template <typename T>
	void AssertNotEquals(const T Expected, const T Actual, const FString& Message);
	template <typename T>
	void AssertAlmostEquals(const T Expected, const T Actual, const T AbsError, const FString& Message);
	template <typename T>
	void AssertGreaterThan(const T Left, const T Right, const FString& Message);
	template <typename T>
	void AssertGreaterThanOrEqual(const T Left, const T Right, const FString& Message);
	template <typename T>
	void AssertLessThan(const T Left, const T Right, const FString& Message);
	template <typename T>
	void AssertLessThanOrEqual(const T Left, const T Right, const FString& Message);
	void AssertSame(const UObject* Expected, const UObject* Actual, const FString& Message);
	void AssertNotSame(const UObject* Expected, const UObject* Actual, const FString& Message);
	void AssertTrue(bool Expression, const FString& Message);
	void AssertFalse(bool Expression, const FString& Message);
	void AssertNull(const UObject* Object, const FString& Message);
	void AssertNotNull(const UObject* Object, const FString& Message);

public:
	/**
	 * Mark the test as failed.
	 *
	 * Only use this if you discover errors outside the test framework, and those errors
	 * are already in the log.
	 */
	void FailTest();

	// Reports error on the current Angelscript line (or the test function
	// declaration if the test is no longer running).
	void ReportErrorOnCurrentLine(const FString& Message);

	/**
	 * Reports an error through the Angelscript manager.
	 *
	 * This error shows up in the Problems pane in VSCode in practice.
	 * It is also printed to the Unreal log as an error, which will
	 * report an error to the automation framework if this test is
	 * running within the Unreal automation framework.
     *
	 * @param Message: A description of the error.
	 * @param Line: The Angelscript line associated with the error.
	 * @param Column: The Angelscript column associated with the error.
	 */
	void ReportError(const FString& Message, int Line, int Column);

protected:
	/**
	 * Get the current Angelscript line and column.
	 *
	 * @param Line Line to be filled in.
	 * @param Column Column to be filled in.
	 */
	void GetCurrentLineAndColumn(int& Line, int& Column) const;

private:
	FAngelscriptModuleDesc* Module;
	asIScriptFunction* TestFunction;
	FAngelscriptManager* AngelscriptManager;

	AssertFormatter* Formatter;

	TArray<FAutomationExpectedMessage> ExpectedErrors;
};

// Returns true if WITH_EDITOR is defined.
bool WithEditor();
