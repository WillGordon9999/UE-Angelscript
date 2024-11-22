#include "ASRuntimeBind_40Module.h"
#include "AngelscriptBinds.h"
#include "FunctionalTest.h"
void FASRuntimeBind_40Module::Bind_AutomationPerformaceHelper()
{
			FAngelscriptBinds::AddFunctionEntry(UAutomationPerformaceHelper::StaticClass(), "BeginRecording", { ERASE_METHOD_PTR(UAutomationPerformaceHelper, BeginRecording, (FString, 	float,  float,  float), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UAutomationPerformaceHelper::StaticClass(), "BeginRecordingBaseline", { ERASE_METHOD_PTR(UAutomationPerformaceHelper, BeginRecordingBaseline, (FString), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UAutomationPerformaceHelper::StaticClass(), "BeginStatsFile", { ERASE_METHOD_PTR(UAutomationPerformaceHelper, BeginStatsFile, (const FString&), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UAutomationPerformaceHelper::StaticClass(), "EndRecording", { ERASE_METHOD_PTR(UAutomationPerformaceHelper, EndRecording, (), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UAutomationPerformaceHelper::StaticClass(), "EndRecordingBaseline", { ERASE_METHOD_PTR(UAutomationPerformaceHelper, EndRecordingBaseline, (), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UAutomationPerformaceHelper::StaticClass(), "EndStatsFile", { ERASE_METHOD_PTR(UAutomationPerformaceHelper, EndStatsFile, (), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UAutomationPerformaceHelper::StaticClass(), "IsCurrentRecordWithinGameThreadBudget", { ERASE_METHOD_PTR(UAutomationPerformaceHelper, IsCurrentRecordWithinGameThreadBudget, () const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UAutomationPerformaceHelper::StaticClass(), "IsCurrentRecordWithinGPUBudget", { ERASE_METHOD_PTR(UAutomationPerformaceHelper, IsCurrentRecordWithinGPUBudget, () const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UAutomationPerformaceHelper::StaticClass(), "IsCurrentRecordWithinRenderThreadBudget", { ERASE_METHOD_PTR(UAutomationPerformaceHelper, IsCurrentRecordWithinRenderThreadBudget, () const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UAutomationPerformaceHelper::StaticClass(), "IsRecording", { ERASE_METHOD_PTR(UAutomationPerformaceHelper, IsRecording, () const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UAutomationPerformaceHelper::StaticClass(), "OnAllTestsComplete", { ERASE_METHOD_PTR(UAutomationPerformaceHelper, OnAllTestsComplete, (), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UAutomationPerformaceHelper::StaticClass(), "OnBeginTests", { ERASE_METHOD_PTR(UAutomationPerformaceHelper, OnBeginTests, (), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UAutomationPerformaceHelper::StaticClass(), "Sample", { ERASE_METHOD_PTR(UAutomationPerformaceHelper, Sample, (float), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UAutomationPerformaceHelper::StaticClass(), "StartCPUProfiling", { ERASE_METHOD_PTR(UAutomationPerformaceHelper, StartCPUProfiling, (), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UAutomationPerformaceHelper::StaticClass(), "StopCPUProfiling", { ERASE_METHOD_PTR(UAutomationPerformaceHelper, StopCPUProfiling, (), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UAutomationPerformaceHelper::StaticClass(), "Tick", { ERASE_METHOD_PTR(UAutomationPerformaceHelper, Tick, (float), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UAutomationPerformaceHelper::StaticClass(), "TriggerGPUTraceIfRecordFallsBelowBudget", { ERASE_METHOD_PTR(UAutomationPerformaceHelper, TriggerGPUTraceIfRecordFallsBelowBudget, (), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UAutomationPerformaceHelper::StaticClass(), "WriteLogFile", { ERASE_METHOD_PTR(UAutomationPerformaceHelper, WriteLogFile, (const FString&,  const FString&), ERASE_ARGUMENT_PACK(void )) } );
}
