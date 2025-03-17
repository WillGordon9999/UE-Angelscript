#include "ASRuntimeBind_20Module.h"
#include "AngelscriptBinds.h"
#include "InterchangePipelineConfigurationBase.h"
#include "InterchangePipelineBase.h"
#include "InterchangeSourceData.h"
#include "InterchangeTranslatorBase.h"
#include "Nodes/InterchangeBaseNodeContainer.h"
#include "UObject/NoExportTypes.h"
void FASRuntimeBind_20Module::Bind_InterchangePipelineConfigurationBase()
{
			FAngelscriptBinds::AddFunctionEntry(UInterchangePipelineConfigurationBase::StaticClass(), "ScriptedShowPipelineConfigurationDialog", { ERASE_METHOD_PTR(UInterchangePipelineConfigurationBase, ScriptedShowPipelineConfigurationDialog, (TArray<FInterchangeStackInfo>&,  TArray<UInterchangePipelineBase*>&,  UInterchangeSourceData*,  UInterchangeTranslatorBase*,  UInterchangeBaseNodeContainer*), ERASE_ARGUMENT_PACK( EInterchangePipelineConfigurationDialogResult )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangePipelineConfigurationBase::StaticClass(), "ScriptedShowReimportPipelineConfigurationDialog", { ERASE_METHOD_PTR(UInterchangePipelineConfigurationBase, ScriptedShowReimportPipelineConfigurationDialog, (TArray<FInterchangeStackInfo>&,  TArray<UInterchangePipelineBase*>&,  UInterchangeSourceData*,  UInterchangeTranslatorBase*,  UInterchangeBaseNodeContainer*,  UObject*), ERASE_ARGUMENT_PACK( EInterchangePipelineConfigurationDialogResult )) } );
			FAngelscriptBinds::AddFunctionEntry(UInterchangePipelineConfigurationBase::StaticClass(), "ScriptedShowScenePipelineConfigurationDialog", { ERASE_METHOD_PTR(UInterchangePipelineConfigurationBase, ScriptedShowScenePipelineConfigurationDialog, (TArray<FInterchangeStackInfo>&,  TArray<UInterchangePipelineBase*>&,  UInterchangeSourceData*,  UInterchangeTranslatorBase*,  UInterchangeBaseNodeContainer*), ERASE_ARGUMENT_PACK( EInterchangePipelineConfigurationDialogResult )) } );
}
