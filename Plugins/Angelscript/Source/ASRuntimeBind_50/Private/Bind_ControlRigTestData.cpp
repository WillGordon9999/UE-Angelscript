#include "ASRuntimeBind_50Module.h"
#include "AngelscriptBinds.h"
#include "ControlRigTestData.h"
#include "UObject/NoExportTypes.h"
#include "ControlRig.h"
void FASRuntimeBind_50Module::Bind_ControlRigTestData()
{
			FAngelscriptBinds::AddFunctionEntry(UControlRigTestData::StaticClass(), "GetFrameIndexForTime", { ERASE_METHOD_PTR(UControlRigTestData, GetFrameIndexForTime, (double,  bool) const, ERASE_ARGUMENT_PACK(int32 )) } );
			FAngelscriptBinds::AddFunctionEntry(UControlRigTestData::StaticClass(), "GetPlaybackMode", { ERASE_METHOD_PTR(UControlRigTestData, GetPlaybackMode, () const, ERASE_ARGUMENT_PACK(EControlRigTestDataPlaybackMode )) } );
			FAngelscriptBinds::AddFunctionEntry(UControlRigTestData::StaticClass(), "GetTimeRange", { ERASE_METHOD_PTR(UControlRigTestData, GetTimeRange, (bool) const, ERASE_ARGUMENT_PACK(FVector2D )) } );
			FAngelscriptBinds::AddFunctionEntry(UControlRigTestData::StaticClass(), "IsRecording", { ERASE_METHOD_PTR(UControlRigTestData, IsRecording, () const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UControlRigTestData::StaticClass(), "IsReplaying", { ERASE_METHOD_PTR(UControlRigTestData, IsReplaying, () const, ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UControlRigTestData::StaticClass(), "Record", { ERASE_METHOD_PTR(UControlRigTestData, Record, (UControlRig*,  double), ERASE_ARGUMENT_PACK(bool )) } );
			FAngelscriptBinds::AddFunctionEntry(UControlRigTestData::StaticClass(), "ReleaseReplay", { ERASE_METHOD_PTR(UControlRigTestData, ReleaseReplay, (), ERASE_ARGUMENT_PACK(void )) } );
			FAngelscriptBinds::AddFunctionEntry(UControlRigTestData::StaticClass(), "SetupReplay", { ERASE_METHOD_PTR(UControlRigTestData, SetupReplay, (UControlRig*,  bool), ERASE_ARGUMENT_PACK(bool )) } );
}
