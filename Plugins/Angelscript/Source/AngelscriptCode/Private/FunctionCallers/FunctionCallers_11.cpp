#pragma once
//#include"FunctionCallers.h"
/*
{ ERASE_METHOD_PTR(FNiagaraDynamicMeshSection, opAssign, (const FNiagaraDynamicMeshSection&), ERASE_ARGUMENT_PACK(FNiagaraDynamicMeshSection&)) },


{ ERASE_METHOD_PTR(FNiagaraDynamicMeshMaterial, opAssign, (const FNiagaraDynamicMeshMaterial&), ERASE_ARGUMENT_PACK(FNiagaraDynamicMeshMaterial&)) },


{ ERASE_METHOD_PTR(FNDIStaticMeshSectionFilter, opAssign, (const FNDIStaticMeshSectionFilter&), ERASE_ARGUMENT_PACK(FNDIStaticMeshSectionFilter&)) },


{ ERASE_METHOD_PTR(FNiagaraUObjectPropertyReaderRemap, opAssign, (const FNiagaraUObjectPropertyReaderRemap&), ERASE_ARGUMENT_PACK(FNiagaraUObjectPropertyReaderRemap&)) },


{ ERASE_METHOD_PTR(FNiagaraBakerTextureSource, opAssign, (const FNiagaraBakerTextureSource&), ERASE_ARGUMENT_PACK(FNiagaraBakerTextureSource&)) },


{ ERASE_METHOD_PTR(FNiagaraBakerTextureSettings, opAssign, (const FNiagaraBakerTextureSettings&), ERASE_ARGUMENT_PACK(FNiagaraBakerTextureSettings&)) },
{ ERASE_METHOD_PTR(FNiagaraBakerTextureSettings, SetbUseFrameSize, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FNiagaraDataInterfaceEmitterBinding, opAssign, (const FNiagaraDataInterfaceEmitterBinding&), ERASE_ARGUMENT_PACK(FNiagaraDataInterfaceEmitterBinding&)) },


{ ERASE_METHOD_PTR(FBasicParticleData, opAssign, (const FBasicParticleData&), ERASE_ARGUMENT_PACK(FBasicParticleData&)) },


{ ERASE_METHOD_PTR(FMeshTriCoordinate, opAssign, (const FMeshTriCoordinate&), ERASE_ARGUMENT_PACK(FMeshTriCoordinate&)) },


{ ERASE_METHOD_PTR(FNiagaraOutlinerTimingData, opAssign, (const FNiagaraOutlinerTimingData&), ERASE_ARGUMENT_PACK(FNiagaraOutlinerTimingData&)) },


{ ERASE_METHOD_PTR(FNiagaraOutlinerEmitterInstanceData, opAssign, (const FNiagaraOutlinerEmitterInstanceData&), ERASE_ARGUMENT_PACK(FNiagaraOutlinerEmitterInstanceData&)) },


{ ERASE_METHOD_PTR(FNiagaraOutlinerSystemInstanceData, opAssign, (const FNiagaraOutlinerSystemInstanceData&), ERASE_ARGUMENT_PACK(FNiagaraOutlinerSystemInstanceData&)) },


{ ERASE_METHOD_PTR(FNiagaraOutlinerSystemData, opAssign, (const FNiagaraOutlinerSystemData&), ERASE_ARGUMENT_PACK(FNiagaraOutlinerSystemData&)) },


{ ERASE_METHOD_PTR(FNiagaraOutlinerWorldData, opAssign, (const FNiagaraOutlinerWorldData&), ERASE_ARGUMENT_PACK(FNiagaraOutlinerWorldData&)) },


{ ERASE_METHOD_PTR(FNiagaraOutlinerData, opAssign, (const FNiagaraOutlinerData&), ERASE_ARGUMENT_PACK(FNiagaraOutlinerData&)) },


{ ERASE_METHOD_PTR(FNiagaraDebuggerRequestConnection, opAssign, (const FNiagaraDebuggerRequestConnection&), ERASE_ARGUMENT_PACK(FNiagaraDebuggerRequestConnection&)) },


{ ERASE_METHOD_PTR(FNiagaraDebuggerAcceptConnection, opAssign, (const FNiagaraDebuggerAcceptConnection&), ERASE_ARGUMENT_PACK(FNiagaraDebuggerAcceptConnection&)) },


{ ERASE_METHOD_PTR(FNiagaraDebuggerConnectionClosed, opAssign, (const FNiagaraDebuggerConnectionClosed&), ERASE_ARGUMENT_PACK(FNiagaraDebuggerConnectionClosed&)) },


{ ERASE_METHOD_PTR(FNiagaraDebuggerExecuteConsoleCommand, opAssign, (const FNiagaraDebuggerExecuteConsoleCommand&), ERASE_ARGUMENT_PACK(FNiagaraDebuggerExecuteConsoleCommand&)) },


{ ERASE_METHOD_PTR(FNiagaraDebuggerOutlinerUpdate, opAssign, (const FNiagaraDebuggerOutlinerUpdate&), ERASE_ARGUMENT_PACK(FNiagaraDebuggerOutlinerUpdate&)) },


{ ERASE_METHOD_PTR(FNiagaraDebugHudTextOptions, opAssign, (const FNiagaraDebugHudTextOptions&), ERASE_ARGUMENT_PACK(FNiagaraDebugHudTextOptions&)) },


{ ERASE_METHOD_PTR(FNiagaraDebugHUDVariable, opAssign, (const FNiagaraDebugHUDVariable&), ERASE_ARGUMENT_PACK(FNiagaraDebugHUDVariable&)) },


{ ERASE_METHOD_PTR(FNiagaraDebugHUDSettingsData, opAssign, (const FNiagaraDebugHUDSettingsData&), ERASE_ARGUMENT_PACK(FNiagaraDebugHUDSettingsData&)) },


{ ERASE_METHOD_PTR(FNiagaraOutlinerCaptureSettings, opAssign, (const FNiagaraOutlinerCaptureSettings&), ERASE_ARGUMENT_PACK(FNiagaraOutlinerCaptureSettings&)) },


{ ERASE_METHOD_PTR(FNiagaraSimpleClientInfo, opAssign, (const FNiagaraSimpleClientInfo&), ERASE_ARGUMENT_PACK(FNiagaraSimpleClientInfo&)) },


{ ERASE_METHOD_PTR(FNiagaraSystemSimCacheCaptureRequest, opAssign, (const FNiagaraSystemSimCacheCaptureRequest&), ERASE_ARGUMENT_PACK(FNiagaraSystemSimCacheCaptureRequest&)) },


{ ERASE_METHOD_PTR(FNiagaraLinearRamp, opAssign, (const FNiagaraLinearRamp&), ERASE_ARGUMENT_PACK(FNiagaraLinearRamp&)) },


{ ERASE_METHOD_PTR(FNiagaraGlobalBudgetScaling, opAssign, (const FNiagaraGlobalBudgetScaling&), ERASE_ARGUMENT_PACK(FNiagaraGlobalBudgetScaling&)) },
{ ERASE_METHOD_PTR(FNiagaraGlobalBudgetScaling, SetbCullByGlobalBudget, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FNiagaraGlobalBudgetScaling, SetbScaleMaxDistanceByGlobalBudgetUse, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FNiagaraGlobalBudgetScaling, SetbScaleMaxInstanceCountByGlobalBudgetUse, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FNiagaraGlobalBudgetScaling, SetbScaleSystemInstanceCountByGlobalBudgetUse, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FNiagaraSystemVisibilityCullingSettings, opAssign, (const FNiagaraSystemVisibilityCullingSettings&), ERASE_ARGUMENT_PACK(FNiagaraSystemVisibilityCullingSettings&)) },
{ ERASE_METHOD_PTR(FNiagaraSystemVisibilityCullingSettings, SetbCullWhenNotRendered, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FNiagaraSystemVisibilityCullingSettings, SetbCullByViewFrustum, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FNiagaraSystemVisibilityCullingSettings, SetbAllowPreCullingByViewFrustum, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FNiagaraSystemScalabilitySettings, opAssign, (const FNiagaraSystemScalabilitySettings&), ERASE_ARGUMENT_PACK(FNiagaraSystemScalabilitySettings&)) },
{ ERASE_METHOD_PTR(FNiagaraSystemScalabilitySettings, SetbCullByDistance, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FNiagaraSystemScalabilitySettings, SetbCullMaxInstanceCount, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FNiagaraSystemScalabilitySettings, SetbCullPerSystemMaxInstanceCount, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FNiagaraPlatformSet, opAssign, (const FNiagaraPlatformSet&), ERASE_ARGUMENT_PACK(FNiagaraPlatformSet&)) },


{ ERASE_METHOD_PTR(FNiagaraPlatformSetCVarCondition, opAssign, (const FNiagaraPlatformSetCVarCondition&), ERASE_ARGUMENT_PACK(FNiagaraPlatformSetCVarCondition&)) },
{ ERASE_METHOD_PTR(FNiagaraPlatformSetCVarCondition, SetbUseMinInt, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FNiagaraPlatformSetCVarCondition, SetbUseMaxInt, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FNiagaraPlatformSetCVarCondition, SetbUseMinFloat, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FNiagaraPlatformSetCVarCondition, SetbUseMaxFloat, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FNiagaraDeviceProfileStateEntry, opAssign, (const FNiagaraDeviceProfileStateEntry&), ERASE_ARGUMENT_PACK(FNiagaraDeviceProfileStateEntry&)) },


{ ERASE_METHOD_PTR(FNiagaraSystemScalabilitySettingsArray, opAssign, (const FNiagaraSystemScalabilitySettingsArray&), ERASE_ARGUMENT_PACK(FNiagaraSystemScalabilitySettingsArray&)) },


{ ERASE_METHOD_PTR(FNiagaraSystemScalabilityOverride, opAssign, (const FNiagaraSystemScalabilityOverride&), ERASE_ARGUMENT_PACK(FNiagaraSystemScalabilityOverride&)) },
{ ERASE_METHOD_PTR(FNiagaraSystemScalabilityOverride, SetbOverrideDistanceSettings, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FNiagaraSystemScalabilityOverride, SetbOverrideInstanceCountSettings, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FNiagaraSystemScalabilityOverride, SetbOverridePerSystemInstanceCountSettings, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FNiagaraSystemScalabilityOverride, SetbOverrideVisibilitySettings, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FNiagaraSystemScalabilityOverride, SetbOverrideGlobalBudgetScalingSettings, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FNiagaraSystemScalabilityOverride, SetbOverrideCullProxySettings, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FNiagaraSystemScalabilityOverride, SetbCullByDistance, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FNiagaraSystemScalabilityOverride, SetbCullMaxInstanceCount, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FNiagaraSystemScalabilityOverride, SetbCullPerSystemMaxInstanceCount, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FNiagaraEmitterScalabilitySettings, opAssign, (const FNiagaraEmitterScalabilitySettings&), ERASE_ARGUMENT_PACK(FNiagaraEmitterScalabilitySettings&)) },
{ ERASE_METHOD_PTR(FNiagaraEmitterScalabilitySettings, SetbScaleSpawnCount, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FNiagaraEmitterScalabilitySettingsArray, opAssign, (const FNiagaraEmitterScalabilitySettingsArray&), ERASE_ARGUMENT_PACK(FNiagaraEmitterScalabilitySettingsArray&)) },


{ ERASE_METHOD_PTR(FNiagaraEmitterScalabilityOverride, opAssign, (const FNiagaraEmitterScalabilityOverride&), ERASE_ARGUMENT_PACK(FNiagaraEmitterScalabilityOverride&)) },
{ ERASE_METHOD_PTR(FNiagaraEmitterScalabilityOverride, SetbOverrideSpawnCountScale, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FNiagaraEmitterScalabilityOverride, SetbScaleSpawnCount, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FNiagaraEmitterScalabilityOverrides, opAssign, (const FNiagaraEmitterScalabilityOverrides&), ERASE_ARGUMENT_PACK(FNiagaraEmitterScalabilityOverrides&)) },


{ ERASE_METHOD_PTR(FNiagaraEventReceiverProperties, opAssign, (const FNiagaraEventReceiverProperties&), ERASE_ARGUMENT_PACK(FNiagaraEventReceiverProperties&)) },


{ ERASE_METHOD_PTR(FNiagaraEventGeneratorProperties, opAssign, (const FNiagaraEventGeneratorProperties&), ERASE_ARGUMENT_PACK(FNiagaraEventGeneratorProperties&)) },


{ ERASE_METHOD_PTR(FNiagaraEventScriptProperties, opAssign, (const FNiagaraEventScriptProperties&), ERASE_ARGUMENT_PACK(FNiagaraEventScriptProperties&)) },


{ ERASE_METHOD_PTR(FVersionedNiagaraEmitterData, opAssign, (const FVersionedNiagaraEmitterData&), ERASE_ARGUMENT_PACK(FVersionedNiagaraEmitterData&)) },
{ ERASE_METHOD_PTR(FVersionedNiagaraEmitterData, GetbInterpolatedSpawning, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FVersionedNiagaraEmitterData, SetbInterpolatedSpawning, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FVersionedNiagaraEmitterData, GetbRequiresPersistentIDs, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FVersionedNiagaraEmitterData, SetbRequiresPersistentIDs, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FNiagaraVariableWithOffset, opAssign, (const FNiagaraVariableWithOffset&), ERASE_ARGUMENT_PACK(FNiagaraVariableWithOffset&)) },


{ ERASE_METHOD_PTR(FNiagaraAssetVersion, opAssign, (const FNiagaraAssetVersion&), ERASE_ARGUMENT_PACK(FNiagaraAssetVersion&)) },


{ ERASE_METHOD_PTR(FNiagaraEmitterHandle, opAssign, (const FNiagaraEmitterHandle&), ERASE_ARGUMENT_PACK(FNiagaraEmitterHandle&)) },


{ ERASE_METHOD_PTR(FNiagaraMeshMaterialOverride, opAssign, (const FNiagaraMeshMaterialOverride&), ERASE_ARGUMENT_PACK(FNiagaraMeshMaterialOverride&)) },


{ ERASE_METHOD_PTR(FNiagaraMeshRendererMeshProperties, opAssign, (const FNiagaraMeshRendererMeshProperties&), ERASE_ARGUMENT_PACK(FNiagaraMeshRendererMeshProperties&)) },


{ ERASE_METHOD_PTR(FNiagaraParameters, opAssign, (const FNiagaraParameters&), ERASE_ARGUMENT_PACK(FNiagaraParameters&)) },


{ ERASE_METHOD_PTR(FNiagaraPerfBaselineStats, opAssign, (const FNiagaraPerfBaselineStats&), ERASE_ARGUMENT_PACK(FNiagaraPerfBaselineStats&)) },


{ ERASE_METHOD_PTR(FNiagaraPlatformSetRedirect, opAssign, (const FNiagaraPlatformSetRedirect&), ERASE_ARGUMENT_PACK(FNiagaraPlatformSetRedirect&)) },


{ ERASE_METHOD_PTR(FNiagaraRendererMaterialScalarParameter, opAssign, (const FNiagaraRendererMaterialScalarParameter&), ERASE_ARGUMENT_PACK(FNiagaraRendererMaterialScalarParameter&)) },


{ ERASE_METHOD_PTR(FNiagaraRendererMaterialVectorParameter, opAssign, (const FNiagaraRendererMaterialVectorParameter&), ERASE_ARGUMENT_PACK(FNiagaraRendererMaterialVectorParameter&)) },


{ ERASE_METHOD_PTR(FNiagaraRendererMaterialTextureParameter, opAssign, (const FNiagaraRendererMaterialTextureParameter&), ERASE_ARGUMENT_PACK(FNiagaraRendererMaterialTextureParameter&)) },


{ ERASE_METHOD_PTR(FNiagaraRendererMaterialStaticBoolParameter, opAssign, (const FNiagaraRendererMaterialStaticBoolParameter&), ERASE_ARGUMENT_PACK(FNiagaraRendererMaterialStaticBoolParameter&)) },


{ ERASE_METHOD_PTR(FNiagaraRendererMaterialParameters, opAssign, (const FNiagaraRendererMaterialParameters&), ERASE_ARGUMENT_PACK(FNiagaraRendererMaterialParameters&)) },


{ ERASE_METHOD_PTR(FNiagaraRibbonShapeCustomVertex, opAssign, (const FNiagaraRibbonShapeCustomVertex&), ERASE_ARGUMENT_PACK(FNiagaraRibbonShapeCustomVertex&)) },


{ ERASE_METHOD_PTR(FNiagaraRibbonUVSettings, opAssign, (const FNiagaraRibbonUVSettings&), ERASE_ARGUMENT_PACK(FNiagaraRibbonUVSettings&)) },
{ ERASE_METHOD_PTR(FNiagaraRibbonUVSettings, SetbEnablePerParticleUOverride, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FNiagaraRibbonUVSettings, SetbEnablePerParticleVRangeOverride, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FNiagaraModuleDependency, opAssign, (const FNiagaraModuleDependency&), ERASE_ARGUMENT_PACK(FNiagaraModuleDependency&)) },


{ ERASE_METHOD_PTR(FNiagaraInlineDynamicInputFormatToken, opAssign, (const FNiagaraInlineDynamicInputFormatToken&), ERASE_ARGUMENT_PACK(FNiagaraInlineDynamicInputFormatToken&)) },


{ ERASE_METHOD_PTR(FVersionedNiagaraScriptData, opAssign, (const FVersionedNiagaraScriptData&), ERASE_ARGUMENT_PACK(FVersionedNiagaraScriptData&)) },
{ ERASE_METHOD_PTR(FVersionedNiagaraScriptData, SetbExperimental, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FVersionedNiagaraScriptData, SetbCanBeUsedForTypeConversions, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FNiagaraScriptHighlight, opAssign, (const FNiagaraScriptHighlight&), ERASE_ARGUMENT_PACK(FNiagaraScriptHighlight&)) },


{ ERASE_METHOD_PTR(FNiagaraSystemScalabilityOverrides, opAssign, (const FNiagaraSystemScalabilityOverrides&), ERASE_ARGUMENT_PACK(FNiagaraSystemScalabilityOverrides&)) },


{ ERASE_METHOD_PTR(FNiagaraFloat, opAssign, (const FNiagaraFloat&), ERASE_ARGUMENT_PACK(FNiagaraFloat&)) },


{ ERASE_METHOD_PTR(FNiagaraInt32, opAssign, (const FNiagaraInt32&), ERASE_ARGUMENT_PACK(FNiagaraInt32&)) },


{ ERASE_METHOD_PTR(FNiagaraBool, opAssign, (const FNiagaraBool&), ERASE_ARGUMENT_PACK(FNiagaraBool&)) },


{ ERASE_METHOD_PTR(FNiagaraPosition, opAssign, (const FNiagaraPosition&), ERASE_ARGUMENT_PACK(FNiagaraPosition&)) },


{ ERASE_METHOD_PTR(FNiagaraHalf, opAssign, (const FNiagaraHalf&), ERASE_ARGUMENT_PACK(FNiagaraHalf&)) },


{ ERASE_METHOD_PTR(FNiagaraHalfVector2, opAssign, (const FNiagaraHalfVector2&), ERASE_ARGUMENT_PACK(FNiagaraHalfVector2&)) },


{ ERASE_METHOD_PTR(FNiagaraHalfVector3, opAssign, (const FNiagaraHalfVector3&), ERASE_ARGUMENT_PACK(FNiagaraHalfVector3&)) },


{ ERASE_METHOD_PTR(FNiagaraHalfVector4, opAssign, (const FNiagaraHalfVector4&), ERASE_ARGUMENT_PACK(FNiagaraHalfVector4&)) },


{ ERASE_METHOD_PTR(FNiagaraDouble, opAssign, (const FNiagaraDouble&), ERASE_ARGUMENT_PACK(FNiagaraDouble&)) },


{ ERASE_METHOD_PTR(FNiagaraMatrix, opAssign, (const FNiagaraMatrix&), ERASE_ARGUMENT_PACK(FNiagaraMatrix&)) },


{ ERASE_METHOD_PTR(FNiagaraEmitterID, opAssign, (const FNiagaraEmitterID&), ERASE_ARGUMENT_PACK(FNiagaraEmitterID&)) },


{ ERASE_METHOD_PTR(FNiagaraSpawnInfo, opAssign, (const FNiagaraSpawnInfo&), ERASE_ARGUMENT_PACK(FNiagaraSpawnInfo&)) },


{ ERASE_METHOD_PTR(FNiagaraID, opAssign, (const FNiagaraID&), ERASE_ARGUMENT_PACK(FNiagaraID&)) },


{ ERASE_METHOD_PTR(FNiagaraRandInfo, opAssign, (const FNiagaraRandInfo&), ERASE_ARGUMENT_PACK(FNiagaraRandInfo&)) },


{ ERASE_METHOD_PTR(FNiagaraVariant, opAssign, (const FNiagaraVariant&), ERASE_ARGUMENT_PACK(FNiagaraVariant&)) },


{ ERASE_METHOD_PTR(FNiagaraWorldManagerTickFunction, SetbTickEvenWhenPaused, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FNiagaraWorldManagerTickFunction, SetbStartWithTickEnabled, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FNiagaraWorldManagerTickFunction, SetbAllowTickOnDedicatedServer, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FMovieSceneNiagaraCacheParams, opAssign, (const FMovieSceneNiagaraCacheParams&), ERASE_ARGUMENT_PACK(FMovieSceneNiagaraCacheParams&)) },
{ ERASE_METHOD_PTR(FMovieSceneNiagaraCacheParams, SetbReverse, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FCacheRecorderUserParameters, opAssign, (const FCacheRecorderUserParameters&), ERASE_ARGUMENT_PACK(FCacheRecorderUserParameters&)) },


{ ERASE_METHOD_PTR(FCacheRecorderProjectParameters, opAssign, (const FCacheRecorderProjectParameters&), ERASE_ARGUMENT_PACK(FCacheRecorderProjectParameters&)) },


{ ERASE_METHOD_PTR(FCacheRecorderParameters, opAssign, (const FCacheRecorderParameters&), ERASE_ARGUMENT_PACK(FCacheRecorderParameters&)) },


{ ERASE_METHOD_PTR(FNiagaraEnumToByteHelper, opAssign, (const FNiagaraEnumToByteHelper&), ERASE_ARGUMENT_PACK(FNiagaraEnumToByteHelper&)) },


{ ERASE_METHOD_PTR(FNiagaraSpawnShortcut, opAssign, (const FNiagaraSpawnShortcut&), ERASE_ARGUMENT_PACK(FNiagaraSpawnShortcut&)) },


{ ERASE_METHOD_PTR(FNiagaraVariableMetaDataContainer, opAssign, (const FNiagaraVariableMetaDataContainer&), ERASE_ARGUMENT_PACK(FNiagaraVariableMetaDataContainer&)) },


{ ERASE_METHOD_PTR(FNiagaraOutlinerWorldDataCustomizationWrapper, opAssign, (const FNiagaraOutlinerWorldDataCustomizationWrapper&), ERASE_ARGUMENT_PACK(FNiagaraOutlinerWorldDataCustomizationWrapper&)) },


{ ERASE_METHOD_PTR(FNiagaraOutlinerSystemDataCustomizationWrapper, opAssign, (const FNiagaraOutlinerSystemDataCustomizationWrapper&), ERASE_ARGUMENT_PACK(FNiagaraOutlinerSystemDataCustomizationWrapper&)) },


{ ERASE_METHOD_PTR(FNiagaraOutlinerSystemInstanceDataCustomizationWrapper, opAssign, (const FNiagaraOutlinerSystemInstanceDataCustomizationWrapper&), ERASE_ARGUMENT_PACK(FNiagaraOutlinerSystemInstanceDataCustomizationWrapper&)) },


{ ERASE_METHOD_PTR(FNiagaraOutlinerEmitterInstanceDataCustomizationWrapper, opAssign, (const FNiagaraOutlinerEmitterInstanceDataCustomizationWrapper&), ERASE_ARGUMENT_PACK(FNiagaraOutlinerEmitterInstanceDataCustomizationWrapper&)) },


{ ERASE_METHOD_PTR(FNiagaraCurveTemplate, opAssign, (const FNiagaraCurveTemplate&), ERASE_ARGUMENT_PACK(FNiagaraCurveTemplate&)) },


{ ERASE_METHOD_PTR(FNiagaraActionColors, opAssign, (const FNiagaraActionColors&), ERASE_ARGUMENT_PACK(FNiagaraActionColors&)) },


{ ERASE_METHOD_PTR(FNiagaraInputExposureOptions, opAssign, (const FNiagaraInputExposureOptions&), ERASE_ARGUMENT_PACK(FNiagaraInputExposureOptions&)) },
{ ERASE_METHOD_PTR(FNiagaraInputExposureOptions, SetbExposed, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FNiagaraInputExposureOptions, SetbRequired, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FNiagaraInputExposureOptions, SetbHidden, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FNiagaraOutlinerFilterSettings, opAssign, (const FNiagaraOutlinerFilterSettings&), ERASE_ARGUMENT_PACK(FNiagaraOutlinerFilterSettings&)) },
{ ERASE_METHOD_PTR(FNiagaraOutlinerFilterSettings, SetbFilterBySystemExecutionState, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FNiagaraOutlinerFilterSettings, SetbFilterByEmitterExecutionState, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FNiagaraOutlinerFilterSettings, SetbFilterByEmitterSimTarget, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FNiagaraOutlinerFilterSettings, SetbFilterBySystemCullState, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FNiagaraOutlinerViewSettings, opAssign, (const FNiagaraOutlinerViewSettings&), ERASE_ARGUMENT_PACK(FNiagaraOutlinerViewSettings&)) },


{ ERASE_METHOD_PTR(FNiagaraScriptVariableData, opAssign, (const FNiagaraScriptVariableData&), ERASE_ARGUMENT_PACK(FNiagaraScriptVariableData&)) },


{ ERASE_METHOD_PTR(FNiagaraValidationRule_EmitterCountAndPlatformSet, opAssign, (const FNiagaraValidationRule_EmitterCountAndPlatformSet&), ERASE_ARGUMENT_PACK(FNiagaraValidationRule_EmitterCountAndPlatformSet&)) },


{ ERASE_METHOD_PTR(FNiagaraValidationRule_RendererCountAndPlatformSet, opAssign, (const FNiagaraValidationRule_RendererCountAndPlatformSet&), ERASE_ARGUMENT_PACK(FNiagaraValidationRule_RendererCountAndPlatformSet&)) },


{ ERASE_METHOD_PTR(FNiagaraEmitterSectionKey, opAssign, (const FNiagaraEmitterSectionKey&), ERASE_ARGUMENT_PACK(FNiagaraEmitterSectionKey&)) },


{ ERASE_METHOD_PTR(FNiagaraDebuggerSpawnData, opAssign, (const FNiagaraDebuggerSpawnData&), ERASE_ARGUMENT_PACK(FNiagaraDebuggerSpawnData&)) },


{ ERASE_METHOD_PTR(FCurveParameterPair, opAssign, (const FCurveParameterPair&), ERASE_ARGUMENT_PACK(FCurveParameterPair&)) },


{ ERASE_METHOD_PTR(FRigVMBlueprintLoadLogEntry, opAssign, (const FRigVMBlueprintLoadLogEntry&), ERASE_ARGUMENT_PACK(FRigVMBlueprintLoadLogEntry&)) },


{ ERASE_METHOD_PTR(FRigVMEditorGraphMenuContext, opAssign, (const FRigVMEditorGraphMenuContext&), ERASE_ARGUMENT_PACK(FRigVMEditorGraphMenuContext&)) },


{ ERASE_METHOD_PTR(FCurveRemapPair, opAssign, (const FCurveRemapPair&), ERASE_ARGUMENT_PACK(FCurveRemapPair&)) },


{ ERASE_METHOD_PTR(FRetargetProfile, opAssign, (const FRetargetProfile&), ERASE_ARGUMENT_PACK(FRetargetProfile&)) },


{ ERASE_METHOD_PTR(FRetargetGlobalSettings, opAssign, (const FRetargetGlobalSettings&), ERASE_ARGUMENT_PACK(FRetargetGlobalSettings&)) },


{ ERASE_METHOD_PTR(FTargetRootSettings, opAssign, (const FTargetRootSettings&), ERASE_ARGUMENT_PACK(FTargetRootSettings&)) },


{ ERASE_METHOD_PTR(FTargetChainSettings, opAssign, (const FTargetChainSettings&), ERASE_ARGUMENT_PACK(FTargetChainSettings&)) },


{ ERASE_METHOD_PTR(FTargetChainSpeedPlantSettings, opAssign, (const FTargetChainSpeedPlantSettings&), ERASE_ARGUMENT_PACK(FTargetChainSpeedPlantSettings&)) },


{ ERASE_METHOD_PTR(FTargetChainIKSettings, opAssign, (const FTargetChainIKSettings&), ERASE_ARGUMENT_PACK(FTargetChainIKSettings&)) },


{ ERASE_METHOD_PTR(FTargetChainFKSettings, opAssign, (const FTargetChainFKSettings&), ERASE_ARGUMENT_PACK(FTargetChainFKSettings&)) },


{ ERASE_METHOD_PTR(FPinBoneData, opAssign, (const FPinBoneData&), ERASE_ARGUMENT_PACK(FPinBoneData&)) },


{ ERASE_METHOD_PTR(FAnimNode_IKRig, opAssign, (const FAnimNode_IKRig&), ERASE_ARGUMENT_PACK(FAnimNode_IKRig&)) },


{ ERASE_METHOD_PTR(FIKRigGoal, opAssign, (const FIKRigGoal&), ERASE_ARGUMENT_PACK(FIKRigGoal&)) },


{ ERASE_METHOD_PTR(FAnimNode_RetargetPoseFromMesh, opAssign, (const FAnimNode_RetargetPoseFromMesh&), ERASE_ARGUMENT_PACK(FAnimNode_RetargetPoseFromMesh&)) },


{ ERASE_METHOD_PTR(FRetargetChainMap, opAssign, (const FRetargetChainMap&), ERASE_ARGUMENT_PACK(FRetargetChainMap&)) },


{ ERASE_METHOD_PTR(FIKRetargetPose, opAssign, (const FIKRetargetPose&), ERASE_ARGUMENT_PACK(FIKRetargetPose&)) },


{ ERASE_METHOD_PTR(FBoneChain, opAssign, (const FBoneChain&), ERASE_ARGUMENT_PACK(FBoneChain&)) },


{ ERASE_METHOD_PTR(FRetargetDefinition, opAssign, (const FRetargetDefinition&), ERASE_ARGUMENT_PACK(FRetargetDefinition&)) },


{ ERASE_METHOD_PTR(FIKRigSkeleton, opAssign, (const FIKRigSkeleton&), ERASE_ARGUMENT_PACK(FIKRigSkeleton&)) },


{ ERASE_METHOD_PTR(FLimbSolverSettings, opAssign, (const FLimbSolverSettings&), ERASE_ARGUMENT_PACK(FLimbSolverSettings&)) },


{ ERASE_METHOD_PTR(FAssetActionSupportCondition, opAssign, (const FAssetActionSupportCondition&), ERASE_ARGUMENT_PACK(FAssetActionSupportCondition&)) },


{ ERASE_METHOD_PTR(FValidateAssetsDetails, opAssign, (const FValidateAssetsDetails&), ERASE_ARGUMENT_PACK(FValidateAssetsDetails&)) },


{ ERASE_METHOD_PTR(FValidateAssetsResults, opAssign, (const FValidateAssetsResults&), ERASE_ARGUMENT_PACK(FValidateAssetsResults&)) },


{ ERASE_METHOD_PTR(FValidateAssetsSettings, opAssign, (const FValidateAssetsSettings&), ERASE_ARGUMENT_PACK(FValidateAssetsSettings&)) },


{ ERASE_METHOD_PTR(FInterchangeAnimationPayLoadKey, opAssign, (const FInterchangeAnimationPayLoadKey&), ERASE_ARGUMENT_PACK(FInterchangeAnimationPayLoadKey&)) },


{ ERASE_METHOD_PTR(FInterchangeMeshPayLoadKey, opAssign, (const FInterchangeMeshPayLoadKey&), ERASE_ARGUMENT_PACK(FInterchangeMeshPayLoadKey&)) },


{ ERASE_METHOD_PTR(FCapturableProperty, opAssign, (const FCapturableProperty&), ERASE_ARGUMENT_PACK(FCapturableProperty&)) },


{ ERASE_METHOD_PTR(FInterchangeLodSceneNodeContainer, opAssign, (const FInterchangeLodSceneNodeContainer&), ERASE_ARGUMENT_PACK(FInterchangeLodSceneNodeContainer&)) },


{ ERASE_METHOD_PTR(FInterchangeMeshInstance, opAssign, (const FInterchangeMeshInstance&), ERASE_ARGUMENT_PACK(FInterchangeMeshInstance&)) },


{ ERASE_METHOD_PTR(FInterchangeMeshGeometry, opAssign, (const FInterchangeMeshGeometry&), ERASE_ARGUMENT_PACK(FInterchangeMeshGeometry&)) },


{ ERASE_METHOD_PTR(FInterchangePipelineMeshesUtilitiesContext, opAssign, (const FInterchangePipelineMeshesUtilitiesContext&), ERASE_ARGUMENT_PACK(FInterchangePipelineMeshesUtilitiesContext&)) },


{ ERASE_METHOD_PTR(FConstantQResults, opAssign, (const FConstantQResults&), ERASE_ARGUMENT_PACK(FConstantQResults&)) },


{ ERASE_METHOD_PTR(FLoudnessResults, opAssign, (const FLoudnessResults&), ERASE_ARGUMENT_PACK(FLoudnessResults&)) },


{ ERASE_METHOD_PTR(FMeterResults, opAssign, (const FMeterResults&), ERASE_ARGUMENT_PACK(FMeterResults&)) },


{ ERASE_METHOD_PTR(FSynesthesiaSpectrumResults, opAssign, (const FSynesthesiaSpectrumResults&), ERASE_ARGUMENT_PACK(FSynesthesiaSpectrumResults&)) },


{ ERASE_METHOD_PTR(FCustomMeshTriangle, opAssign, (const FCustomMeshTriangle&), ERASE_ARGUMENT_PACK(FCustomMeshTriangle&)) },


{ ERASE_METHOD_PTR(FLocationServicesData, opAssign, (const FLocationServicesData&), ERASE_ARGUMENT_PACK(FLocationServicesData&)) },


{ ERASE_METHOD_PTR(FMetasoundFrontendVersionNumber, opAssign, (const FMetasoundFrontendVersionNumber&), ERASE_ARGUMENT_PACK(FMetasoundFrontendVersionNumber&)) },


{ ERASE_METHOD_PTR(FMetasoundFrontendVersion, opAssign, (const FMetasoundFrontendVersion&), ERASE_ARGUMENT_PACK(FMetasoundFrontendVersion&)) },


{ ERASE_METHOD_PTR(FMetasoundFrontendVertex, opAssign, (const FMetasoundFrontendVertex&), ERASE_ARGUMENT_PACK(FMetasoundFrontendVertex&)) },


{ ERASE_METHOD_PTR(FMetasoundFrontendVertexLiteral, opAssign, (const FMetasoundFrontendVertexLiteral&), ERASE_ARGUMENT_PACK(FMetasoundFrontendVertexLiteral&)) },


{ ERASE_METHOD_PTR(FMetasoundFrontendLiteral, opAssign, (const FMetasoundFrontendLiteral&), ERASE_ARGUMENT_PACK(FMetasoundFrontendLiteral&)) },


{ ERASE_METHOD_PTR(FMetasoundFrontendVariable, opAssign, (const FMetasoundFrontendVariable&), ERASE_ARGUMENT_PACK(FMetasoundFrontendVariable&)) },


{ ERASE_METHOD_PTR(FMetasoundFrontendVertexMetadata, opAssign, (const FMetasoundFrontendVertexMetadata&), ERASE_ARGUMENT_PACK(FMetasoundFrontendVertexMetadata&)) },


{ ERASE_METHOD_PTR(FMetasoundFrontendClassVertex, opAssign, (const FMetasoundFrontendClassVertex&), ERASE_ARGUMENT_PACK(FMetasoundFrontendClassVertex&)) },


{ ERASE_METHOD_PTR(FMetasoundFrontendClassInput, opAssign, (const FMetasoundFrontendClassInput&), ERASE_ARGUMENT_PACK(FMetasoundFrontendClassInput&)) },


{ ERASE_METHOD_PTR(FMetasoundFrontendClassVariable, opAssign, (const FMetasoundFrontendClassVariable&), ERASE_ARGUMENT_PACK(FMetasoundFrontendClassVariable&)) },


{ ERASE_METHOD_PTR(FMetasoundFrontendClassOutput, opAssign, (const FMetasoundFrontendClassOutput&), ERASE_ARGUMENT_PACK(FMetasoundFrontendClassOutput&)) },


{ ERASE_METHOD_PTR(FMetasoundFrontendClassInterface, opAssign, (const FMetasoundFrontendClassInterface&), ERASE_ARGUMENT_PACK(FMetasoundFrontendClassInterface&)) },


{ ERASE_METHOD_PTR(FMetasoundFrontendInterface, opAssign, (const FMetasoundFrontendInterface&), ERASE_ARGUMENT_PACK(FMetasoundFrontendInterface&)) },


{ ERASE_METHOD_PTR(FMetasoundFrontendClassName, opAssign, (const FMetasoundFrontendClassName&), ERASE_ARGUMENT_PACK(FMetasoundFrontendClassName&)) },


{ ERASE_METHOD_PTR(FMetasoundFrontendClassMetadata, opAssign, (const FMetasoundFrontendClassMetadata&), ERASE_ARGUMENT_PACK(FMetasoundFrontendClassMetadata&)) },


{ ERASE_METHOD_PTR(FMetasoundFrontendClass, opAssign, (const FMetasoundFrontendClass&), ERASE_ARGUMENT_PACK(FMetasoundFrontendClass&)) },


{ ERASE_METHOD_PTR(FMetasoundFrontendGraphClass, opAssign, (const FMetasoundFrontendGraphClass&), ERASE_ARGUMENT_PACK(FMetasoundFrontendGraphClass&)) },


{ ERASE_METHOD_PTR(FMetasoundFrontendDocument, opAssign, (const FMetasoundFrontendDocument&), ERASE_ARGUMENT_PACK(FMetasoundFrontendDocument&)) },


{ ERASE_METHOD_PTR(FMetaSoundOutput, opAssign, (const FMetaSoundOutput&), ERASE_ARGUMENT_PACK(FMetaSoundOutput&)) },


{ ERASE_METHOD_PTR(FWaveTableData, opAssign, (const FWaveTableData&), ERASE_ARGUMENT_PACK(FWaveTableData&)) },


{ ERASE_METHOD_PTR(FWaveTableBankEntry, opAssign, (const FWaveTableBankEntry&), ERASE_ARGUMENT_PACK(FWaveTableBankEntry&)) },


{ ERASE_METHOD_PTR(FWaveTableTransform, opAssign, (const FWaveTableTransform&), ERASE_ARGUMENT_PACK(FWaveTableTransform&)) },


{ ERASE_METHOD_PTR(FWaveTableSettings, opAssign, (const FWaveTableSettings&), ERASE_ARGUMENT_PACK(FWaveTableSettings&)) },


{ ERASE_METHOD_PTR(FDefaultMetaSoundAssetAutoUpdateSettings, opAssign, (const FDefaultMetaSoundAssetAutoUpdateSettings&), ERASE_ARGUMENT_PACK(FDefaultMetaSoundAssetAutoUpdateSettings&)) },


{ ERASE_METHOD_PTR(FMetaSoundQualitySettings, opAssign, (const FMetaSoundQualitySettings&), ERASE_ARGUMENT_PACK(FMetaSoundQualitySettings&)) },


{ ERASE_METHOD_PTR(FMetaSoundAssetDirectory, opAssign, (const FMetaSoundAssetDirectory&), ERASE_ARGUMENT_PACK(FMetaSoundAssetDirectory&)) },


{ ERASE_METHOD_PTR(FMetaSoundBuilderNodeInputHandle, opAssign, (const FMetaSoundBuilderNodeInputHandle&), ERASE_ARGUMENT_PACK(FMetaSoundBuilderNodeInputHandle&)) },


{ ERASE_METHOD_PTR(FMetaSoundBuilderNodeOutputHandle, opAssign, (const FMetaSoundBuilderNodeOutputHandle&), ERASE_ARGUMENT_PACK(FMetaSoundBuilderNodeOutputHandle&)) },


{ ERASE_METHOD_PTR(FMetaSoundNodeHandle, opAssign, (const FMetaSoundNodeHandle&), ERASE_ARGUMENT_PACK(FMetaSoundNodeHandle&)) },


{ ERASE_METHOD_PTR(FMetaSoundBuilderOptions, opAssign, (const FMetaSoundBuilderOptions&), ERASE_ARGUMENT_PACK(FMetaSoundBuilderOptions&)) },


{ ERASE_METHOD_PTR(FMeterChannelInfo, opAssign, (const FMeterChannelInfo&), ERASE_ARGUMENT_PACK(FMeterChannelInfo&)) },


{ ERASE_METHOD_PTR(FAudioMeterStyle, opAssign, (const FAudioMeterStyle&), ERASE_ARGUMENT_PACK(FAudioMeterStyle&)) },


{ ERASE_METHOD_PTR(FAudioOscilloscopePanelStyle, opAssign, (const FAudioOscilloscopePanelStyle&), ERASE_ARGUMENT_PACK(FAudioOscilloscopePanelStyle&)) },


{ ERASE_METHOD_PTR(FTriggerThresholdLineStyle, opAssign, (const FTriggerThresholdLineStyle&), ERASE_ARGUMENT_PACK(FTriggerThresholdLineStyle&)) },


{ ERASE_METHOD_PTR(FSampledSequenceViewerStyle, opAssign, (const FSampledSequenceViewerStyle&), ERASE_ARGUMENT_PACK(FSampledSequenceViewerStyle&)) },


{ ERASE_METHOD_PTR(FSampledSequenceValueGridOverlayStyle, opAssign, (const FSampledSequenceValueGridOverlayStyle&), ERASE_ARGUMENT_PACK(FSampledSequenceValueGridOverlayStyle&)) },


{ ERASE_METHOD_PTR(FFixedSampleSequenceRulerStyle, opAssign, (const FFixedSampleSequenceRulerStyle&), ERASE_ARGUMENT_PACK(FFixedSampleSequenceRulerStyle&)) },


{ ERASE_METHOD_PTR(FAudioVectorscopePanelStyle, opAssign, (const FAudioVectorscopePanelStyle&), ERASE_ARGUMENT_PACK(FAudioVectorscopePanelStyle&)) },


{ ERASE_METHOD_PTR(FSampledSequenceVectorViewerStyle, opAssign, (const FSampledSequenceVectorViewerStyle&), ERASE_ARGUMENT_PACK(FSampledSequenceVectorViewerStyle&)) },


{ ERASE_METHOD_PTR(FAudioSpectrumPlotStyle, opAssign, (const FAudioSpectrumPlotStyle&), ERASE_ARGUMENT_PACK(FAudioSpectrumPlotStyle&)) },


{ ERASE_METHOD_PTR(FAudioTextBoxStyle, opAssign, (const FAudioTextBoxStyle&), ERASE_ARGUMENT_PACK(FAudioTextBoxStyle&)) },


{ ERASE_METHOD_PTR(FAudioSliderStyle, opAssign, (const FAudioSliderStyle&), ERASE_ARGUMENT_PACK(FAudioSliderStyle&)) },


{ ERASE_METHOD_PTR(FAudioRadialSliderStyle, opAssign, (const FAudioRadialSliderStyle&), ERASE_ARGUMENT_PACK(FAudioRadialSliderStyle&)) },


{ ERASE_METHOD_PTR(FPlayheadOverlayStyle, opAssign, (const FPlayheadOverlayStyle&), ERASE_ARGUMENT_PACK(FPlayheadOverlayStyle&)) },


{ ERASE_METHOD_PTR(FMetasoundEditorGraphMemberDefaultBoolRef, opAssign, (const FMetasoundEditorGraphMemberDefaultBoolRef&), ERASE_ARGUMENT_PACK(FMetasoundEditorGraphMemberDefaultBoolRef&)) },


{ ERASE_METHOD_PTR(FMetasoundEditorGraphMemberDefaultIntRef, opAssign, (const FMetasoundEditorGraphMemberDefaultIntRef&), ERASE_ARGUMENT_PACK(FMetasoundEditorGraphMemberDefaultIntRef&)) },


{ ERASE_METHOD_PTR(FMetasoundEditorGraphMemberDefaultObjectRef, opAssign, (const FMetasoundEditorGraphMemberDefaultObjectRef&), ERASE_ARGUMENT_PACK(FMetasoundEditorGraphMemberDefaultObjectRef&)) },


{ ERASE_METHOD_PTR(FMetasoundAnalyzerAnimationSettings, opAssign, (const FMetasoundAnalyzerAnimationSettings&), ERASE_ARGUMENT_PACK(FMetasoundAnalyzerAnimationSettings&)) },


{ ERASE_METHOD_PTR(FProcMeshTangent, opAssign, (const FProcMeshTangent&), ERASE_ARGUMENT_PACK(FProcMeshTangent&)) },


{ ERASE_METHOD_PTR(FProcMeshVertex, opAssign, (const FProcMeshVertex&), ERASE_ARGUMENT_PACK(FProcMeshVertex&)) },


{ ERASE_METHOD_PTR(FResonanceAudioReverbPluginSettings, opAssign, (const FResonanceAudioReverbPluginSettings&), ERASE_ARGUMENT_PACK(FResonanceAudioReverbPluginSettings&)) },


{ ERASE_METHOD_PTR(FSynth1PatchCable, opAssign, (const FSynth1PatchCable&), ERASE_ARGUMENT_PACK(FSynth1PatchCable&)) },


{ ERASE_METHOD_PTR(FPatchId, opAssign, (const FPatchId&), ERASE_ARGUMENT_PACK(FPatchId&)) },


{ ERASE_METHOD_PTR(FEpicSynth1Patch, opAssign, (const FEpicSynth1Patch&), ERASE_ARGUMENT_PACK(FEpicSynth1Patch&)) },


{ ERASE_METHOD_PTR(FModularSynthPreset, opAssign, (const FModularSynthPreset&), ERASE_ARGUMENT_PACK(FModularSynthPreset&)) },
{ ERASE_METHOD_PTR(FModularSynthPreset, GetbEnablePolyphony, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FModularSynthPreset, SetbEnablePolyphony, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FModularSynthPreset, GetbEnableUnison, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FModularSynthPreset, SetbEnableUnison, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FModularSynthPreset, GetbEnableOscillatorSync, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FModularSynthPreset, SetbEnableOscillatorSync, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FModularSynthPreset, GetbInvertModulationEnvelope, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FModularSynthPreset, SetbInvertModulationEnvelope, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FModularSynthPreset, GetbInvertModulationEnvelopeBias, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FModularSynthPreset, SetbInvertModulationEnvelopeBias, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FModularSynthPreset, GetbLegato, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FModularSynthPreset, SetbLegato, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FModularSynthPreset, GetbRetrigger, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FModularSynthPreset, SetbRetrigger, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FModularSynthPreset, GetbStereoDelayEnabled, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FModularSynthPreset, SetbStereoDelayEnabled, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FModularSynthPreset, GetbChorusEnabled, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FModularSynthPreset, SetbChorusEnabled, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FModularSynthPresetBankEntry, opAssign, (const FModularSynthPresetBankEntry&), ERASE_ARGUMENT_PACK(FModularSynthPresetBankEntry&)) },


{ ERASE_METHOD_PTR(FSourceEffectBitCrusherBaseSettings, opAssign, (const FSourceEffectBitCrusherBaseSettings&), ERASE_ARGUMENT_PACK(FSourceEffectBitCrusherBaseSettings&)) },


{ ERASE_METHOD_PTR(FSourceEffectBitCrusherSettings, opAssign, (const FSourceEffectBitCrusherSettings&), ERASE_ARGUMENT_PACK(FSourceEffectBitCrusherSettings&)) },


{ ERASE_METHOD_PTR(FSourceEffectChorusBaseSettings, opAssign, (const FSourceEffectChorusBaseSettings&), ERASE_ARGUMENT_PACK(FSourceEffectChorusBaseSettings&)) },


{ ERASE_METHOD_PTR(FSourceEffectChorusSettings, opAssign, (const FSourceEffectChorusSettings&), ERASE_ARGUMENT_PACK(FSourceEffectChorusSettings&)) },


{ ERASE_METHOD_PTR(FSourceEffectConvolutionReverbSettings, opAssign, (const FSourceEffectConvolutionReverbSettings&), ERASE_ARGUMENT_PACK(FSourceEffectConvolutionReverbSettings&)) },


{ ERASE_METHOD_PTR(FSourceEffectDynamicsProcessorSettings, opAssign, (const FSourceEffectDynamicsProcessorSettings&), ERASE_ARGUMENT_PACK(FSourceEffectDynamicsProcessorSettings&)) },
{ ERASE_METHOD_PTR(FSourceEffectDynamicsProcessorSettings, GetbStereoLinked, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FSourceEffectDynamicsProcessorSettings, SetbStereoLinked, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FSourceEffectDynamicsProcessorSettings, GetbAnalogMode, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FSourceEffectDynamicsProcessorSettings, SetbAnalogMode, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FSourceEffectEnvelopeFollowerSettings, opAssign, (const FSourceEffectEnvelopeFollowerSettings&), ERASE_ARGUMENT_PACK(FSourceEffectEnvelopeFollowerSettings&)) },


{ ERASE_METHOD_PTR(FSourceEffectEQBand, opAssign, (const FSourceEffectEQBand&), ERASE_ARGUMENT_PACK(FSourceEffectEQBand&)) },
{ ERASE_METHOD_PTR(FSourceEffectEQBand, GetbEnabled, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FSourceEffectEQBand, SetbEnabled, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FSourceEffectEQSettings, opAssign, (const FSourceEffectEQSettings&), ERASE_ARGUMENT_PACK(FSourceEffectEQSettings&)) },


{ ERASE_METHOD_PTR(FSourceEffectFilterAudioBusModulationSettings, opAssign, (const FSourceEffectFilterAudioBusModulationSettings&), ERASE_ARGUMENT_PACK(FSourceEffectFilterAudioBusModulationSettings&)) },


{ ERASE_METHOD_PTR(FSourceEffectFilterSettings, opAssign, (const FSourceEffectFilterSettings&), ERASE_ARGUMENT_PACK(FSourceEffectFilterSettings&)) },


{ ERASE_METHOD_PTR(FSourceEffectFoldbackDistortionSettings, opAssign, (const FSourceEffectFoldbackDistortionSettings&), ERASE_ARGUMENT_PACK(FSourceEffectFoldbackDistortionSettings&)) },


{ ERASE_METHOD_PTR(FSourceEffectMidSideSpreaderSettings, opAssign, (const FSourceEffectMidSideSpreaderSettings&), ERASE_ARGUMENT_PACK(FSourceEffectMidSideSpreaderSettings&)) },


{ ERASE_METHOD_PTR(FSourceEffectIndividualFilterSettings, opAssign, (const FSourceEffectIndividualFilterSettings&), ERASE_ARGUMENT_PACK(FSourceEffectIndividualFilterSettings&)) },


{ ERASE_METHOD_PTR(FSourceEffectMotionFilterModulationSettings, opAssign, (const FSourceEffectMotionFilterModulationSettings&), ERASE_ARGUMENT_PACK(FSourceEffectMotionFilterModulationSettings&)) },


{ ERASE_METHOD_PTR(FSourceEffectMotionFilterSettings, opAssign, (const FSourceEffectMotionFilterSettings&), ERASE_ARGUMENT_PACK(FSourceEffectMotionFilterSettings&)) },


{ ERASE_METHOD_PTR(FSourceEffectPannerSettings, opAssign, (const FSourceEffectPannerSettings&), ERASE_ARGUMENT_PACK(FSourceEffectPannerSettings&)) },


{ ERASE_METHOD_PTR(FSourceEffectPhaserSettings, opAssign, (const FSourceEffectPhaserSettings&), ERASE_ARGUMENT_PACK(FSourceEffectPhaserSettings&)) },


{ ERASE_METHOD_PTR(FSourceEffectRingModulationSettings, opAssign, (const FSourceEffectRingModulationSettings&), ERASE_ARGUMENT_PACK(FSourceEffectRingModulationSettings&)) },


{ ERASE_METHOD_PTR(FSourceEffectSimpleDelaySettings, opAssign, (const FSourceEffectSimpleDelaySettings&), ERASE_ARGUMENT_PACK(FSourceEffectSimpleDelaySettings&)) },
{ ERASE_METHOD_PTR(FSourceEffectSimpleDelaySettings, GetbDelayBasedOnDistance, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FSourceEffectSimpleDelaySettings, SetbDelayBasedOnDistance, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FSourceEffectSimpleDelaySettings, GetbUseDistanceOverride, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FSourceEffectSimpleDelaySettings, SetbUseDistanceOverride, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FSourceEffectStereoDelaySettings, opAssign, (const FSourceEffectStereoDelaySettings&), ERASE_ARGUMENT_PACK(FSourceEffectStereoDelaySettings&)) },


{ ERASE_METHOD_PTR(FSourceEffectWaveShaperSettings, opAssign, (const FSourceEffectWaveShaperSettings&), ERASE_ARGUMENT_PACK(FSourceEffectWaveShaperSettings&)) },


{ ERASE_METHOD_PTR(FSubmixEffectConvolutionReverbSettings, opAssign, (const FSubmixEffectConvolutionReverbSettings&), ERASE_ARGUMENT_PACK(FSubmixEffectConvolutionReverbSettings&)) },


{ ERASE_METHOD_PTR(FSubmixEffectDelaySettings, opAssign, (const FSubmixEffectDelaySettings&), ERASE_ARGUMENT_PACK(FSubmixEffectDelaySettings&)) },


{ ERASE_METHOD_PTR(FSubmixEffectFilterSettings, opAssign, (const FSubmixEffectFilterSettings&), ERASE_ARGUMENT_PACK(FSubmixEffectFilterSettings&)) },


{ ERASE_METHOD_PTR(FSubmixEffectFlexiverbSettings, opAssign, (const FSubmixEffectFlexiverbSettings&), ERASE_ARGUMENT_PACK(FSubmixEffectFlexiverbSettings&)) },


{ ERASE_METHOD_PTR(FDynamicsBandSettings, opAssign, (const FDynamicsBandSettings&), ERASE_ARGUMENT_PACK(FDynamicsBandSettings&)) },


{ ERASE_METHOD_PTR(FSubmixEffectMultibandCompressorSettings, opAssign, (const FSubmixEffectMultibandCompressorSettings&), ERASE_ARGUMENT_PACK(FSubmixEffectMultibandCompressorSettings&)) },


{ ERASE_METHOD_PTR(FSubmixEffectStereoDelaySettings, opAssign, (const FSubmixEffectStereoDelaySettings&), ERASE_ARGUMENT_PACK(FSubmixEffectStereoDelaySettings&)) },


{ ERASE_METHOD_PTR(FSubmixEffectStereoToQuadSettings, opAssign, (const FSubmixEffectStereoToQuadSettings&), ERASE_ARGUMENT_PACK(FSubmixEffectStereoToQuadSettings&)) },


{ ERASE_METHOD_PTR(FTapDelayInfo, opAssign, (const FTapDelayInfo&), ERASE_ARGUMENT_PACK(FTapDelayInfo&)) },


{ ERASE_METHOD_PTR(FSubmixEffectTapDelaySettings, opAssign, (const FSubmixEffectTapDelaySettings&), ERASE_ARGUMENT_PACK(FSubmixEffectTapDelaySettings&)) },


{ ERASE_METHOD_PTR(FSynth2DSliderStyle, opAssign, (const FSynth2DSliderStyle&), ERASE_ARGUMENT_PACK(FSynth2DSliderStyle&)) },


{ ERASE_METHOD_PTR(FSynthKnobStyle, opAssign, (const FSynthKnobStyle&), ERASE_ARGUMENT_PACK(FSynthKnobStyle&)) },


{ ERASE_METHOD_PTR(FSynthSlateStyle, opAssign, (const FSynthSlateStyle&), ERASE_ARGUMENT_PACK(FSynthSlateStyle&)) },


{ ERASE_METHOD_PTR(FIntMargin, opAssign, (const FIntMargin&), ERASE_ARGUMENT_PACK(FIntMargin&)) },


{ ERASE_METHOD_PTR(FSpriteGeometryShape, opAssign, (const FSpriteGeometryShape&), ERASE_ARGUMENT_PACK(FSpriteGeometryShape&)) },


{ ERASE_METHOD_PTR(FSpriteGeometryCollection, opAssign, (const FSpriteGeometryCollection&), ERASE_ARGUMENT_PACK(FSpriteGeometryCollection&)) },


{ ERASE_METHOD_PTR(FPaperFlipbookKeyFrame, opAssign, (const FPaperFlipbookKeyFrame&), ERASE_ARGUMENT_PACK(FPaperFlipbookKeyFrame&)) },


{ ERASE_METHOD_PTR(FSpriteInstanceData, opAssign, (const FSpriteInstanceData&), ERASE_ARGUMENT_PACK(FSpriteInstanceData&)) },


{ ERASE_METHOD_PTR(FPaperSpriteSocket, opAssign, (const FPaperSpriteSocket&), ERASE_ARGUMENT_PACK(FPaperSpriteSocket&)) },


{ ERASE_METHOD_PTR(FPaperTileInfo, opAssign, (const FPaperTileInfo&), ERASE_ARGUMENT_PACK(FPaperTileInfo&)) },


{ ERASE_METHOD_PTR(FPaperTileMetadata, opAssign, (const FPaperTileMetadata&), ERASE_ARGUMENT_PACK(FPaperTileMetadata&)) },


{ ERASE_METHOD_PTR(FPaperTileSetTerrain, opAssign, (const FPaperTileSetTerrain&), ERASE_ARGUMENT_PACK(FPaperTileSetTerrain&)) },


{ ERASE_METHOD_PTR(FPaperTerrainMaterialRule, opAssign, (const FPaperTerrainMaterialRule&), ERASE_ARGUMENT_PACK(FPaperTerrainMaterialRule&)) },


{ ERASE_METHOD_PTR(FTemplateSequenceBindingOverrideData, opAssign, (const FTemplateSequenceBindingOverrideData&), ERASE_ARGUMENT_PACK(FTemplateSequenceBindingOverrideData&)) },


{ ERASE_METHOD_PTR(FFOscillator, opAssign, (const FFOscillator&), ERASE_ARGUMENT_PACK(FFOscillator&)) },


{ ERASE_METHOD_PTR(FROscillator, opAssign, (const FROscillator&), ERASE_ARGUMENT_PACK(FROscillator&)) },


{ ERASE_METHOD_PTR(FVOscillator, opAssign, (const FVOscillator&), ERASE_ARGUMENT_PACK(FVOscillator&)) },


{ ERASE_METHOD_PTR(FCameraAnimationParams, opAssign, (const FCameraAnimationParams&), ERASE_ARGUMENT_PACK(FCameraAnimationParams&)) },


{ ERASE_METHOD_PTR(FCameraAnimationHandle, opAssign, (const FCameraAnimationHandle&), ERASE_ARGUMENT_PACK(FCameraAnimationHandle&)) },


{ ERASE_METHOD_PTR(FCameraModeTransition, opAssign, (const FCameraModeTransition&), ERASE_ARGUMENT_PACK(FCameraModeTransition&)) },


{ ERASE_METHOD_PTR(FPerlinNoiseShaker, opAssign, (const FPerlinNoiseShaker&), ERASE_ARGUMENT_PACK(FPerlinNoiseShaker&)) },


{ ERASE_METHOD_PTR(FWaveOscillator, opAssign, (const FWaveOscillator&), ERASE_ARGUMENT_PACK(FWaveOscillator&)) },


{ ERASE_METHOD_PTR(FCurveKeyHandle, opAssign, (const FCurveKeyHandle&), ERASE_ARGUMENT_PACK(FCurveKeyHandle&)) },


{ ERASE_METHOD_PTR(FDynamicMeshChangeInfo, opAssign, (const FDynamicMeshChangeInfo&), ERASE_ARGUMENT_PACK(FDynamicMeshChangeInfo&)) },


{ ERASE_METHOD_PTR(FChaosVDContactDebugDrawSettings, opAssign, (const FChaosVDContactDebugDrawSettings&), ERASE_ARGUMENT_PACK(FChaosVDContactDebugDrawSettings&)) },


{ ERASE_METHOD_PTR(FChaosDebugDrawColorsByState, opAssign, (const FChaosDebugDrawColorsByState&), ERASE_ARGUMENT_PACK(FChaosDebugDrawColorsByState&)) },


{ ERASE_METHOD_PTR(FChaosParticleDataDebugDrawColors, opAssign, (const FChaosParticleDataDebugDrawColors&), ERASE_ARGUMENT_PACK(FChaosParticleDataDebugDrawColors&)) },


{ ERASE_METHOD_PTR(FChaosParticleDataDebugDrawSettings, opAssign, (const FChaosParticleDataDebugDrawSettings&), ERASE_ARGUMENT_PACK(FChaosParticleDataDebugDrawSettings&)) },


{ ERASE_METHOD_PTR(FChaosVDJointsDebugDrawSettings, opAssign, (const FChaosVDJointsDebugDrawSettings&), ERASE_ARGUMENT_PACK(FChaosVDJointsDebugDrawSettings&)) },


{ ERASE_METHOD_PTR(FChaosDebugDrawColorsByShapeType, opAssign, (const FChaosDebugDrawColorsByShapeType&), ERASE_ARGUMENT_PACK(FChaosDebugDrawColorsByShapeType&)) },


{ ERASE_METHOD_PTR(FChaosDebugDrawColorsByClientServer, opAssign, (const FChaosDebugDrawColorsByClientServer&), ERASE_ARGUMENT_PACK(FChaosDebugDrawColorsByClientServer&)) },


{ ERASE_METHOD_PTR(FStaticMeshReductionSettings, opAssign, (const FStaticMeshReductionSettings&), ERASE_ARGUMENT_PACK(FStaticMeshReductionSettings&)) },


{ ERASE_METHOD_PTR(FStaticMeshReductionOptions, opAssign, (const FStaticMeshReductionOptions&), ERASE_ARGUMENT_PACK(FStaticMeshReductionOptions&)) },


{ ERASE_METHOD_PTR(FJoinStaticMeshActorsOptions, opAssign, (const FJoinStaticMeshActorsOptions&), ERASE_ARGUMENT_PACK(FJoinStaticMeshActorsOptions&)) },


{ ERASE_METHOD_PTR(FMergeStaticMeshActorsOptions, opAssign, (const FMergeStaticMeshActorsOptions&), ERASE_ARGUMENT_PACK(FMergeStaticMeshActorsOptions&)) },


{ ERASE_METHOD_PTR(FCreateProxyMeshActorOptions, opAssign, (const FCreateProxyMeshActorOptions&), ERASE_ARGUMENT_PACK(FCreateProxyMeshActorOptions&)) },


{ ERASE_METHOD_PTR(FEditorDialogLibraryObjectDetailsViewOptions, opAssign, (const FEditorDialogLibraryObjectDetailsViewOptions&), ERASE_ARGUMENT_PACK(FEditorDialogLibraryObjectDetailsViewOptions&)) },


{ ERASE_METHOD_PTR(FEditorScriptingJoinStaticMeshActorsOptions_Deprecated, opAssign, (const FEditorScriptingJoinStaticMeshActorsOptions_Deprecated&), ERASE_ARGUMENT_PACK(FEditorScriptingJoinStaticMeshActorsOptions_Deprecated&)) },


{ ERASE_METHOD_PTR(FEditorScriptingMergeStaticMeshActorsOptions_Deprecated, opAssign, (const FEditorScriptingMergeStaticMeshActorsOptions_Deprecated&), ERASE_ARGUMENT_PACK(FEditorScriptingMergeStaticMeshActorsOptions_Deprecated&)) },


{ ERASE_METHOD_PTR(FEditorScriptingCreateProxyMeshActorOptions_Deprecated, opAssign, (const FEditorScriptingCreateProxyMeshActorOptions_Deprecated&), ERASE_ARGUMENT_PACK(FEditorScriptingCreateProxyMeshActorOptions_Deprecated&)) },


{ ERASE_METHOD_PTR(FEditorScriptingMeshReductionSettings_Deprecated, opAssign, (const FEditorScriptingMeshReductionSettings_Deprecated&), ERASE_ARGUMENT_PACK(FEditorScriptingMeshReductionSettings_Deprecated&)) },


{ ERASE_METHOD_PTR(FEditorScriptingMeshReductionOptions_Deprecated, opAssign, (const FEditorScriptingMeshReductionOptions_Deprecated&), ERASE_ARGUMENT_PACK(FEditorScriptingMeshReductionOptions_Deprecated&)) },


{ ERASE_METHOD_PTR(FModelingToolsAxisFilter, opAssign, (const FModelingToolsAxisFilter&), ERASE_ARGUMENT_PACK(FModelingToolsAxisFilter&)) },


{ ERASE_METHOD_PTR(FModelingToolsColorChannelFilter, opAssign, (const FModelingToolsColorChannelFilter&), ERASE_ARGUMENT_PACK(FModelingToolsColorChannelFilter&)) },


{ ERASE_METHOD_PTR(FCreateMeshObjectParams, opAssign, (const FCreateMeshObjectParams&), ERASE_ARGUMENT_PACK(FCreateMeshObjectParams&)) },


{ ERASE_METHOD_PTR(FCreateMeshObjectResult, opAssign, (const FCreateMeshObjectResult&), ERASE_ARGUMENT_PACK(FCreateMeshObjectResult&)) },


{ ERASE_METHOD_PTR(FCreateTextureObjectParams, opAssign, (const FCreateTextureObjectParams&), ERASE_ARGUMENT_PACK(FCreateTextureObjectParams&)) },


{ ERASE_METHOD_PTR(FCreateTextureObjectResult, opAssign, (const FCreateTextureObjectResult&), ERASE_ARGUMENT_PACK(FCreateTextureObjectResult&)) },


{ ERASE_METHOD_PTR(FCreateMaterialObjectParams, opAssign, (const FCreateMaterialObjectParams&), ERASE_ARGUMENT_PACK(FCreateMaterialObjectParams&)) },


{ ERASE_METHOD_PTR(FCreateMaterialObjectResult, opAssign, (const FCreateMaterialObjectResult&), ERASE_ARGUMENT_PACK(FCreateMaterialObjectResult&)) },


{ ERASE_METHOD_PTR(FCreateActorParams, opAssign, (const FCreateActorParams&), ERASE_ARGUMENT_PACK(FCreateActorParams&)) },


{ ERASE_METHOD_PTR(FCreateActorResult, opAssign, (const FCreateActorResult&), ERASE_ARGUMENT_PACK(FCreateActorResult&)) },


{ ERASE_METHOD_PTR(FFractureModeCustomSectionColor, opAssign, (const FFractureModeCustomSectionColor&), ERASE_ARGUMENT_PACK(FFractureModeCustomSectionColor&)) },


{ ERASE_METHOD_PTR(FFractureModeCustomToolColor, opAssign, (const FFractureModeCustomToolColor&), ERASE_ARGUMENT_PACK(FFractureModeCustomToolColor&)) },


{ ERASE_METHOD_PTR(FChaosDestructionEvent, opAssign, (const FChaosDestructionEvent&), ERASE_ARGUMENT_PACK(FChaosDestructionEvent&)) },


{ ERASE_METHOD_PTR(FDataflowCollectionAddScalarVertexPropertyNode, opAssign, (const FDataflowCollectionAddScalarVertexPropertyNode&), ERASE_ARGUMENT_PACK(FDataflowCollectionAddScalarVertexPropertyNode&)) },


{ ERASE_METHOD_PTR(FFloatOverrideDataflowNode, opAssign, (const FFloatOverrideDataflowNode&), ERASE_ARGUMENT_PACK(FFloatOverrideDataflowNode&)) },


{ ERASE_METHOD_PTR(FSelectionSetDataflowNode, opAssign, (const FSelectionSetDataflowNode&), ERASE_ARGUMENT_PACK(FSelectionSetDataflowNode&)) },


{ ERASE_METHOD_PTR(FGetSkeletalMeshDataflowNode, opAssign, (const FGetSkeletalMeshDataflowNode&), ERASE_ARGUMENT_PACK(FGetSkeletalMeshDataflowNode&)) },


{ ERASE_METHOD_PTR(FGetSkeletonDataflowNode, opAssign, (const FGetSkeletonDataflowNode&), ERASE_ARGUMENT_PACK(FGetSkeletonDataflowNode&)) },


{ ERASE_METHOD_PTR(FSkeletalMeshBoneDataflowNode, opAssign, (const FSkeletalMeshBoneDataflowNode&), ERASE_ARGUMENT_PACK(FSkeletalMeshBoneDataflowNode&)) },


{ ERASE_METHOD_PTR(FSkeletalMeshReferenceTransformDataflowNode, opAssign, (const FSkeletalMeshReferenceTransformDataflowNode&), ERASE_ARGUMENT_PACK(FSkeletalMeshReferenceTransformDataflowNode&)) },


{ ERASE_METHOD_PTR(FGetStaticMeshDataflowNode, opAssign, (const FGetStaticMeshDataflowNode&), ERASE_ARGUMENT_PACK(FGetStaticMeshDataflowNode&)) },


{ ERASE_METHOD_PTR(FBakeMultiMeshDetailProperties, opAssign, (const FBakeMultiMeshDetailProperties&), ERASE_ARGUMENT_PACK(FBakeMultiMeshDetailProperties&)) },


{ ERASE_METHOD_PTR(FPerlinLayerProperties, opAssign, (const FPerlinLayerProperties&), ERASE_ARGUMENT_PACK(FPerlinLayerProperties&)) },


{ ERASE_METHOD_PTR(FPhysicsSphereData, opAssign, (const FPhysicsSphereData&), ERASE_ARGUMENT_PACK(FPhysicsSphereData&)) },


{ ERASE_METHOD_PTR(FPhysicsBoxData, opAssign, (const FPhysicsBoxData&), ERASE_ARGUMENT_PACK(FPhysicsBoxData&)) },


{ ERASE_METHOD_PTR(FPhysicsCapsuleData, opAssign, (const FPhysicsCapsuleData&), ERASE_ARGUMENT_PACK(FPhysicsCapsuleData&)) },


{ ERASE_METHOD_PTR(FPhysicsConvexData, opAssign, (const FPhysicsConvexData&), ERASE_ARGUMENT_PACK(FPhysicsConvexData&)) },


{ ERASE_METHOD_PTR(FPhysicsLevelSetData, opAssign, (const FPhysicsLevelSetData&), ERASE_ARGUMENT_PACK(FPhysicsLevelSetData&)) },


{ ERASE_METHOD_PTR(FBrushToolRadius, opAssign, (const FBrushToolRadius&), ERASE_ARGUMENT_PACK(FBrushToolRadius&)) },


{ ERASE_METHOD_PTR(FMovieSceneGeometryCollectionParams, opAssign, (const FMovieSceneGeometryCollectionParams&), ERASE_ARGUMENT_PACK(FMovieSceneGeometryCollectionParams&)) },


{ ERASE_METHOD_PTR(FMovieSceneGeometryCollectionSectionTemplateParameters, opAssign, (const FMovieSceneGeometryCollectionSectionTemplateParameters&), ERASE_ARGUMENT_PACK(FMovieSceneGeometryCollectionSectionTemplateParameters&)) },


{ ERASE_METHOD_PTR(FGetFloatArrayElementDataflowNode, opAssign, (const FGetFloatArrayElementDataflowNode&), ERASE_ARGUMENT_PACK(FGetFloatArrayElementDataflowNode&)) },


{ ERASE_METHOD_PTR(FFloatArrayToIntArrayDataflowNode, opAssign, (const FFloatArrayToIntArrayDataflowNode&), ERASE_ARGUMENT_PACK(FFloatArrayToIntArrayDataflowNode&)) },


{ ERASE_METHOD_PTR(FGetArrayElementDataflowNode, opAssign, (const FGetArrayElementDataflowNode&), ERASE_ARGUMENT_PACK(FGetArrayElementDataflowNode&)) },


{ ERASE_METHOD_PTR(FGetNumArrayElementsDataflowNode, opAssign, (const FGetNumArrayElementsDataflowNode&), ERASE_ARGUMENT_PACK(FGetNumArrayElementsDataflowNode&)) },


{ ERASE_METHOD_PTR(FBoolArrayToFaceSelectionDataflowNode, opAssign, (const FBoolArrayToFaceSelectionDataflowNode&), ERASE_ARGUMENT_PACK(FBoolArrayToFaceSelectionDataflowNode&)) },


{ ERASE_METHOD_PTR(FFloatArrayToVertexSelectionDataflowNode, opAssign, (const FFloatArrayToVertexSelectionDataflowNode&), ERASE_ARGUMENT_PACK(FFloatArrayToVertexSelectionDataflowNode&)) },


{ ERASE_METHOD_PTR(FFloatArrayNormalizeDataflowNode, opAssign, (const FFloatArrayNormalizeDataflowNode&), ERASE_ARGUMENT_PACK(FFloatArrayNormalizeDataflowNode&)) },


{ ERASE_METHOD_PTR(FVectorArrayNormalizeDataflowNode, opAssign, (const FVectorArrayNormalizeDataflowNode&), ERASE_ARGUMENT_PACK(FVectorArrayNormalizeDataflowNode&)) },


{ ERASE_METHOD_PTR(FUnionIntArraysDataflowNode, opAssign, (const FUnionIntArraysDataflowNode&), ERASE_ARGUMENT_PACK(FUnionIntArraysDataflowNode&)) },


{ ERASE_METHOD_PTR(FRemoveFloatArrayElementDataflowNode, opAssign, (const FRemoveFloatArrayElementDataflowNode&), ERASE_ARGUMENT_PACK(FRemoveFloatArrayElementDataflowNode&)) },


{ ERASE_METHOD_PTR(FFloatArrayComputeStatisticsDataflowNode, opAssign, (const FFloatArrayComputeStatisticsDataflowNode&), ERASE_ARGUMENT_PACK(FFloatArrayComputeStatisticsDataflowNode&)) },


{ ERASE_METHOD_PTR(FGeometryCollectionTerminalDataflowNode, opAssign, (const FGeometryCollectionTerminalDataflowNode&), ERASE_ARGUMENT_PACK(FGeometryCollectionTerminalDataflowNode&)) },


{ ERASE_METHOD_PTR(FGetGeometryCollectionAssetDataflowNode, opAssign, (const FGetGeometryCollectionAssetDataflowNode&), ERASE_ARGUMENT_PACK(FGetGeometryCollectionAssetDataflowNode&)) },


{ ERASE_METHOD_PTR(FGetGeometryCollectionSourcesDataflowNode, opAssign, (const FGetGeometryCollectionSourcesDataflowNode&), ERASE_ARGUMENT_PACK(FGetGeometryCollectionSourcesDataflowNode&)) },


{ ERASE_METHOD_PTR(FCreateGeometryCollectionFromSourcesDataflowNode, opAssign, (const FCreateGeometryCollectionFromSourcesDataflowNode&), ERASE_ARGUMENT_PACK(FCreateGeometryCollectionFromSourcesDataflowNode&)) },


{ ERASE_METHOD_PTR(FStaticMeshToCollectionDataflowNode, opAssign, (const FStaticMeshToCollectionDataflowNode&), ERASE_ARGUMENT_PACK(FStaticMeshToCollectionDataflowNode&)) },


{ ERASE_METHOD_PTR(FRadialFalloffFieldDataflowNode, opAssign, (const FRadialFalloffFieldDataflowNode&), ERASE_ARGUMENT_PACK(FRadialFalloffFieldDataflowNode&)) },


{ ERASE_METHOD_PTR(FBoxFalloffFieldDataflowNode, opAssign, (const FBoxFalloffFieldDataflowNode&), ERASE_ARGUMENT_PACK(FBoxFalloffFieldDataflowNode&)) },


{ ERASE_METHOD_PTR(FPlaneFalloffFieldDataflowNode, opAssign, (const FPlaneFalloffFieldDataflowNode&), ERASE_ARGUMENT_PACK(FPlaneFalloffFieldDataflowNode&)) },


{ ERASE_METHOD_PTR(FRadialIntMaskFieldDataflowNode, opAssign, (const FRadialIntMaskFieldDataflowNode&), ERASE_ARGUMENT_PACK(FRadialIntMaskFieldDataflowNode&)) },


{ ERASE_METHOD_PTR(FUniformScalarFieldDataflowNode, opAssign, (const FUniformScalarFieldDataflowNode&), ERASE_ARGUMENT_PACK(FUniformScalarFieldDataflowNode&)) },


{ ERASE_METHOD_PTR(FUniformVectorFieldDataflowNode, opAssign, (const FUniformVectorFieldDataflowNode&), ERASE_ARGUMENT_PACK(FUniformVectorFieldDataflowNode&)) },


{ ERASE_METHOD_PTR(FRadialVectorFieldDataflowNode, opAssign, (const FRadialVectorFieldDataflowNode&), ERASE_ARGUMENT_PACK(FRadialVectorFieldDataflowNode&)) },


{ ERASE_METHOD_PTR(FRandomVectorFieldDataflowNode, opAssign, (const FRandomVectorFieldDataflowNode&), ERASE_ARGUMENT_PACK(FRandomVectorFieldDataflowNode&)) },


{ ERASE_METHOD_PTR(FNoiseFieldDataflowNode, opAssign, (const FNoiseFieldDataflowNode&), ERASE_ARGUMENT_PACK(FNoiseFieldDataflowNode&)) },


{ ERASE_METHOD_PTR(FUniformIntegerFieldDataflowNode, opAssign, (const FUniformIntegerFieldDataflowNode&), ERASE_ARGUMENT_PACK(FUniformIntegerFieldDataflowNode&)) },


{ ERASE_METHOD_PTR(FWaveScalarFieldDataflowNode, opAssign, (const FWaveScalarFieldDataflowNode&), ERASE_ARGUMENT_PACK(FWaveScalarFieldDataflowNode&)) },


{ ERASE_METHOD_PTR(FSumScalarFieldDataflowNode, opAssign, (const FSumScalarFieldDataflowNode&), ERASE_ARGUMENT_PACK(FSumScalarFieldDataflowNode&)) },


{ ERASE_METHOD_PTR(FSumVectorFieldDataflowNode, opAssign, (const FSumVectorFieldDataflowNode&), ERASE_ARGUMENT_PACK(FSumVectorFieldDataflowNode&)) },


{ ERASE_METHOD_PTR(FFieldMakeDenseFloatArrayDataflowNode, opAssign, (const FFieldMakeDenseFloatArrayDataflowNode&), ERASE_ARGUMENT_PACK(FFieldMakeDenseFloatArrayDataflowNode&)) },


{ ERASE_METHOD_PTR(FAddMaterialToCollectionDataflowNode, opAssign, (const FAddMaterialToCollectionDataflowNode&), ERASE_ARGUMENT_PACK(FAddMaterialToCollectionDataflowNode&)) },


{ ERASE_METHOD_PTR(FReAssignMaterialInCollectionDataflowNode, opAssign, (const FReAssignMaterialInCollectionDataflowNode&), ERASE_ARGUMENT_PACK(FReAssignMaterialInCollectionDataflowNode&)) },


{ ERASE_METHOD_PTR(FMaterialsInfoDataflowNode, opAssign, (const FMaterialsInfoDataflowNode&), ERASE_ARGUMENT_PACK(FMaterialsInfoDataflowNode&)) },


{ ERASE_METHOD_PTR(FGetMaterialFromMaterialsArrayDataflowNode, opAssign, (const FGetMaterialFromMaterialsArrayDataflowNode&), ERASE_ARGUMENT_PACK(FGetMaterialFromMaterialsArrayDataflowNode&)) },


{ ERASE_METHOD_PTR(FSetMaterialInMaterialsArrayDataflowNode, opAssign, (const FSetMaterialInMaterialsArrayDataflowNode&), ERASE_ARGUMENT_PACK(FSetMaterialInMaterialsArrayDataflowNode&)) },


{ ERASE_METHOD_PTR(FMakeMaterialDataflowNode, opAssign, (const FMakeMaterialDataflowNode&), ERASE_ARGUMENT_PACK(FMakeMaterialDataflowNode&)) },


{ ERASE_METHOD_PTR(FMakeMaterialsArrayDataflowNode, opAssign, (const FMakeMaterialsArrayDataflowNode&), ERASE_ARGUMENT_PACK(FMakeMaterialsArrayDataflowNode&)) },


{ ERASE_METHOD_PTR(FCloseGeometryOnCollectionDataflowNode, opAssign, (const FCloseGeometryOnCollectionDataflowNode&), ERASE_ARGUMENT_PACK(FCloseGeometryOnCollectionDataflowNode&)) },


{ ERASE_METHOD_PTR(FSkeletonToCollectionDataflowNode, opAssign, (const FSkeletonToCollectionDataflowNode&), ERASE_ARGUMENT_PACK(FSkeletonToCollectionDataflowNode&)) },


{ ERASE_METHOD_PTR(FDataflowConvexDecompositionSettings, opAssign, (const FDataflowConvexDecompositionSettings&), ERASE_ARGUMENT_PACK(FDataflowConvexDecompositionSettings&)) },


{ ERASE_METHOD_PTR(FMakeDataflowConvexDecompositionSettingsNode, opAssign, (const FMakeDataflowConvexDecompositionSettingsNode&), ERASE_ARGUMENT_PACK(FMakeDataflowConvexDecompositionSettingsNode&)) },


{ ERASE_METHOD_PTR(FCreateLeafConvexHullsDataflowNode, opAssign, (const FCreateLeafConvexHullsDataflowNode&), ERASE_ARGUMENT_PACK(FCreateLeafConvexHullsDataflowNode&)) },


{ ERASE_METHOD_PTR(FSimplifyConvexHullsDataflowNode, opAssign, (const FSimplifyConvexHullsDataflowNode&), ERASE_ARGUMENT_PACK(FSimplifyConvexHullsDataflowNode&)) },


{ ERASE_METHOD_PTR(FCreateNonOverlappingConvexHullsDataflowNode, opAssign, (const FCreateNonOverlappingConvexHullsDataflowNode&), ERASE_ARGUMENT_PACK(FCreateNonOverlappingConvexHullsDataflowNode&)) },


{ ERASE_METHOD_PTR(FGenerateClusterConvexHullsFromLeafHullsDataflowNode, opAssign, (const FGenerateClusterConvexHullsFromLeafHullsDataflowNode&), ERASE_ARGUMENT_PACK(FGenerateClusterConvexHullsFromLeafHullsDataflowNode&)) },


{ ERASE_METHOD_PTR(FGenerateClusterConvexHullsFromChildrenHullsDataflowNode, opAssign, (const FGenerateClusterConvexHullsFromChildrenHullsDataflowNode&), ERASE_ARGUMENT_PACK(FGenerateClusterConvexHullsFromChildrenHullsDataflowNode&)) },


{ ERASE_METHOD_PTR(FClearConvexHullsDataflowNode, opAssign, (const FClearConvexHullsDataflowNode&), ERASE_ARGUMENT_PACK(FClearConvexHullsDataflowNode&)) },


{ ERASE_METHOD_PTR(FMergeConvexHullsDataflowNode, opAssign, (const FMergeConvexHullsDataflowNode&), ERASE_ARGUMENT_PACK(FMergeConvexHullsDataflowNode&)) },


{ ERASE_METHOD_PTR(FUpdateVolumeAttributesDataflowNode, opAssign, (const FUpdateVolumeAttributesDataflowNode&), ERASE_ARGUMENT_PACK(FUpdateVolumeAttributesDataflowNode&)) },


{ ERASE_METHOD_PTR(FGetConvexHullVolumeDataflowNode, opAssign, (const FGetConvexHullVolumeDataflowNode&), ERASE_ARGUMENT_PACK(FGetConvexHullVolumeDataflowNode&)) },


{ ERASE_METHOD_PTR(FAutoClusterDataflowNode, opAssign, (const FAutoClusterDataflowNode&), ERASE_ARGUMENT_PACK(FAutoClusterDataflowNode&)) },


{ ERASE_METHOD_PTR(FClusterFlattenDataflowNode, opAssign, (const FClusterFlattenDataflowNode&), ERASE_ARGUMENT_PACK(FClusterFlattenDataflowNode&)) },


{ ERASE_METHOD_PTR(FClusterUnclusterDataflowNode, opAssign, (const FClusterUnclusterDataflowNode&), ERASE_ARGUMENT_PACK(FClusterUnclusterDataflowNode&)) },


{ ERASE_METHOD_PTR(FClusterDataflowNode, opAssign, (const FClusterDataflowNode&), ERASE_ARGUMENT_PACK(FClusterDataflowNode&)) },


{ ERASE_METHOD_PTR(FClusterMergeToNeighborsDataflowNode, opAssign, (const FClusterMergeToNeighborsDataflowNode&), ERASE_ARGUMENT_PACK(FClusterMergeToNeighborsDataflowNode&)) },


{ ERASE_METHOD_PTR(FClusterMergeDataflowNode, opAssign, (const FClusterMergeDataflowNode&), ERASE_ARGUMENT_PACK(FClusterMergeDataflowNode&)) },


{ ERASE_METHOD_PTR(FClusterIsolatedRootsDataflowNode, opAssign, (const FClusterIsolatedRootsDataflowNode&), ERASE_ARGUMENT_PACK(FClusterIsolatedRootsDataflowNode&)) },


{ ERASE_METHOD_PTR(FClusterMagnetDataflowNode, opAssign, (const FClusterMagnetDataflowNode&), ERASE_ARGUMENT_PACK(FClusterMagnetDataflowNode&)) },


{ ERASE_METHOD_PTR(FVectorToStringDataflowNode, opAssign, (const FVectorToStringDataflowNode&), ERASE_ARGUMENT_PACK(FVectorToStringDataflowNode&)) },


{ ERASE_METHOD_PTR(FFloatToStringDataflowNode, opAssign, (const FFloatToStringDataflowNode&), ERASE_ARGUMENT_PACK(FFloatToStringDataflowNode&)) },


{ ERASE_METHOD_PTR(FIntToStringDataflowNode, opAssign, (const FIntToStringDataflowNode&), ERASE_ARGUMENT_PACK(FIntToStringDataflowNode&)) },


{ ERASE_METHOD_PTR(FBoolToStringDataflowNode, opAssign, (const FBoolToStringDataflowNode&), ERASE_ARGUMENT_PACK(FBoolToStringDataflowNode&)) },


{ ERASE_METHOD_PTR(FIntToFloatDataflowNode, opAssign, (const FIntToFloatDataflowNode&), ERASE_ARGUMENT_PACK(FIntToFloatDataflowNode&)) },


{ ERASE_METHOD_PTR(FIntToDoubleDataflowNode, opAssign, (const FIntToDoubleDataflowNode&), ERASE_ARGUMENT_PACK(FIntToDoubleDataflowNode&)) },


{ ERASE_METHOD_PTR(FFloatToDoubleDataflowNode, opAssign, (const FFloatToDoubleDataflowNode&), ERASE_ARGUMENT_PACK(FFloatToDoubleDataflowNode&)) },


{ ERASE_METHOD_PTR(FFloatToIntDataflowNode, opAssign, (const FFloatToIntDataflowNode&), ERASE_ARGUMENT_PACK(FFloatToIntDataflowNode&)) },


{ ERASE_METHOD_PTR(FIntToBoolDataflowNode, opAssign, (const FIntToBoolDataflowNode&), ERASE_ARGUMENT_PACK(FIntToBoolDataflowNode&)) },


{ ERASE_METHOD_PTR(FBoolToIntDataflowNode, opAssign, (const FBoolToIntDataflowNode&), ERASE_ARGUMENT_PACK(FBoolToIntDataflowNode&)) },


{ ERASE_METHOD_PTR(FConvexHullToMeshDataflowNode, opAssign, (const FConvexHullToMeshDataflowNode&), ERASE_ARGUMENT_PACK(FConvexHullToMeshDataflowNode&)) },


{ ERASE_METHOD_PTR(FSphereCoveringToMeshDataflowNode, opAssign, (const FSphereCoveringToMeshDataflowNode&), ERASE_ARGUMENT_PACK(FSphereCoveringToMeshDataflowNode&)) },


{ ERASE_METHOD_PTR(FSphereCoveringCountSpheresNode, opAssign, (const FSphereCoveringCountSpheresNode&), ERASE_ARGUMENT_PACK(FSphereCoveringCountSpheresNode&)) },


{ ERASE_METHOD_PTR(FMeshToOBJStringDebugDataflowNode, opAssign, (const FMeshToOBJStringDebugDataflowNode&), ERASE_ARGUMENT_PACK(FMeshToOBJStringDebugDataflowNode&)) },


{ ERASE_METHOD_PTR(FWriteStringToFile, opAssign, (const FWriteStringToFile&), ERASE_ARGUMENT_PACK(FWriteStringToFile&)) },


{ ERASE_METHOD_PTR(FPruneInCollectionDataflowNode, opAssign, (const FPruneInCollectionDataflowNode&), ERASE_ARGUMENT_PACK(FPruneInCollectionDataflowNode&)) },


{ ERASE_METHOD_PTR(FSetVisibilityInCollectionDataflowNode, opAssign, (const FSetVisibilityInCollectionDataflowNode&), ERASE_ARGUMENT_PACK(FSetVisibilityInCollectionDataflowNode&)) },


{ ERASE_METHOD_PTR(FMergeInCollectionDataflowNode, opAssign, (const FMergeInCollectionDataflowNode&), ERASE_ARGUMENT_PACK(FMergeInCollectionDataflowNode&)) },


{ ERASE_METHOD_PTR(FUniformScatterPointsDataflowNode, opAssign, (const FUniformScatterPointsDataflowNode&), ERASE_ARGUMENT_PACK(FUniformScatterPointsDataflowNode&)) },


{ ERASE_METHOD_PTR(FRadialScatterPointsDataflowNode, opAssign, (const FRadialScatterPointsDataflowNode&), ERASE_ARGUMENT_PACK(FRadialScatterPointsDataflowNode&)) },


{ ERASE_METHOD_PTR(FVoronoiFractureDataflowNode, opAssign, (const FVoronoiFractureDataflowNode&), ERASE_ARGUMENT_PACK(FVoronoiFractureDataflowNode&)) },


{ ERASE_METHOD_PTR(FPlaneCutterDataflowNode, opAssign, (const FPlaneCutterDataflowNode&), ERASE_ARGUMENT_PACK(FPlaneCutterDataflowNode&)) },


{ ERASE_METHOD_PTR(FExplodedViewDataflowNode, opAssign, (const FExplodedViewDataflowNode&), ERASE_ARGUMENT_PACK(FExplodedViewDataflowNode&)) },


{ ERASE_METHOD_PTR(FMakeLiteralStringDataflowNode, opAssign, (const FMakeLiteralStringDataflowNode&), ERASE_ARGUMENT_PACK(FMakeLiteralStringDataflowNode&)) },


{ ERASE_METHOD_PTR(FMakePointsDataflowNode, opAssign, (const FMakePointsDataflowNode&), ERASE_ARGUMENT_PACK(FMakePointsDataflowNode&)) },


{ ERASE_METHOD_PTR(FMakeBoxDataflowNode, opAssign, (const FMakeBoxDataflowNode&), ERASE_ARGUMENT_PACK(FMakeBoxDataflowNode&)) },


{ ERASE_METHOD_PTR(FMakeSphereDataflowNode, opAssign, (const FMakeSphereDataflowNode&), ERASE_ARGUMENT_PACK(FMakeSphereDataflowNode&)) },


{ ERASE_METHOD_PTR(FMakeLiteralFloatDataflowNode, opAssign, (const FMakeLiteralFloatDataflowNode&), ERASE_ARGUMENT_PACK(FMakeLiteralFloatDataflowNode&)) },


{ ERASE_METHOD_PTR(FMakeLiteralIntDataflowNode, opAssign, (const FMakeLiteralIntDataflowNode&), ERASE_ARGUMENT_PACK(FMakeLiteralIntDataflowNode&)) },


{ ERASE_METHOD_PTR(FMakeLiteralBoolDataflowNode, opAssign, (const FMakeLiteralBoolDataflowNode&), ERASE_ARGUMENT_PACK(FMakeLiteralBoolDataflowNode&)) },


{ ERASE_METHOD_PTR(FMakeLiteralVectorDataflowNode, opAssign, (const FMakeLiteralVectorDataflowNode&), ERASE_ARGUMENT_PACK(FMakeLiteralVectorDataflowNode&)) },


{ ERASE_METHOD_PTR(FMakeTransformDataflowNode, opAssign, (const FMakeTransformDataflowNode&), ERASE_ARGUMENT_PACK(FMakeTransformDataflowNode&)) },


{ ERASE_METHOD_PTR(FMakeQuaternionDataflowNode, opAssign, (const FMakeQuaternionDataflowNode&), ERASE_ARGUMENT_PACK(FMakeQuaternionDataflowNode&)) },


{ ERASE_METHOD_PTR(FAddDataflowNode, opAssign, (const FAddDataflowNode&), ERASE_ARGUMENT_PACK(FAddDataflowNode&)) },


{ ERASE_METHOD_PTR(FSubtractDataflowNode, opAssign, (const FSubtractDataflowNode&), ERASE_ARGUMENT_PACK(FSubtractDataflowNode&)) },


{ ERASE_METHOD_PTR(FMultiplyDataflowNode, opAssign, (const FMultiplyDataflowNode&), ERASE_ARGUMENT_PACK(FMultiplyDataflowNode&)) },


{ ERASE_METHOD_PTR(FSafeDivideDataflowNode, opAssign, (const FSafeDivideDataflowNode&), ERASE_ARGUMENT_PACK(FSafeDivideDataflowNode&)) },


{ ERASE_METHOD_PTR(FDivideDataflowNode, opAssign, (const FDivideDataflowNode&), ERASE_ARGUMENT_PACK(FDivideDataflowNode&)) },


{ ERASE_METHOD_PTR(FDivisionDataflowNode, opAssign, (const FDivisionDataflowNode&), ERASE_ARGUMENT_PACK(FDivisionDataflowNode&)) },


{ ERASE_METHOD_PTR(FSafeReciprocalDataflowNode, opAssign, (const FSafeReciprocalDataflowNode&), ERASE_ARGUMENT_PACK(FSafeReciprocalDataflowNode&)) },


{ ERASE_METHOD_PTR(FSquareDataflowNode, opAssign, (const FSquareDataflowNode&), ERASE_ARGUMENT_PACK(FSquareDataflowNode&)) },


{ ERASE_METHOD_PTR(FSquareRootDataflowNode, opAssign, (const FSquareRootDataflowNode&), ERASE_ARGUMENT_PACK(FSquareRootDataflowNode&)) },


{ ERASE_METHOD_PTR(FInverseSqrtDataflowNode, opAssign, (const FInverseSqrtDataflowNode&), ERASE_ARGUMENT_PACK(FInverseSqrtDataflowNode&)) },


{ ERASE_METHOD_PTR(FCubeDataflowNode, opAssign, (const FCubeDataflowNode&), ERASE_ARGUMENT_PACK(FCubeDataflowNode&)) },


{ ERASE_METHOD_PTR(FNegateDataflowNode, opAssign, (const FNegateDataflowNode&), ERASE_ARGUMENT_PACK(FNegateDataflowNode&)) },


{ ERASE_METHOD_PTR(FAbsDataflowNode, opAssign, (const FAbsDataflowNode&), ERASE_ARGUMENT_PACK(FAbsDataflowNode&)) },


{ ERASE_METHOD_PTR(FFloorDataflowNode, opAssign, (const FFloorDataflowNode&), ERASE_ARGUMENT_PACK(FFloorDataflowNode&)) },


{ ERASE_METHOD_PTR(FCeilDataflowNode, opAssign, (const FCeilDataflowNode&), ERASE_ARGUMENT_PACK(FCeilDataflowNode&)) },


{ ERASE_METHOD_PTR(FRoundDataflowNode, opAssign, (const FRoundDataflowNode&), ERASE_ARGUMENT_PACK(FRoundDataflowNode&)) },


{ ERASE_METHOD_PTR(FTruncDataflowNode, opAssign, (const FTruncDataflowNode&), ERASE_ARGUMENT_PACK(FTruncDataflowNode&)) },


{ ERASE_METHOD_PTR(FFracDataflowNode, opAssign, (const FFracDataflowNode&), ERASE_ARGUMENT_PACK(FFracDataflowNode&)) },


{ ERASE_METHOD_PTR(FMinDataflowNode, opAssign, (const FMinDataflowNode&), ERASE_ARGUMENT_PACK(FMinDataflowNode&)) },


{ ERASE_METHOD_PTR(FMaxDataflowNode, opAssign, (const FMaxDataflowNode&), ERASE_ARGUMENT_PACK(FMaxDataflowNode&)) },


{ ERASE_METHOD_PTR(FMin3DataflowNode, opAssign, (const FMin3DataflowNode&), ERASE_ARGUMENT_PACK(FMin3DataflowNode&)) },


{ ERASE_METHOD_PTR(FMax3DataflowNode, opAssign, (const FMax3DataflowNode&), ERASE_ARGUMENT_PACK(FMax3DataflowNode&)) },


{ ERASE_METHOD_PTR(FSignDataflowNode, opAssign, (const FSignDataflowNode&), ERASE_ARGUMENT_PACK(FSignDataflowNode&)) },


{ ERASE_METHOD_PTR(FClampDataflowNode, opAssign, (const FClampDataflowNode&), ERASE_ARGUMENT_PACK(FClampDataflowNode&)) },


{ ERASE_METHOD_PTR(FFitDataflowNode, opAssign, (const FFitDataflowNode&), ERASE_ARGUMENT_PACK(FFitDataflowNode&)) },


{ ERASE_METHOD_PTR(FEFitDataflowNode, opAssign, (const FEFitDataflowNode&), ERASE_ARGUMENT_PACK(FEFitDataflowNode&)) },


{ ERASE_METHOD_PTR(FPowDataflowNode, opAssign, (const FPowDataflowNode&), ERASE_ARGUMENT_PACK(FPowDataflowNode&)) },


{ ERASE_METHOD_PTR(FLogDataflowNode, opAssign, (const FLogDataflowNode&), ERASE_ARGUMENT_PACK(FLogDataflowNode&)) },


{ ERASE_METHOD_PTR(FLogeDataflowNode, opAssign, (const FLogeDataflowNode&), ERASE_ARGUMENT_PACK(FLogeDataflowNode&)) },


{ ERASE_METHOD_PTR(FLerpDataflowNode, opAssign, (const FLerpDataflowNode&), ERASE_ARGUMENT_PACK(FLerpDataflowNode&)) },


{ ERASE_METHOD_PTR(FWrapDataflowNode, opAssign, (const FWrapDataflowNode&), ERASE_ARGUMENT_PACK(FWrapDataflowNode&)) },


{ ERASE_METHOD_PTR(FExpDataflowNode, opAssign, (const FExpDataflowNode&), ERASE_ARGUMENT_PACK(FExpDataflowNode&)) },


{ ERASE_METHOD_PTR(FSinDataflowNode, opAssign, (const FSinDataflowNode&), ERASE_ARGUMENT_PACK(FSinDataflowNode&)) },


{ ERASE_METHOD_PTR(FArcSinDataflowNode, opAssign, (const FArcSinDataflowNode&), ERASE_ARGUMENT_PACK(FArcSinDataflowNode&)) },


{ ERASE_METHOD_PTR(FCosDataflowNode, opAssign, (const FCosDataflowNode&), ERASE_ARGUMENT_PACK(FCosDataflowNode&)) },


{ ERASE_METHOD_PTR(FArcCosDataflowNode, opAssign, (const FArcCosDataflowNode&), ERASE_ARGUMENT_PACK(FArcCosDataflowNode&)) },


{ ERASE_METHOD_PTR(FTanDataflowNode, opAssign, (const FTanDataflowNode&), ERASE_ARGUMENT_PACK(FTanDataflowNode&)) },


{ ERASE_METHOD_PTR(FArcTanDataflowNode, opAssign, (const FArcTanDataflowNode&), ERASE_ARGUMENT_PACK(FArcTanDataflowNode&)) },


{ ERASE_METHOD_PTR(FArcTan2DataflowNode, opAssign, (const FArcTan2DataflowNode&), ERASE_ARGUMENT_PACK(FArcTan2DataflowNode&)) },


{ ERASE_METHOD_PTR(FNormalizeToRangeDataflowNode, opAssign, (const FNormalizeToRangeDataflowNode&), ERASE_ARGUMENT_PACK(FNormalizeToRangeDataflowNode&)) },


{ ERASE_METHOD_PTR(FScaleVectorDataflowNode, opAssign, (const FScaleVectorDataflowNode&), ERASE_ARGUMENT_PACK(FScaleVectorDataflowNode&)) },


{ ERASE_METHOD_PTR(FDotProductDataflowNode, opAssign, (const FDotProductDataflowNode&), ERASE_ARGUMENT_PACK(FDotProductDataflowNode&)) },


{ ERASE_METHOD_PTR(FCrossProductDataflowNode, opAssign, (const FCrossProductDataflowNode&), ERASE_ARGUMENT_PACK(FCrossProductDataflowNode&)) },


{ ERASE_METHOD_PTR(FNormalizeDataflowNode, opAssign, (const FNormalizeDataflowNode&), ERASE_ARGUMENT_PACK(FNormalizeDataflowNode&)) },


{ ERASE_METHOD_PTR(FLengthDataflowNode, opAssign, (const FLengthDataflowNode&), ERASE_ARGUMENT_PACK(FLengthDataflowNode&)) },


{ ERASE_METHOD_PTR(FDistanceDataflowNode, opAssign, (const FDistanceDataflowNode&), ERASE_ARGUMENT_PACK(FDistanceDataflowNode&)) },


{ ERASE_METHOD_PTR(FIsNearlyZeroDataflowNode, opAssign, (const FIsNearlyZeroDataflowNode&), ERASE_ARGUMENT_PACK(FIsNearlyZeroDataflowNode&)) },


{ ERASE_METHOD_PTR(FRandomFloatDataflowNode, opAssign, (const FRandomFloatDataflowNode&), ERASE_ARGUMENT_PACK(FRandomFloatDataflowNode&)) },


{ ERASE_METHOD_PTR(FRandomFloatInRangeDataflowNode, opAssign, (const FRandomFloatInRangeDataflowNode&), ERASE_ARGUMENT_PACK(FRandomFloatInRangeDataflowNode&)) },


{ ERASE_METHOD_PTR(FRandomUnitVectorDataflowNode, opAssign, (const FRandomUnitVectorDataflowNode&), ERASE_ARGUMENT_PACK(FRandomUnitVectorDataflowNode&)) },


{ ERASE_METHOD_PTR(FRandomUnitVectorInConeDataflowNode, opAssign, (const FRandomUnitVectorInConeDataflowNode&), ERASE_ARGUMENT_PACK(FRandomUnitVectorInConeDataflowNode&)) },


{ ERASE_METHOD_PTR(FRadiansToDegreesDataflowNode, opAssign, (const FRadiansToDegreesDataflowNode&), ERASE_ARGUMENT_PACK(FRadiansToDegreesDataflowNode&)) },


{ ERASE_METHOD_PTR(FDegreesToRadiansDataflowNode, opAssign, (const FDegreesToRadiansDataflowNode&), ERASE_ARGUMENT_PACK(FDegreesToRadiansDataflowNode&)) },


{ ERASE_METHOD_PTR(FMathConstantsDataflowNode, opAssign, (const FMathConstantsDataflowNode&), ERASE_ARGUMENT_PACK(FMathConstantsDataflowNode&)) },


{ ERASE_METHOD_PTR(FOneMinusDataflowNode, opAssign, (const FOneMinusDataflowNode&), ERASE_ARGUMENT_PACK(FOneMinusDataflowNode&)) },


{ ERASE_METHOD_PTR(FPointsToMeshDataflowNode, opAssign, (const FPointsToMeshDataflowNode&), ERASE_ARGUMENT_PACK(FPointsToMeshDataflowNode&)) },


{ ERASE_METHOD_PTR(FBoxToMeshDataflowNode, opAssign, (const FBoxToMeshDataflowNode&), ERASE_ARGUMENT_PACK(FBoxToMeshDataflowNode&)) },


{ ERASE_METHOD_PTR(FMeshInfoDataflowNode, opAssign, (const FMeshInfoDataflowNode&), ERASE_ARGUMENT_PACK(FMeshInfoDataflowNode&)) },


{ ERASE_METHOD_PTR(FMeshToCollectionDataflowNode, opAssign, (const FMeshToCollectionDataflowNode&), ERASE_ARGUMENT_PACK(FMeshToCollectionDataflowNode&)) },


{ ERASE_METHOD_PTR(FCollectionToMeshDataflowNode, opAssign, (const FCollectionToMeshDataflowNode&), ERASE_ARGUMENT_PACK(FCollectionToMeshDataflowNode&)) },


{ ERASE_METHOD_PTR(FStaticMeshToMeshDataflowNode, opAssign, (const FStaticMeshToMeshDataflowNode&), ERASE_ARGUMENT_PACK(FStaticMeshToMeshDataflowNode&)) },


{ ERASE_METHOD_PTR(FMeshAppendDataflowNode, opAssign, (const FMeshAppendDataflowNode&), ERASE_ARGUMENT_PACK(FMeshAppendDataflowNode&)) },


{ ERASE_METHOD_PTR(FMeshBooleanDataflowNode, opAssign, (const FMeshBooleanDataflowNode&), ERASE_ARGUMENT_PACK(FMeshBooleanDataflowNode&)) },


{ ERASE_METHOD_PTR(FMeshCopyToPointsDataflowNode, opAssign, (const FMeshCopyToPointsDataflowNode&), ERASE_ARGUMENT_PACK(FMeshCopyToPointsDataflowNode&)) },


{ ERASE_METHOD_PTR(FGetMeshDataDataflowNode, opAssign, (const FGetMeshDataDataflowNode&), ERASE_ARGUMENT_PACK(FGetMeshDataDataflowNode&)) },


{ ERASE_METHOD_PTR(FGetCollectionFromAssetDataflowNode, opAssign, (const FGetCollectionFromAssetDataflowNode&), ERASE_ARGUMENT_PACK(FGetCollectionFromAssetDataflowNode&)) },


{ ERASE_METHOD_PTR(FAppendCollectionAssetsDataflowNode, opAssign, (const FAppendCollectionAssetsDataflowNode&), ERASE_ARGUMENT_PACK(FAppendCollectionAssetsDataflowNode&)) },


{ ERASE_METHOD_PTR(FPrintStringDataflowNode, opAssign, (const FPrintStringDataflowNode&), ERASE_ARGUMENT_PACK(FPrintStringDataflowNode&)) },


{ ERASE_METHOD_PTR(FLogStringDataflowNode, opAssign, (const FLogStringDataflowNode&), ERASE_ARGUMENT_PACK(FLogStringDataflowNode&)) },


{ ERASE_METHOD_PTR(FBoundingBoxDataflowNode, opAssign, (const FBoundingBoxDataflowNode&), ERASE_ARGUMENT_PACK(FBoundingBoxDataflowNode&)) },


{ ERASE_METHOD_PTR(FGetBoxLengthsDataflowNode, opAssign, (const FGetBoxLengthsDataflowNode&), ERASE_ARGUMENT_PACK(FGetBoxLengthsDataflowNode&)) },


{ ERASE_METHOD_PTR(FExpandBoundingBoxDataflowNode, opAssign, (const FExpandBoundingBoxDataflowNode&), ERASE_ARGUMENT_PACK(FExpandBoundingBoxDataflowNode&)) },


{ ERASE_METHOD_PTR(FExpandVectorDataflowNode, opAssign, (const FExpandVectorDataflowNode&), ERASE_ARGUMENT_PACK(FExpandVectorDataflowNode&)) },


{ ERASE_METHOD_PTR(FStringAppendDataflowNode, opAssign, (const FStringAppendDataflowNode&), ERASE_ARGUMENT_PACK(FStringAppendDataflowNode&)) },


{ ERASE_METHOD_PTR(FHashStringDataflowNode, opAssign, (const FHashStringDataflowNode&), ERASE_ARGUMENT_PACK(FHashStringDataflowNode&)) },


{ ERASE_METHOD_PTR(FHashVectorDataflowNode, opAssign, (const FHashVectorDataflowNode&), ERASE_ARGUMENT_PACK(FHashVectorDataflowNode&)) },


{ ERASE_METHOD_PTR(FGetBoundingBoxesFromCollectionDataflowNode, opAssign, (const FGetBoundingBoxesFromCollectionDataflowNode&), ERASE_ARGUMENT_PACK(FGetBoundingBoxesFromCollectionDataflowNode&)) },


{ ERASE_METHOD_PTR(FGetRootIndexFromCollectionDataflowNode, opAssign, (const FGetRootIndexFromCollectionDataflowNode&), ERASE_ARGUMENT_PACK(FGetRootIndexFromCollectionDataflowNode&)) },


{ ERASE_METHOD_PTR(FGetCentroidsFromCollectionDataflowNode, opAssign, (const FGetCentroidsFromCollectionDataflowNode&), ERASE_ARGUMENT_PACK(FGetCentroidsFromCollectionDataflowNode&)) },


{ ERASE_METHOD_PTR(FTransformCollectionDataflowNode, opAssign, (const FTransformCollectionDataflowNode&), ERASE_ARGUMENT_PACK(FTransformCollectionDataflowNode&)) },


{ ERASE_METHOD_PTR(FBakeTransformsInCollectionDataflowNode, opAssign, (const FBakeTransformsInCollectionDataflowNode&), ERASE_ARGUMENT_PACK(FBakeTransformsInCollectionDataflowNode&)) },


{ ERASE_METHOD_PTR(FTransformMeshDataflowNode, opAssign, (const FTransformMeshDataflowNode&), ERASE_ARGUMENT_PACK(FTransformMeshDataflowNode&)) },


{ ERASE_METHOD_PTR(FCompareIntDataflowNode, opAssign, (const FCompareIntDataflowNode&), ERASE_ARGUMENT_PACK(FCompareIntDataflowNode&)) },


{ ERASE_METHOD_PTR(FCompareFloatDataflowNode, opAssign, (const FCompareFloatDataflowNode&), ERASE_ARGUMENT_PACK(FCompareFloatDataflowNode&)) },


{ ERASE_METHOD_PTR(FBranchMeshDataflowNode, opAssign, (const FBranchMeshDataflowNode&), ERASE_ARGUMENT_PACK(FBranchMeshDataflowNode&)) },


{ ERASE_METHOD_PTR(FBranchCollectionDataflowNode, opAssign, (const FBranchCollectionDataflowNode&), ERASE_ARGUMENT_PACK(FBranchCollectionDataflowNode&)) },


{ ERASE_METHOD_PTR(FGetSchemaDataflowNode, opAssign, (const FGetSchemaDataflowNode&), ERASE_ARGUMENT_PACK(FGetSchemaDataflowNode&)) },


{ ERASE_METHOD_PTR(FRemoveOnBreakDataflowNode, opAssign, (const FRemoveOnBreakDataflowNode&), ERASE_ARGUMENT_PACK(FRemoveOnBreakDataflowNode&)) },


{ ERASE_METHOD_PTR(FSetAnchorStateDataflowNode, opAssign, (const FSetAnchorStateDataflowNode&), ERASE_ARGUMENT_PACK(FSetAnchorStateDataflowNode&)) },


{ ERASE_METHOD_PTR(FProximityDataflowNode, opAssign, (const FProximityDataflowNode&), ERASE_ARGUMENT_PACK(FProximityDataflowNode&)) },


{ ERASE_METHOD_PTR(FCollectionSetPivotDataflowNode, opAssign, (const FCollectionSetPivotDataflowNode&), ERASE_ARGUMENT_PACK(FCollectionSetPivotDataflowNode&)) },


{ ERASE_METHOD_PTR(FAddCustomCollectionAttributeDataflowNode, opAssign, (const FAddCustomCollectionAttributeDataflowNode&), ERASE_ARGUMENT_PACK(FAddCustomCollectionAttributeDataflowNode&)) },


{ ERASE_METHOD_PTR(FGetNumElementsInCollectionGroupDataflowNode, opAssign, (const FGetNumElementsInCollectionGroupDataflowNode&), ERASE_ARGUMENT_PACK(FGetNumElementsInCollectionGroupDataflowNode&)) },


{ ERASE_METHOD_PTR(FGetCollectionAttributeDataTypedDataflowNode, opAssign, (const FGetCollectionAttributeDataTypedDataflowNode&), ERASE_ARGUMENT_PACK(FGetCollectionAttributeDataTypedDataflowNode&)) },


{ ERASE_METHOD_PTR(FSetCollectionAttributeDataTypedDataflowNode, opAssign, (const FSetCollectionAttributeDataTypedDataflowNode&), ERASE_ARGUMENT_PACK(FSetCollectionAttributeDataTypedDataflowNode&)) },


{ ERASE_METHOD_PTR(FSetVertexColorInCollectionFromVertexSelectionDataflowNode, opAssign, (const FSetVertexColorInCollectionFromVertexSelectionDataflowNode&), ERASE_ARGUMENT_PACK(FSetVertexColorInCollectionFromVertexSelectionDataflowNode&)) },


{ ERASE_METHOD_PTR(FSelectionToVertexListDataflowNode, opAssign, (const FSelectionToVertexListDataflowNode&), ERASE_ARGUMENT_PACK(FSelectionToVertexListDataflowNode&)) },


{ ERASE_METHOD_PTR(FSetVertexColorInCollectionFromFloatArrayDataflowNode, opAssign, (const FSetVertexColorInCollectionFromFloatArrayDataflowNode&), ERASE_ARGUMENT_PACK(FSetVertexColorInCollectionFromFloatArrayDataflowNode&)) },


{ ERASE_METHOD_PTR(FMultiplyTransformDataflowNode, opAssign, (const FMultiplyTransformDataflowNode&), ERASE_ARGUMENT_PACK(FMultiplyTransformDataflowNode&)) },


{ ERASE_METHOD_PTR(FInvertTransformDataflowNode, opAssign, (const FInvertTransformDataflowNode&), ERASE_ARGUMENT_PACK(FInvertTransformDataflowNode&)) },


{ ERASE_METHOD_PTR(FBranchFloatDataflowNode, opAssign, (const FBranchFloatDataflowNode&), ERASE_ARGUMENT_PACK(FBranchFloatDataflowNode&)) },


{ ERASE_METHOD_PTR(FBranchIntDataflowNode, opAssign, (const FBranchIntDataflowNode&), ERASE_ARGUMENT_PACK(FBranchIntDataflowNode&)) },


{ ERASE_METHOD_PTR(FGetFloatOverrideFromAssetDataflowNode, opAssign, (const FGetFloatOverrideFromAssetDataflowNode&), ERASE_ARGUMENT_PACK(FGetFloatOverrideFromAssetDataflowNode&)) },


{ ERASE_METHOD_PTR(FGetIntOverrideFromAssetDataflowNode, opAssign, (const FGetIntOverrideFromAssetDataflowNode&), ERASE_ARGUMENT_PACK(FGetIntOverrideFromAssetDataflowNode&)) },


{ ERASE_METHOD_PTR(FGetBoolOverrideFromAssetDataflowNode, opAssign, (const FGetBoolOverrideFromAssetDataflowNode&), ERASE_ARGUMENT_PACK(FGetBoolOverrideFromAssetDataflowNode&)) },


{ ERASE_METHOD_PTR(FGetStringOverrideFromAssetDataflowNode, opAssign, (const FGetStringOverrideFromAssetDataflowNode&), ERASE_ARGUMENT_PACK(FGetStringOverrideFromAssetDataflowNode&)) },


{ ERASE_METHOD_PTR(FCollectionTransformSelectionAllDataflowNode, opAssign, (const FCollectionTransformSelectionAllDataflowNode&), ERASE_ARGUMENT_PACK(FCollectionTransformSelectionAllDataflowNode&)) },


{ ERASE_METHOD_PTR(FCollectionTransformSelectionSetOperationDataflowNode, opAssign, (const FCollectionTransformSelectionSetOperationDataflowNode&), ERASE_ARGUMENT_PACK(FCollectionTransformSelectionSetOperationDataflowNode&)) },


{ ERASE_METHOD_PTR(FCollectionTransformSelectionInfoDataflowNode, opAssign, (const FCollectionTransformSelectionInfoDataflowNode&), ERASE_ARGUMENT_PACK(FCollectionTransformSelectionInfoDataflowNode&)) },


{ ERASE_METHOD_PTR(FCollectionTransformSelectionNoneDataflowNode, opAssign, (const FCollectionTransformSelectionNoneDataflowNode&), ERASE_ARGUMENT_PACK(FCollectionTransformSelectionNoneDataflowNode&)) },


{ ERASE_METHOD_PTR(FCollectionTransformSelectionInvertDataflowNode, opAssign, (const FCollectionTransformSelectionInvertDataflowNode&), ERASE_ARGUMENT_PACK(FCollectionTransformSelectionInvertDataflowNode&)) },


{ ERASE_METHOD_PTR(FCollectionTransformSelectionRandomDataflowNode, opAssign, (const FCollectionTransformSelectionRandomDataflowNode&), ERASE_ARGUMENT_PACK(FCollectionTransformSelectionRandomDataflowNode&)) },


{ ERASE_METHOD_PTR(FCollectionTransformSelectionRootDataflowNode, opAssign, (const FCollectionTransformSelectionRootDataflowNode&), ERASE_ARGUMENT_PACK(FCollectionTransformSelectionRootDataflowNode&)) },


{ ERASE_METHOD_PTR(FCollectionTransformSelectionCustomDataflowNode, opAssign, (const FCollectionTransformSelectionCustomDataflowNode&), ERASE_ARGUMENT_PACK(FCollectionTransformSelectionCustomDataflowNode&)) },


{ ERASE_METHOD_PTR(FCollectionTransformSelectionFromIndexArrayDataflowNode, opAssign, (const FCollectionTransformSelectionFromIndexArrayDataflowNode&), ERASE_ARGUMENT_PACK(FCollectionTransformSelectionFromIndexArrayDataflowNode&)) },


{ ERASE_METHOD_PTR(FCollectionTransformSelectionParentDataflowNode, opAssign, (const FCollectionTransformSelectionParentDataflowNode&), ERASE_ARGUMENT_PACK(FCollectionTransformSelectionParentDataflowNode&)) },


{ ERASE_METHOD_PTR(FCollectionTransformSelectionByPercentageDataflowNode, opAssign, (const FCollectionTransformSelectionByPercentageDataflowNode&), ERASE_ARGUMENT_PACK(FCollectionTransformSelectionByPercentageDataflowNode&)) },


{ ERASE_METHOD_PTR(FCollectionTransformSelectionChildrenDataflowNode, opAssign, (const FCollectionTransformSelectionChildrenDataflowNode&), ERASE_ARGUMENT_PACK(FCollectionTransformSelectionChildrenDataflowNode&)) },


{ ERASE_METHOD_PTR(FCollectionTransformSelectionSiblingsDataflowNode, opAssign, (const FCollectionTransformSelectionSiblingsDataflowNode&), ERASE_ARGUMENT_PACK(FCollectionTransformSelectionSiblingsDataflowNode&)) },


{ ERASE_METHOD_PTR(FCollectionTransformSelectionLevelDataflowNode, opAssign, (const FCollectionTransformSelectionLevelDataflowNode&), ERASE_ARGUMENT_PACK(FCollectionTransformSelectionLevelDataflowNode&)) },


{ ERASE_METHOD_PTR(FCollectionTransformSelectionTargetLevelDataflowNode, opAssign, (const FCollectionTransformSelectionTargetLevelDataflowNode&), ERASE_ARGUMENT_PACK(FCollectionTransformSelectionTargetLevelDataflowNode&)) },


{ ERASE_METHOD_PTR(FCollectionTransformSelectionContactDataflowNode, opAssign, (const FCollectionTransformSelectionContactDataflowNode&), ERASE_ARGUMENT_PACK(FCollectionTransformSelectionContactDataflowNode&)) },


{ ERASE_METHOD_PTR(FCollectionTransformSelectionLeafDataflowNode, opAssign, (const FCollectionTransformSelectionLeafDataflowNode&), ERASE_ARGUMENT_PACK(FCollectionTransformSelectionLeafDataflowNode&)) },


{ ERASE_METHOD_PTR(FCollectionTransformSelectionClusterDataflowNode, opAssign, (const FCollectionTransformSelectionClusterDataflowNode&), ERASE_ARGUMENT_PACK(FCollectionTransformSelectionClusterDataflowNode&)) },


{ ERASE_METHOD_PTR(FSelectFloatArrayIndicesInRangeDataflowNode, opAssign, (const FSelectFloatArrayIndicesInRangeDataflowNode&), ERASE_ARGUMENT_PACK(FSelectFloatArrayIndicesInRangeDataflowNode&)) },


{ ERASE_METHOD_PTR(FCollectionTransformSelectionBySizeDataflowNode, opAssign, (const FCollectionTransformSelectionBySizeDataflowNode&), ERASE_ARGUMENT_PACK(FCollectionTransformSelectionBySizeDataflowNode&)) },


{ ERASE_METHOD_PTR(FCollectionTransformSelectionByVolumeDataflowNode, opAssign, (const FCollectionTransformSelectionByVolumeDataflowNode&), ERASE_ARGUMENT_PACK(FCollectionTransformSelectionByVolumeDataflowNode&)) },


{ ERASE_METHOD_PTR(FCollectionTransformSelectionInBoxDataflowNode, opAssign, (const FCollectionTransformSelectionInBoxDataflowNode&), ERASE_ARGUMENT_PACK(FCollectionTransformSelectionInBoxDataflowNode&)) },


{ ERASE_METHOD_PTR(FCollectionTransformSelectionInSphereDataflowNode, opAssign, (const FCollectionTransformSelectionInSphereDataflowNode&), ERASE_ARGUMENT_PACK(FCollectionTransformSelectionInSphereDataflowNode&)) },


{ ERASE_METHOD_PTR(FCollectionTransformSelectionByFloatAttrDataflowNode, opAssign, (const FCollectionTransformSelectionByFloatAttrDataflowNode&), ERASE_ARGUMENT_PACK(FCollectionTransformSelectionByFloatAttrDataflowNode&)) },


{ ERASE_METHOD_PTR(FCollectionTransformSelectionByIntAttrDataflowNode, opAssign, (const FCollectionTransformSelectionByIntAttrDataflowNode&), ERASE_ARGUMENT_PACK(FCollectionTransformSelectionByIntAttrDataflowNode&)) },


{ ERASE_METHOD_PTR(FCollectionVertexSelectionCustomDataflowNode, opAssign, (const FCollectionVertexSelectionCustomDataflowNode&), ERASE_ARGUMENT_PACK(FCollectionVertexSelectionCustomDataflowNode&)) },


{ ERASE_METHOD_PTR(FCollectionFaceSelectionCustomDataflowNode, opAssign, (const FCollectionFaceSelectionCustomDataflowNode&), ERASE_ARGUMENT_PACK(FCollectionFaceSelectionCustomDataflowNode&)) },


{ ERASE_METHOD_PTR(FCollectionSelectionConvertDataflowNode, opAssign, (const FCollectionSelectionConvertDataflowNode&), ERASE_ARGUMENT_PACK(FCollectionSelectionConvertDataflowNode&)) },


{ ERASE_METHOD_PTR(FCollectionFaceSelectionInvertDataflowNode, opAssign, (const FCollectionFaceSelectionInvertDataflowNode&), ERASE_ARGUMENT_PACK(FCollectionFaceSelectionInvertDataflowNode&)) },


{ ERASE_METHOD_PTR(FCollectionVertexSelectionByPercentageDataflowNode, opAssign, (const FCollectionVertexSelectionByPercentageDataflowNode&), ERASE_ARGUMENT_PACK(FCollectionVertexSelectionByPercentageDataflowNode&)) },


{ ERASE_METHOD_PTR(FCollectionVertexSelectionSetOperationDataflowNode, opAssign, (const FCollectionVertexSelectionSetOperationDataflowNode&), ERASE_ARGUMENT_PACK(FCollectionVertexSelectionSetOperationDataflowNode&)) },


{ ERASE_METHOD_PTR(FGeometryCollectionVertexScalarToVertexIndicesNode, opAssign, (const FGeometryCollectionVertexScalarToVertexIndicesNode&), ERASE_ARGUMENT_PACK(FGeometryCollectionVertexScalarToVertexIndicesNode&)) },


{ ERASE_METHOD_PTR(FTransformCollectionAttributeDataflowNode, opAssign, (const FTransformCollectionAttributeDataflowNode&), ERASE_ARGUMENT_PACK(FTransformCollectionAttributeDataflowNode&)) },


{ ERASE_METHOD_PTR(FLocalizableMessage, opAssign, (const FLocalizableMessage&), ERASE_ARGUMENT_PACK(FLocalizableMessage&)) },


{ ERASE_METHOD_PTR(FMirrorOptions, opAssign, (const FMirrorOptions&), ERASE_ARGUMENT_PACK(FMirrorOptions&)) },


{ ERASE_METHOD_PTR(FOrientOptions, opAssign, (const FOrientOptions&), ERASE_ARGUMENT_PACK(FOrientOptions&)) },


{ ERASE_METHOD_PTR(FInteractiveToolPresetDefinition, opAssign, (const FInteractiveToolPresetDefinition&), ERASE_ARGUMENT_PACK(FInteractiveToolPresetDefinition&)) },


{ ERASE_METHOD_PTR(FInteractiveToolPresetStore, opAssign, (const FInteractiveToolPresetStore&), ERASE_ARGUMENT_PACK(FInteractiveToolPresetStore&)) },


{ ERASE_METHOD_PTR(FInterchangeTestFunction, opAssign, (const FInterchangeTestFunction&), ERASE_ARGUMENT_PACK(FInterchangeTestFunction&)) },


{ ERASE_METHOD_PTR(FBoneReferencePair, opAssign, (const FBoneReferencePair&), ERASE_ARGUMENT_PACK(FBoneReferencePair&)) },


{ ERASE_METHOD_PTR(FEncodeRootBoneWeightedBone, opAssign, (const FEncodeRootBoneWeightedBone&), ERASE_ARGUMENT_PACK(FEncodeRootBoneWeightedBone&)) },


{ ERASE_METHOD_PTR(FEncodeRootBoneWeightedBoneAxis, opAssign, (const FEncodeRootBoneWeightedBoneAxis&), ERASE_ARGUMENT_PACK(FEncodeRootBoneWeightedBoneAxis&)) },


{ ERASE_METHOD_PTR(FFootDefinition, opAssign, (const FFootDefinition&), ERASE_ARGUMENT_PACK(FFootDefinition&)) },


{ ERASE_METHOD_PTR(FControlRigSpline, opAssign, (const FControlRigSpline&), ERASE_ARGUMENT_PACK(FControlRigSpline&)) },


{ ERASE_METHOD_PTR(FRigUnit_ControlRigSplineFromPoints, opAssign, (const FRigUnit_ControlRigSplineFromPoints&), ERASE_ARGUMENT_PACK(FRigUnit_ControlRigSplineFromPoints&)) },


{ ERASE_METHOD_PTR(FRigUnit_ControlRigSplineFromTransforms, opAssign, (const FRigUnit_ControlRigSplineFromTransforms&), ERASE_ARGUMENT_PACK(FRigUnit_ControlRigSplineFromTransforms&)) },


{ ERASE_METHOD_PTR(FRigUnit_SetSplinePoints, opAssign, (const FRigUnit_SetSplinePoints&), ERASE_ARGUMENT_PACK(FRigUnit_SetSplinePoints&)) },


{ ERASE_METHOD_PTR(FRigUnit_SetSplineTransforms, opAssign, (const FRigUnit_SetSplineTransforms&), ERASE_ARGUMENT_PACK(FRigUnit_SetSplineTransforms&)) },


{ ERASE_METHOD_PTR(FRigUnit_PositionFromControlRigSpline, opAssign, (const FRigUnit_PositionFromControlRigSpline&), ERASE_ARGUMENT_PACK(FRigUnit_PositionFromControlRigSpline&)) },


{ ERASE_METHOD_PTR(FRigUnit_TransformFromControlRigSpline, opAssign, (const FRigUnit_TransformFromControlRigSpline&), ERASE_ARGUMENT_PACK(FRigUnit_TransformFromControlRigSpline&)) },


{ ERASE_METHOD_PTR(FRigUnit_TransformFromControlRigSpline2, opAssign, (const FRigUnit_TransformFromControlRigSpline2&), ERASE_ARGUMENT_PACK(FRigUnit_TransformFromControlRigSpline2&)) },


{ ERASE_METHOD_PTR(FRigUnit_TangentFromControlRigSpline, opAssign, (const FRigUnit_TangentFromControlRigSpline&), ERASE_ARGUMENT_PACK(FRigUnit_TangentFromControlRigSpline&)) },


{ ERASE_METHOD_PTR(FRigUnit_DrawControlRigSpline, opAssign, (const FRigUnit_DrawControlRigSpline&), ERASE_ARGUMENT_PACK(FRigUnit_DrawControlRigSpline&)) },


{ ERASE_METHOD_PTR(FRigUnit_GetLengthControlRigSpline, opAssign, (const FRigUnit_GetLengthControlRigSpline&), ERASE_ARGUMENT_PACK(FRigUnit_GetLengthControlRigSpline&)) },


{ ERASE_METHOD_PTR(FRigUnit_GetLengthAtParamControlRigSpline, opAssign, (const FRigUnit_GetLengthAtParamControlRigSpline&), ERASE_ARGUMENT_PACK(FRigUnit_GetLengthAtParamControlRigSpline&)) },


{ ERASE_METHOD_PTR(FRigUnit_FitChainToSplineCurve, opAssign, (const FRigUnit_FitChainToSplineCurve&), ERASE_ARGUMENT_PACK(FRigUnit_FitChainToSplineCurve&)) },


{ ERASE_METHOD_PTR(FRigUnit_FitChainToSplineCurveItemArray, opAssign, (const FRigUnit_FitChainToSplineCurveItemArray&), ERASE_ARGUMENT_PACK(FRigUnit_FitChainToSplineCurveItemArray&)) },


{ ERASE_METHOD_PTR(FRigUnit_SplineConstraint, opAssign, (const FRigUnit_SplineConstraint&), ERASE_ARGUMENT_PACK(FRigUnit_SplineConstraint&)) },


{ ERASE_METHOD_PTR(FRigUnit_FitSplineCurveToChain, opAssign, (const FRigUnit_FitSplineCurveToChain&), ERASE_ARGUMENT_PACK(FRigUnit_FitSplineCurveToChain&)) },


{ ERASE_METHOD_PTR(FRigUnit_FitSplineCurveToChainItemArray, opAssign, (const FRigUnit_FitSplineCurveToChainItemArray&), ERASE_ARGUMENT_PACK(FRigUnit_FitSplineCurveToChainItemArray&)) },


{ ERASE_METHOD_PTR(FRigUnit_ClosestParameterFromControlRigSpline, opAssign, (const FRigUnit_ClosestParameterFromControlRigSpline&), ERASE_ARGUMENT_PACK(FRigUnit_ClosestParameterFromControlRigSpline&)) },


{ ERASE_METHOD_PTR(FRigUnit_ParameterAtPercentage, opAssign, (const FRigUnit_ParameterAtPercentage&), ERASE_ARGUMENT_PACK(FRigUnit_ParameterAtPercentage&)) },


{ ERASE_METHOD_PTR(FHeaderViewSyntaxColors, opAssign, (const FHeaderViewSyntaxColors&), ERASE_ARGUMENT_PACK(FHeaderViewSyntaxColors&)) },


{ ERASE_METHOD_PTR(FCryptoEncryptionKey, opAssign, (const FCryptoEncryptionKey&), ERASE_ARGUMENT_PACK(FCryptoEncryptionKey&)) },


{ ERASE_METHOD_PTR(FMultiScaleToolOptions, opAssign, (const FMultiScaleToolOptions&), ERASE_ARGUMENT_PACK(FMultiScaleToolOptions&)) },


{ ERASE_METHOD_PTR(FTransformToolOptions, opAssign, (const FTransformToolOptions&), ERASE_ARGUMENT_PACK(FTransformToolOptions&)) },


{ ERASE_METHOD_PTR(FGenerateStaticMeshLODProcessSettings, opAssign, (const FGenerateStaticMeshLODProcessSettings&), ERASE_ARGUMENT_PACK(FGenerateStaticMeshLODProcessSettings&)) },


{ ERASE_METHOD_PTR(FGenerateStaticMeshLODProcess_PreprocessSettings, opAssign, (const FGenerateStaticMeshLODProcess_PreprocessSettings&), ERASE_ARGUMENT_PACK(FGenerateStaticMeshLODProcess_PreprocessSettings&)) },


{ ERASE_METHOD_PTR(FGenerateStaticMeshLODProcess_SimplifySettings, opAssign, (const FGenerateStaticMeshLODProcess_SimplifySettings&), ERASE_ARGUMENT_PACK(FGenerateStaticMeshLODProcess_SimplifySettings&)) },


{ ERASE_METHOD_PTR(FGenerateStaticMeshLODProcess_NormalsSettings, opAssign, (const FGenerateStaticMeshLODProcess_NormalsSettings&), ERASE_ARGUMENT_PACK(FGenerateStaticMeshLODProcess_NormalsSettings&)) },


{ ERASE_METHOD_PTR(FGenerateStaticMeshLODProcess_UVSettings_PatchBuilder, opAssign, (const FGenerateStaticMeshLODProcess_UVSettings_PatchBuilder&), ERASE_ARGUMENT_PACK(FGenerateStaticMeshLODProcess_UVSettings_PatchBuilder&)) },


{ ERASE_METHOD_PTR(FGenerateStaticMeshLODProcess_UVSettings, opAssign, (const FGenerateStaticMeshLODProcess_UVSettings&), ERASE_ARGUMENT_PACK(FGenerateStaticMeshLODProcess_UVSettings&)) },


{ ERASE_METHOD_PTR(FGenerateStaticMeshLODProcess_TextureSettings, opAssign, (const FGenerateStaticMeshLODProcess_TextureSettings&), ERASE_ARGUMENT_PACK(FGenerateStaticMeshLODProcess_TextureSettings&)) },


{ ERASE_METHOD_PTR(FGenerateStaticMeshLODProcess_CollisionSettings, opAssign, (const FGenerateStaticMeshLODProcess_CollisionSettings&), ERASE_ARGUMENT_PACK(FGenerateStaticMeshLODProcess_CollisionSettings&)) },


{ ERASE_METHOD_PTR(FGenerateStaticMeshLOD_TextureConfig, opAssign, (const FGenerateStaticMeshLOD_TextureConfig&), ERASE_ARGUMENT_PACK(FGenerateStaticMeshLOD_TextureConfig&)) },


{ ERASE_METHOD_PTR(FGenerateStaticMeshLOD_MaterialConfig, opAssign, (const FGenerateStaticMeshLOD_MaterialConfig&), ERASE_ARGUMENT_PACK(FGenerateStaticMeshLOD_MaterialConfig&)) },


{ ERASE_METHOD_PTR(FLODManagerLODInfo, opAssign, (const FLODManagerLODInfo&), ERASE_ARGUMENT_PACK(FLODManagerLODInfo&)) },


{ ERASE_METHOD_PTR(FModelingModeCustomSectionColor, opAssign, (const FModelingModeCustomSectionColor&), ERASE_ARGUMENT_PACK(FModelingModeCustomSectionColor&)) },


{ ERASE_METHOD_PTR(FModelingModeCustomToolColor, opAssign, (const FModelingModeCustomToolColor&), ERASE_ARGUMENT_PACK(FModelingModeCustomToolColor&)) },


{ ERASE_METHOD_PTR(FModelingModeAssetCollectionSet, opAssign, (const FModelingModeAssetCollectionSet&), ERASE_ARGUMENT_PACK(FModelingModeAssetCollectionSet&)) },


{ ERASE_METHOD_PTR(FPluginReferenceMetadata, opAssign, (const FPluginReferenceMetadata&), ERASE_ARGUMENT_PACK(FPluginReferenceMetadata&)) },


{ ERASE_METHOD_PTR(FPluginDisallowedMetadata, opAssign, (const FPluginDisallowedMetadata&), ERASE_ARGUMENT_PACK(FPluginDisallowedMetadata&)) },


{ ERASE_METHOD_PTR(FSequencerScriptingRange, opAssign, (const FSequencerScriptingRange&), ERASE_ARGUMENT_PACK(FSequencerScriptingRange&)) },
{ ERASE_METHOD_PTR(FSequencerScriptingRange, GetbHasStart, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FSequencerScriptingRange, SetbHasStart, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FSequencerScriptingRange, GetbHasEnd, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FSequencerScriptingRange, SetbHasEnd, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FSequencerChannelProxy, opAssign, (const FSequencerChannelProxy&), ERASE_ARGUMENT_PACK(FSequencerChannelProxy&)) },


{ ERASE_METHOD_PTR(FSequencerBoundObjects, opAssign, (const FSequencerBoundObjects&), ERASE_ARGUMENT_PACK(FSequencerBoundObjects&)) },


{ ERASE_METHOD_PTR(FSequencerQuickBindingResult, opAssign, (const FSequencerQuickBindingResult&), ERASE_ARGUMENT_PACK(FSequencerQuickBindingResult&)) },


{ ERASE_METHOD_PTR(FSequencerExportFBXParams, opAssign, (const FSequencerExportFBXParams&), ERASE_ARGUMENT_PACK(FSequencerExportFBXParams&)) },


{ ERASE_METHOD_PTR(FMovieSceneScriptingParams, opAssign, (const FMovieSceneScriptingParams&), ERASE_ARGUMENT_PACK(FMovieSceneScriptingParams&)) },


{ ERASE_METHOD_PTR(FMovieSceneUniversalLocatorInfo, opAssign, (const FMovieSceneUniversalLocatorInfo&), ERASE_ARGUMENT_PACK(FMovieSceneUniversalLocatorInfo&)) },


{ ERASE_METHOD_PTR(FMovieSceneUniversalLocatorList, opAssign, (const FMovieSceneUniversalLocatorList&), ERASE_ARGUMENT_PACK(FMovieSceneUniversalLocatorList&)) },


{ ERASE_METHOD_PTR(FLevelSequencePropertyTrackSettings, opAssign, (const FLevelSequencePropertyTrackSettings&), ERASE_ARGUMENT_PACK(FLevelSequencePropertyTrackSettings&)) },


{ ERASE_METHOD_PTR(FLevelSequenceTrackSettings, opAssign, (const FLevelSequenceTrackSettings&), ERASE_ARGUMENT_PACK(FLevelSequenceTrackSettings&)) },


{ ERASE_METHOD_PTR(FRigSpacePickerBakeSettings, opAssign, (const FRigSpacePickerBakeSettings&), ERASE_ARGUMENT_PACK(FRigSpacePickerBakeSettings&)) },


{ ERASE_METHOD_PTR(FControlRigDrawContainerImportFbxSettings, opAssign, (const FControlRigDrawContainerImportFbxSettings&), ERASE_ARGUMENT_PACK(FControlRigDrawContainerImportFbxSettings&)) },


{ ERASE_METHOD_PTR(FControlRigSequencerBindingProxy, opAssign, (const FControlRigSequencerBindingProxy&), ERASE_ARGUMENT_PACK(FControlRigSequencerBindingProxy&)) },


{ ERASE_METHOD_PTR(FAnimDetailProxyFloat, opAssign, (const FAnimDetailProxyFloat&), ERASE_ARGUMENT_PACK(FAnimDetailProxyFloat&)) },


{ ERASE_METHOD_PTR(FAnimDetailProxyBool, opAssign, (const FAnimDetailProxyBool&), ERASE_ARGUMENT_PACK(FAnimDetailProxyBool&)) },


{ ERASE_METHOD_PTR(FControlRigEnumControlProxyValue, opAssign, (const FControlRigEnumControlProxyValue&), ERASE_ARGUMENT_PACK(FControlRigEnumControlProxyValue&)) },


{ ERASE_METHOD_PTR(FAnimDetailProxyInteger, opAssign, (const FAnimDetailProxyInteger&), ERASE_ARGUMENT_PACK(FAnimDetailProxyInteger&)) },


{ ERASE_METHOD_PTR(FAnimDetailProxyVector3, opAssign, (const FAnimDetailProxyVector3&), ERASE_ARGUMENT_PACK(FAnimDetailProxyVector3&)) },


{ ERASE_METHOD_PTR(FAnimDetailProxyLocation, opAssign, (const FAnimDetailProxyLocation&), ERASE_ARGUMENT_PACK(FAnimDetailProxyLocation&)) },


{ ERASE_METHOD_PTR(FAnimDetailProxyRotation, opAssign, (const FAnimDetailProxyRotation&), ERASE_ARGUMENT_PACK(FAnimDetailProxyRotation&)) },


{ ERASE_METHOD_PTR(FAnimDetailProxyScale, opAssign, (const FAnimDetailProxyScale&), ERASE_ARGUMENT_PACK(FAnimDetailProxyScale&)) },


{ ERASE_METHOD_PTR(FAnimDetailProxyVector2D, opAssign, (const FAnimDetailProxyVector2D&), ERASE_ARGUMENT_PACK(FAnimDetailProxyVector2D&)) },


{ ERASE_METHOD_PTR(FControlRigRigHierarchyDragAndDropContext, opAssign, (const FControlRigRigHierarchyDragAndDropContext&), ERASE_ARGUMENT_PACK(FControlRigRigHierarchyDragAndDropContext&)) },


{ ERASE_METHOD_PTR(FControlRigGraphNodeContextMenuContext, opAssign, (const FControlRigGraphNodeContextMenuContext&), ERASE_ARGUMENT_PACK(FControlRigGraphNodeContextMenuContext&)) },


{ ERASE_METHOD_PTR(FControlRigRigHierarchyToGraphDragAndDropContext, opAssign, (const FControlRigRigHierarchyToGraphDragAndDropContext&), ERASE_ARGUMENT_PACK(FControlRigRigHierarchyToGraphDragAndDropContext&)) },


{ ERASE_METHOD_PTR(FRigHierarchyImportSettings, opAssign, (const FRigHierarchyImportSettings&), ERASE_ARGUMENT_PACK(FRigHierarchyImportSettings&)) },


{ ERASE_METHOD_PTR(FControlRigForWorldTransforms, opAssign, (const FControlRigForWorldTransforms&), ERASE_ARGUMENT_PACK(FControlRigForWorldTransforms&)) },


{ ERASE_METHOD_PTR(FControlRigSnapperSelection, opAssign, (const FControlRigSnapperSelection&), ERASE_ARGUMENT_PACK(FControlRigSnapperSelection&)) },


{ ERASE_METHOD_PTR(FUDIMSpecifier, opAssign, (const FUDIMSpecifier&), ERASE_ARGUMENT_PACK(FUDIMSpecifier&)) },


{ ERASE_METHOD_PTR(FMediaTextureResourceSettings, opAssign, (const FMediaTextureResourceSettings&), ERASE_ARGUMENT_PACK(FMediaTextureResourceSettings&)) },


{ ERASE_METHOD_PTR(FMediaPlayerRecordingSettings, opAssign, (const FMediaPlayerRecordingSettings&), ERASE_ARGUMENT_PACK(FMediaPlayerRecordingSettings&)) },


{ ERASE_METHOD_PTR(FActorLayer, opAssign, (const FActorLayer&), ERASE_ARGUMENT_PACK(FActorLayer&)) },


{ ERASE_METHOD_PTR(FAppleImageUtilsImageConversionResult, opAssign, (const FAppleImageUtilsImageConversionResult&), ERASE_ARGUMENT_PACK(FAppleImageUtilsImageConversionResult&)) },


{ ERASE_METHOD_PTR(FAudioInputDeviceInfo, opAssign, (const FAudioInputDeviceInfo&), ERASE_ARGUMENT_PACK(FAudioInputDeviceInfo&)) },
{ ERASE_METHOD_PTR(FAudioInputDeviceInfo, GetbSupportsHardwareAEC, (), ERASE_ARGUMENT_PACK(bool)) },


{ ERASE_METHOD_PTR(FAudioCaptureDeviceInfo, opAssign, (const FAudioCaptureDeviceInfo&), ERASE_ARGUMENT_PACK(FAudioCaptureDeviceInfo&)) },


{ ERASE_METHOD_PTR(FNiagaraGeometryCacheReference, opAssign, (const FNiagaraGeometryCacheReference&), ERASE_ARGUMENT_PACK(FNiagaraGeometryCacheReference&)) },


{ ERASE_METHOD_PTR(FMovieSceneGeometryCacheParams, opAssign, (const FMovieSceneGeometryCacheParams&), ERASE_ARGUMENT_PACK(FMovieSceneGeometryCacheParams&)) },
{ ERASE_METHOD_PTR(FMovieSceneGeometryCacheParams, GetbReverse, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FMovieSceneGeometryCacheParams, SetbReverse, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FMovieSceneGeometryCacheSectionTemplateParameters, opAssign, (const FMovieSceneGeometryCacheSectionTemplateParameters&), ERASE_ARGUMENT_PACK(FMovieSceneGeometryCacheSectionTemplateParameters&)) },
{ ERASE_METHOD_PTR(FMovieSceneGeometryCacheSectionTemplateParameters, GetbReverse, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FMovieSceneGeometryCacheSectionTemplateParameters, SetbReverse, (bool), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FAbcCompressionSettings, opAssign, (const FAbcCompressionSettings&), ERASE_ARGUMENT_PACK(FAbcCompressionSettings&)) },


{ ERASE_METHOD_PTR(FAbcSamplingSettings, opAssign, (const FAbcSamplingSettings&), ERASE_ARGUMENT_PACK(FAbcSamplingSettings&)) },


{ ERASE_METHOD_PTR(FAbcNormalGenerationSettings, opAssign, (const FAbcNormalGenerationSettings&), ERASE_ARGUMENT_PACK(FAbcNormalGenerationSettings&)) },


{ ERASE_METHOD_PTR(FAbcMaterialSettings, opAssign, (const FAbcMaterialSettings&), ERASE_ARGUMENT_PACK(FAbcMaterialSettings&)) },


{ ERASE_METHOD_PTR(FAbcStaticMeshSettings, opAssign, (const FAbcStaticMeshSettings&), ERASE_ARGUMENT_PACK(FAbcStaticMeshSettings&)) },


{ ERASE_METHOD_PTR(FAbcConversionSettings, opAssign, (const FAbcConversionSettings&), ERASE_ARGUMENT_PACK(FAbcConversionSettings&)) },


{ ERASE_METHOD_PTR(FAbcGeometryCacheSettings, opAssign, (const FAbcGeometryCacheSettings&), ERASE_ARGUMENT_PACK(FAbcGeometryCacheSettings&)) },


{ ERASE_METHOD_PTR(FObjectMixerWidgetUserConfig, opAssign, (const FObjectMixerWidgetUserConfig&), ERASE_ARGUMENT_PACK(FObjectMixerWidgetUserConfig&)) },


{ ERASE_METHOD_PTR(FScriptEditorPromptOptions, opAssign, (const FScriptEditorPromptOptions&), ERASE_ARGUMENT_PACK(FScriptEditorPromptOptions&)) },


{ ERASE_METHOD_PTR(FMemoryReader, TotalSize, (), ERASE_ARGUMENT_PACK(int)) },
{ ERASE_METHOD_PTR(FMemoryReader, Tell, (), ERASE_ARGUMENT_PACK(int)) },
{ ERASE_METHOD_PTR(FMemoryReader, Seek, (int), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FMemoryReader, Skip, (int), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FMemoryReader, ReadInt8, (), ERASE_ARGUMENT_PACK(int8)) },
{ ERASE_METHOD_PTR(FMemoryReader, ReadUInt8, (), ERASE_ARGUMENT_PACK(uint328)) },
{ ERASE_METHOD_PTR(FMemoryReader, ReadInt16, (), ERASE_ARGUMENT_PACK(int16)) },
{ ERASE_METHOD_PTR(FMemoryReader, ReadUInt16, (), ERASE_ARGUMENT_PACK(uint3216)) },
{ ERASE_METHOD_PTR(FMemoryReader, ReadInt32, (), ERASE_ARGUMENT_PACK(int)) },
{ ERASE_METHOD_PTR(FMemoryReader, ReadUInt32, (), ERASE_ARGUMENT_PACK(uint32)) },
{ ERASE_METHOD_PTR(FMemoryReader, ReadInt64, (), ERASE_ARGUMENT_PACK(int64)) },
{ ERASE_METHOD_PTR(FMemoryReader, ReadUInt64, (), ERASE_ARGUMENT_PACK(uint3264)) },
{ ERASE_METHOD_PTR(FMemoryReader, ReadFloat, (), ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(FMemoryReader, ReadDouble, (), ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(FMemoryReader, ReadBytes, (int), ERASE_ARGUMENT_PACK(TArray<uint328>)) },
{ ERASE_METHOD_PTR(FMemoryReader, ReadAnsiString, (int), ERASE_ARGUMENT_PACK(FString)) },


{ ERASE_METHOD_PTR(FConsoleVariable, GetBool, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FConsoleVariable, GetFloat, (), ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(FConsoleVariable, GetInt, (), ERASE_ARGUMENT_PACK(int)) },
{ ERASE_METHOD_PTR(FConsoleVariable, SetBool, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FConsoleVariable, SetFloat, (float32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FConsoleVariable, SetInt, (int), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FJsonValue, GetType, (), ERASE_ARGUMENT_PACK(EJsonType)) },
{ ERASE_METHOD_PTR(FJsonValue, TryGetNumber, (float&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FJsonValue, TryGetNumber, (float32&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FJsonValue, TryGetNumber, (int&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FJsonValue, TryGetNumber, (int64&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FJsonValue, TryGetString, (FString&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FJsonValue, TryGetBool, (bool&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FJsonValue, IsNull, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FJsonValue, TryGetArray, (FJsonArray&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FJsonValue, TryGetObject, (FJsonObject&), ERASE_ARGUMENT_PACK(bool)) },


{ ERASE_METHOD_PTR(FJsonArray, Empty, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FJsonArray, AddString, (const FString&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FJsonArray, AddNumber, (int), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FJsonArray, AddNumber, (float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FJsonArray, Num, (), ERASE_ARGUMENT_PACK(int)) },
{ ERASE_METHOD_PTR(FJsonArray, GetValueAt, (int), ERASE_ARGUMENT_PACK(FJsonValue)) },


{ ERASE_METHOD_PTR(FJsonObject, IsValid, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FJsonObject, HasField, (const FString&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FJsonObject, RemoveField, (const FString&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FJsonObject, RemoveAllFields, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FJsonObject, GetStringField, (const FString&), ERASE_ARGUMENT_PACK(FString)) },
{ ERASE_METHOD_PTR(FJsonObject, GetNumberField, (const FString&), ERASE_ARGUMENT_PACK(float)) },
{ ERASE_METHOD_PTR(FJsonObject, GetBoolField, (const FString&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FJsonObject, GetObjectField, (const FString&), ERASE_ARGUMENT_PACK(FJsonObject)) },
{ ERASE_METHOD_PTR(FJsonObject, GetArrayField, (const FString&), ERASE_ARGUMENT_PACK(FJsonArray)) },
{ ERASE_METHOD_PTR(FJsonObject, SetStringField, (const FString&, const FString&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FJsonObject, SetNumberField, (const FString&, float), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FJsonObject, SetBoolField, (const FString&, bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FJsonObject, SetObjectField, (const FString&, const FJsonObject&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FJsonObject, SetArrayField, (const FString&, const FJsonArray&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FJsonObject, TryGetObjectField, (const FString&, FJsonObject&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FJsonObject, CreateObjectField, (const FString&), ERASE_ARGUMENT_PACK(FJsonObject)) },
{ ERASE_METHOD_PTR(FJsonObject, TryGetArrayField, (const FString&, FJsonArray&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FJsonObject, LoadFromString, (const FString&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(FJsonObject, SaveToString, (bool = true), ERASE_ARGUMENT_PACK(FString)) },
{ ERASE_METHOD_PTR(FJsonObject, Iterator, (), ERASE_ARGUMENT_PACK(FJsonObjectFieldIterator)) },


{ ERASE_METHOD_PTR(FJsonObjectFieldIterator, GetFieldName, (), ERASE_ARGUMENT_PACK(FString)) },
{ ERASE_METHOD_PTR(FJsonObjectFieldIterator, GetType, (), ERASE_ARGUMENT_PACK(EJsonType)) },
{ ERASE_METHOD_PTR(FJsonObjectFieldIterator, GetValue, (), ERASE_ARGUMENT_PACK(FJsonValue)) },
{ ERASE_METHOD_PTR(FJsonObjectFieldIterator, Proceed, (), ERASE_ARGUMENT_PACK(FJsonObjectFieldIterator&)) },


{ ERASE_METHOD_PTR(TSubclassOf, opAssign, (const TSubclassOf<UObject>&), ERASE_ARGUMENT_PACK(TSubclassOf<UObject>&)) },
{ ERASE_METHOD_PTR(TSubclassOf, opImplConv, (), ERASE_ARGUMENT_PACK(UClass*)) },
{ ERASE_METHOD_PTR(TSubclassOf, opImplConv, (), ERASE_ARGUMENT_PACK(UObject*)) },
{ ERASE_METHOD_PTR(TSubclassOf, Set, (UClass), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(TSubclassOf, opAssign, (UClass), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(TSubclassOf, opEquals, (const TSubclassOf<T>&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(TSubclassOf, opEquals, (UClass), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(TSubclassOf, Get, (), ERASE_ARGUMENT_PACK(UClass*)) },
{ ERASE_METHOD_PTR(TSubclassOf, IsValid, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(TSubclassOf, GetDefaultObject, (), ERASE_ARGUMENT_PACK(T)) },


{ ERASE_METHOD_PTR(FUnitTest, Fail, (const FString&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FUnitTest, AssertTrue, (bool, const FString& = ""), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FUnitTest, AssertFalse, (bool, const FString& = ""), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FUnitTest, AssertNull, (const UObject, const FString& = ""), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FUnitTest, AssertNotNull, (const UObject, const FString& = ""), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FUnitTest, AssertEquals, (const int, const int, const FString& = ""), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FUnitTest, AssertEquals, (const float32, const float32, const FString& = ""), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FUnitTest, AssertEquals, (const float, const float, const FString& = ""), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FUnitTest, AssertEquals, (const bool, const bool, const FString& = ""), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FUnitTest, AssertEquals, (const FName, const FName, const FString& = ""), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FUnitTest, AssertEquals, (const FString, const FString, const FString& = ""), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FUnitTest, AssertEquals, (const FVector, const FVector, const FString& = ""), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FUnitTest, AssertEquals, (const FRotator, const FRotator, const FString& = ""), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FUnitTest, AssertEquals, (const FUniqueNetIdRepl, const FUniqueNetIdRepl, const FString& = ""), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FUnitTest, AssertNotEquals, (const int, const int, const FString& = ""), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FUnitTest, AssertNotEquals, (const float32, const float32, const FString& = ""), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FUnitTest, AssertNotEquals, (const float, const float, const FString& = ""), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FUnitTest, AssertNotEquals, (const bool, const bool, const FString& = ""), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FUnitTest, AssertNotEquals, (const FName, const FName, const FString& = ""), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FUnitTest, AssertNotEquals, (const FString, const FString, const FString& = ""), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FUnitTest, AssertNotEquals, (const FVector, const FVector, const FString& = ""), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FUnitTest, AssertNotEquals, (const FRotator, const FRotator, const FString& = ""), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FUnitTest, AssertNotEquals, (const FUniqueNetIdRepl, const FUniqueNetIdRepl, const FString& = ""), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FUnitTest, AssertAlmostEquals, (const float32, const float32, const float32 = 0.0001f, const FString& = ""), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FUnitTest, AssertAlmostEquals, (const float, const float, const float = 0.0001f, const FString& = ""), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FUnitTest, AssertLessThan, (const int, const int, const FString& = ""), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FUnitTest, AssertLessThan, (const float32, const float32, const FString& = ""), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FUnitTest, AssertLessThan, (const float, const float, const FString& = ""), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FUnitTest, AssertGreaterThan, (const int, const int, const FString& = ""), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FUnitTest, AssertGreaterThan, (const float32, const float32, const FString& = ""), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FUnitTest, AssertGreaterThan, (const float, const float, const FString& = ""), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FUnitTest, AssertLessThanOrEqual, (const int, const int, const FString& = ""), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FUnitTest, AssertLessThanOrEqual, (const float32, const float32, const FString& = ""), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FUnitTest, AssertLessThanOrEqual, (const float, const float, const FString& = ""), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FUnitTest, AssertGreaterThanOrEqual, (const int, const int, const FString& = ""), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FUnitTest, AssertGreaterThanOrEqual, (const float32, const float32, const FString& = ""), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FUnitTest, AssertGreaterThanOrEqual, (const float, const float, const FString& = ""), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FUnitTest, AssertSame, (const UObject, const UObject, const FString& = ""), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FUnitTest, AssertNotSame, (const UObject, const UObject, const FString& = ""), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FUnitTest, AdvanceTime, (float32), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FUnitTest, AddExpectedError, (FString, int = 1), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FUnitTest, CallNativeBeginPlayFor, (AActor, bool = false), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FUnitTest, CallNativeBeginPlayFor, (UActorComponent), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FUnitTest, SetIsServer, (bool), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FUnitTest, GetParam, (), ERASE_ARGUMENT_PACK(FString)) },
{ ERASE_METHOD_PTR(FUnitTest, ForceGarbageCollectionNow, (), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(FIntegrationTest, Fail, (const FString&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FIntegrationTest, AssertTrue, (bool, const FString& = ""), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FIntegrationTest, AssertFalse, (bool, const FString& = ""), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FIntegrationTest, AssertNull, (const UObject, const FString& = ""), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FIntegrationTest, AssertNotNull, (const UObject, const FString& = ""), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FIntegrationTest, AssertEquals, (const int, const int, const FString& = ""), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FIntegrationTest, AssertEquals, (const float32, const float32, const FString& = ""), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FIntegrationTest, AssertEquals, (const float, const float, const FString& = ""), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FIntegrationTest, AssertEquals, (const bool, const bool, const FString& = ""), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FIntegrationTest, AssertEquals, (const FName, const FName, const FString& = ""), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FIntegrationTest, AssertEquals, (const FString, const FString, const FString& = ""), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FIntegrationTest, AssertEquals, (const FVector, const FVector, const FString& = ""), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FIntegrationTest, AssertEquals, (const FRotator, const FRotator, const FString& = ""), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FIntegrationTest, AssertEquals, (const FUniqueNetIdRepl, const FUniqueNetIdRepl, const FString& = ""), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FIntegrationTest, AssertNotEquals, (const int, const int, const FString& = ""), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FIntegrationTest, AssertNotEquals, (const float32, const float32, const FString& = ""), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FIntegrationTest, AssertNotEquals, (const float, const float, const FString& = ""), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FIntegrationTest, AssertNotEquals, (const bool, const bool, const FString& = ""), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FIntegrationTest, AssertNotEquals, (const FName, const FName, const FString& = ""), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FIntegrationTest, AssertNotEquals, (const FString, const FString, const FString& = ""), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FIntegrationTest, AssertNotEquals, (const FVector, const FVector, const FString& = ""), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FIntegrationTest, AssertNotEquals, (const FRotator, const FRotator, const FString& = ""), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FIntegrationTest, AssertNotEquals, (const FUniqueNetIdRepl, const FUniqueNetIdRepl, const FString& = ""), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FIntegrationTest, AssertAlmostEquals, (const float32, const float32, const float32 = 0.0001f, const FString& = ""), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FIntegrationTest, AssertAlmostEquals, (const float, const float, const float = 0.0001f, const FString& = ""), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FIntegrationTest, AssertLessThan, (const int, const int, const FString& = ""), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FIntegrationTest, AssertLessThan, (const float32, const float32, const FString& = ""), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FIntegrationTest, AssertLessThan, (const float, const float, const FString& = ""), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FIntegrationTest, AssertGreaterThan, (const int, const int, const FString& = ""), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FIntegrationTest, AssertGreaterThan, (const float32, const float32, const FString& = ""), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FIntegrationTest, AssertGreaterThan, (const float, const float, const FString& = ""), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FIntegrationTest, AssertLessThanOrEqual, (const int, const int, const FString& = ""), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FIntegrationTest, AssertLessThanOrEqual, (const float32, const float32, const FString& = ""), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FIntegrationTest, AssertLessThanOrEqual, (const float, const float, const FString& = ""), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FIntegrationTest, AssertGreaterThanOrEqual, (const int, const int, const FString& = ""), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FIntegrationTest, AssertGreaterThanOrEqual, (const float32, const float32, const FString& = ""), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FIntegrationTest, AssertGreaterThanOrEqual, (const float, const float, const FString& = ""), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FIntegrationTest, AssertSame, (const UObject, const UObject, const FString& = ""), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FIntegrationTest, AssertNotSame, (const UObject, const UObject, const FString& = ""), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FIntegrationTest, AddLatentAutomationCommand, (ULatentAutomationCommand, float32 = 5.000000), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(FIntegrationTest, GetParam, (), ERASE_ARGUMENT_PACK(FString)) },
{ ERASE_METHOD_PTR(FIntegrationTest, AddExpectedError, (FString, int = 1), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(TSubclassOf, opAssign, (const TSubclassOf<URichTextBlockDecorator>&), ERASE_ARGUMENT_PACK(TSubclassOf<URichTextBlockDecorator>&)) },


{ ERASE_METHOD_PTR(TObjectPtr, opAssign, (const TObjectPtr<UInputMappingContext>&), ERASE_ARGUMENT_PACK(TObjectPtr<UInputMappingContext>&)) },
{ ERASE_METHOD_PTR(TObjectPtr, opImplConv, (), ERASE_ARGUMENT_PACK(T)) },
{ ERASE_METHOD_PTR(TObjectPtr, opEquals, (const TObjectPtr<T>&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(TObjectPtr, opEquals, (const T), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(TObjectPtr, opAssign, (T), ERASE_ARGUMENT_PACK(TObjectPtr<T>&)) },
{ ERASE_METHOD_PTR(TObjectPtr, Get, (), ERASE_ARGUMENT_PACK(T)) },


{ ERASE_METHOD_PTR(TSoftObjectPtr, ToSoftObjectPath, (), ERASE_ARGUMENT_PACK(FSoftObjectPath)) },
{ ERASE_METHOD_PTR(TSoftObjectPtr, ToString, (), ERASE_ARGUMENT_PACK(FString)) },
{ ERASE_METHOD_PTR(TSoftObjectPtr, GetLongPackageName, (), ERASE_ARGUMENT_PACK(FString)) },
{ ERASE_METHOD_PTR(TSoftObjectPtr, GetAssetName, (), ERASE_ARGUMENT_PACK(FString)) },
{ ERASE_METHOD_PTR(TSoftObjectPtr, IsValid, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(TSoftObjectPtr, IsPending, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(TSoftObjectPtr, IsNull, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(TSoftObjectPtr, Reset, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(TSoftObjectPtr, opAssign, (const FSoftObjectPath&), ERASE_ARGUMENT_PACK(TSoftObjectPtr<T>&)) },
{ ERASE_METHOD_PTR(TSoftObjectPtr, opAssign, (T), ERASE_ARGUMENT_PACK(TSoftObjectPtr<T>&)) },
{ ERASE_METHOD_PTR(TSoftObjectPtr, opAssign, (const TSoftObjectPtr<URigVMFunctionReferenceNode>&), ERASE_ARGUMENT_PACK(TSoftObjectPtr<URigVMFunctionReferenceNode>&)) },
{ ERASE_METHOD_PTR(TSoftObjectPtr, opEquals, (const TSoftObjectPtr<T>&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(TSoftObjectPtr, opEquals, (T), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(TSoftObjectPtr, Get, (), ERASE_ARGUMENT_PACK(T)) },
{ ERASE_METHOD_PTR(TSoftObjectPtr, LoadAsync, (FOnSoftObjectLoaded), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(TSoftClassPtr, ToSoftObjectPath, (), ERASE_ARGUMENT_PACK(FSoftObjectPath)) },
{ ERASE_METHOD_PTR(TSoftClassPtr, ToString, (), ERASE_ARGUMENT_PACK(FString)) },
{ ERASE_METHOD_PTR(TSoftClassPtr, GetLongPackageName, (), ERASE_ARGUMENT_PACK(FString)) },
{ ERASE_METHOD_PTR(TSoftClassPtr, GetAssetName, (), ERASE_ARGUMENT_PACK(FString)) },
{ ERASE_METHOD_PTR(TSoftClassPtr, IsValid, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(TSoftClassPtr, IsPending, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(TSoftClassPtr, IsNull, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(TSoftClassPtr, Reset, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(TSoftClassPtr, opAssign, (const FSoftObjectPath&), ERASE_ARGUMENT_PACK(TSoftObjectPtr<T>&)) },
{ ERASE_METHOD_PTR(TSoftClassPtr, opAssign, (UClass), ERASE_ARGUMENT_PACK(TSoftClassPtr<T>&)) },
{ ERASE_METHOD_PTR(TSoftClassPtr, opAssign, (const TSoftClassPtr<UObject>&), ERASE_ARGUMENT_PACK(TSoftClassPtr<UObject>&)) },
{ ERASE_METHOD_PTR(TSoftClassPtr, opAssign, (const TSubclassOf<T>&), ERASE_ARGUMENT_PACK(TSoftClassPtr<T>&)) },
{ ERASE_METHOD_PTR(TSoftClassPtr, opEquals, (const TSoftClassPtr<T>&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(TSoftClassPtr, opEquals, (const TSubclassOf<T>&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(TSoftClassPtr, opEquals, (UClass), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(TSoftClassPtr, Get, (), ERASE_ARGUMENT_PACK(TSubclassOf<T>)) },
{ ERASE_METHOD_PTR(TSoftClassPtr, LoadAsync, (FOnSoftClassLoaded), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(TSubclassOf, opAssign, (const TSubclassOf<AActor>&), ERASE_ARGUMENT_PACK(TSubclassOf<AActor>&)) },


{ ERASE_METHOD_PTR(TObjectPtr, opAssign, (const TObjectPtr<UWaveformTransformationBase>&), ERASE_ARGUMENT_PACK(TObjectPtr<UWaveformTransformationBase>&)) },


{ ERASE_METHOD_PTR(TObjectPtr, opAssign, (const TObjectPtr<UPropertyConfigFileDisplayRow>&), ERASE_ARGUMENT_PACK(TObjectPtr<UPropertyConfigFileDisplayRow>&)) },


{ ERASE_METHOD_PTR(TObjectPtr, opAssign, (const TObjectPtr<ULiveLinkFramePreProcessor>&), ERASE_ARGUMENT_PACK(TObjectPtr<ULiveLinkFramePreProcessor>&)) },


{ ERASE_METHOD_PTR(TObjectPtr, opAssign, (const TObjectPtr<ULiveLinkFrameTranslator>&), ERASE_ARGUMENT_PACK(TObjectPtr<ULiveLinkFrameTranslator>&)) },


{ ERASE_METHOD_PTR(TSoftObjectPtr, opAssign, (const TSoftObjectPtr<UDataLayerAsset>&), ERASE_ARGUMENT_PACK(TSoftObjectPtr<UDataLayerAsset>&)) },


{ ERASE_METHOD_PTR(TObjectPtr, opAssign, (const TObjectPtr<UObject>&), ERASE_ARGUMENT_PACK(TObjectPtr<UObject>&)) },


{ ERASE_METHOD_PTR(TObjectPtr, opAssign, (const TObjectPtr<UAssetUserData>&), ERASE_ARGUMENT_PACK(TObjectPtr<UAssetUserData>&)) },


{ ERASE_METHOD_PTR(TObjectPtr, opAssign, (const TObjectPtr<URuntimeVirtualTexture>&), ERASE_ARGUMENT_PACK(TObjectPtr<URuntimeVirtualTexture>&)) },


{ ERASE_METHOD_PTR(TObjectPtr, opAssign, (const TObjectPtr<UMaterialInterface>&), ERASE_ARGUMENT_PACK(TObjectPtr<UMaterialInterface>&)) },


{ ERASE_METHOD_PTR(TObjectPtr, opAssign, (const TObjectPtr<UActorComponent>&), ERASE_ARGUMENT_PACK(TObjectPtr<UActorComponent>&)) },


{ ERASE_METHOD_PTR(TObjectPtr, opAssign, (const TObjectPtr<UEditableGameplayTagQueryExpression>&), ERASE_ARGUMENT_PACK(TObjectPtr<UEditableGameplayTagQueryExpression>&)) },


{ ERASE_METHOD_PTR(TObjectPtr, opAssign, (const TObjectPtr<UEnvQueryGenerator>&), ERASE_ARGUMENT_PACK(TObjectPtr<UEnvQueryGenerator>&)) },


{ ERASE_METHOD_PTR(TObjectPtr, opAssign, (const TObjectPtr<UAISenseConfig>&), ERASE_ARGUMENT_PACK(TObjectPtr<UAISenseConfig>&)) },


{ ERASE_METHOD_PTR(TSubclassOf, opAssign, (const TSubclassOf<UAISense>&), ERASE_ARGUMENT_PACK(TSubclassOf<UAISense>&)) },


{ ERASE_METHOD_PTR(TObjectPtr, opAssign, (const TObjectPtr<UAIPerceptionComponent>&), ERASE_ARGUMENT_PACK(TObjectPtr<UAIPerceptionComponent>&)) },


{ ERASE_METHOD_PTR(TSoftObjectPtr, opAssign, (const TSoftObjectPtr<AChaosSolverActor>&), ERASE_ARGUMENT_PACK(TSoftObjectPtr<AChaosSolverActor>&)) },


{ ERASE_METHOD_PTR(TObjectPtr, opAssign, (const TObjectPtr<AChaosSolverActor>&), ERASE_ARGUMENT_PACK(TObjectPtr<AChaosSolverActor>&)) },


{ ERASE_METHOD_PTR(TObjectPtr, opAssign, (const TObjectPtr<AGeometryCollectionActor>&), ERASE_ARGUMENT_PACK(TObjectPtr<AGeometryCollectionActor>&)) },


{ ERASE_METHOD_PTR(TObjectPtr, opAssign, (const TObjectPtr<AFieldSystemActor>&), ERASE_ARGUMENT_PACK(TObjectPtr<AFieldSystemActor>&)) },


{ ERASE_METHOD_PTR(TObjectPtr, opAssign, (const TObjectPtr<ULocalizationTarget>&), ERASE_ARGUMENT_PACK(TObjectPtr<ULocalizationTarget>&)) },


{ ERASE_METHOD_PTR(TObjectPtr, opAssign, (const TObjectPtr<UClothConfigBase>&), ERASE_ARGUMENT_PACK(TObjectPtr<UClothConfigBase>&)) },


{ ERASE_METHOD_PTR(TObjectPtr, opAssign, (const TObjectPtr<USoundConcurrency>&), ERASE_ARGUMENT_PACK(TObjectPtr<USoundConcurrency>&)) },


{ ERASE_METHOD_PTR(TObjectPtr, opAssign, (const TObjectPtr<UMediaSource>&), ERASE_ARGUMENT_PACK(TObjectPtr<UMediaSource>&)) },


{ ERASE_METHOD_PTR(TObjectPtr, opAssign, (const TObjectPtr<AActor>&), ERASE_ARGUMENT_PACK(TObjectPtr<AActor>&)) },


{ ERASE_METHOD_PTR(TObjectPtr, opAssign, (const TObjectPtr<UPropertyEditorTestInstancedObject>&), ERASE_ARGUMENT_PACK(TObjectPtr<UPropertyEditorTestInstancedObject>&)) },


{ ERASE_METHOD_PTR(TObjectPtr, opAssign, (const TObjectPtr<UStaticMeshComponent>&), ERASE_ARGUMENT_PACK(TObjectPtr<UStaticMeshComponent>&)) },


{ ERASE_METHOD_PTR(TObjectPtr, opAssign, (const TObjectPtr<UTexture2D>&), ERASE_ARGUMENT_PACK(TObjectPtr<UTexture2D>&)) },


{ ERASE_METHOD_PTR(TObjectPtr, opAssign, (const TObjectPtr<UBlueprintPropertyTestObject>&), ERASE_ARGUMENT_PACK(TObjectPtr<UBlueprintPropertyTestObject>&)) },


{ ERASE_METHOD_PTR(TSoftObjectPtr, opAssign, (const TSoftObjectPtr<UMaterialInterface>&), ERASE_ARGUMENT_PACK(TSoftObjectPtr<UMaterialInterface>&)) },


{ ERASE_METHOD_PTR(TObjectPtr, opAssign, (const TObjectPtr<ULandscapeLayerInfoObject>&), ERASE_ARGUMENT_PACK(TObjectPtr<ULandscapeLayerInfoObject>&)) },


{ ERASE_METHOD_PTR(TObjectPtr, opAssign, (const TObjectPtr<UAnimMetaData>&), ERASE_ARGUMENT_PACK(TObjectPtr<UAnimMetaData>&)) },


{ ERASE_METHOD_PTR(TObjectPtr, opAssign, (const TObjectPtr<ALevelStreamingVolume>&), ERASE_ARGUMENT_PACK(TObjectPtr<ALevelStreamingVolume>&)) },


{ ERASE_METHOD_PTR(TObjectPtr, opAssign, (const TObjectPtr<UPhysicalMaterial>&), ERASE_ARGUMENT_PACK(TObjectPtr<UPhysicalMaterial>&)) },


{ ERASE_METHOD_PTR(TSubclassOf, opAssign, (const TSubclassOf<UCameraModifier>&), ERASE_ARGUMENT_PACK(TSubclassOf<UCameraModifier>&)) },


{ ERASE_METHOD_PTR(TObjectPtr, opAssign, (const TObjectPtr<USoundNode>&), ERASE_ARGUMENT_PACK(TObjectPtr<USoundNode>&)) },


{ ERASE_METHOD_PTR(TObjectPtr, opAssign, (const TObjectPtr<UDataLayerAsset>&), ERASE_ARGUMENT_PACK(TObjectPtr<UDataLayerAsset>&)) },


{ ERASE_METHOD_PTR(TSoftObjectPtr, opAssign, (const TSoftObjectPtr<UUserDefinedStruct>&), ERASE_ARGUMENT_PACK(TSoftObjectPtr<UUserDefinedStruct>&)) },


{ ERASE_METHOD_PTR(TObjectPtr, opAssign, (const TObjectPtr<UAnimBoneCompressionCodec>&), ERASE_ARGUMENT_PACK(TObjectPtr<UAnimBoneCompressionCodec>&)) },


{ ERASE_METHOD_PTR(TSoftObjectPtr, opAssign, (const TSoftObjectPtr<USkeleton>&), ERASE_ARGUMENT_PACK(TSoftObjectPtr<USkeleton>&)) },


{ ERASE_METHOD_PTR(TObjectPtr, opAssign, (const TObjectPtr<UCurveTable>&), ERASE_ARGUMENT_PACK(TObjectPtr<UCurveTable>&)) },


{ ERASE_METHOD_PTR(TObjectPtr, opAssign, (const TObjectPtr<UDataTable>&), ERASE_ARGUMENT_PACK(TObjectPtr<UDataTable>&)) },


{ ERASE_METHOD_PTR(TObjectPtr, opAssign, (const TObjectPtr<UCurveLinearColor>&), ERASE_ARGUMENT_PACK(TObjectPtr<UCurveLinearColor>&)) },


{ ERASE_METHOD_PTR(TObjectPtr, opAssign, (const TObjectPtr<UDeviceProfile>&), ERASE_ARGUMENT_PACK(TObjectPtr<UDeviceProfile>&)) },


{ ERASE_METHOD_PTR(TObjectPtr, opAssign, (const TObjectPtr<UInputDeviceProperty>&), ERASE_ARGUMENT_PACK(TObjectPtr<UInputDeviceProperty>&)) },


{ ERASE_METHOD_PTR(TObjectPtr, opAssign, (const TObjectPtr<APlayerState>&), ERASE_ARGUMENT_PACK(TObjectPtr<APlayerState>&)) },


{ ERASE_METHOD_PTR(TSoftObjectPtr, opAssign, (const TSoftObjectPtr<UObject>&), ERASE_ARGUMENT_PACK(TSoftObjectPtr<UObject>&)) },


{ ERASE_METHOD_PTR(TObjectPtr, opAssign, (const TObjectPtr<UNodeMappingContainer>&), ERASE_ARGUMENT_PACK(TObjectPtr<UNodeMappingContainer>&)) },


{ ERASE_METHOD_PTR(TObjectPtr, opAssign, (const TObjectPtr<USoundClass>&), ERASE_ARGUMENT_PACK(TObjectPtr<USoundClass>&)) },


{ ERASE_METHOD_PTR(TObjectPtr, opAssign, (const TObjectPtr<USoundSubmixBase>&), ERASE_ARGUMENT_PACK(TObjectPtr<USoundSubmixBase>&)) },


{ ERASE_METHOD_PTR(TObjectPtr, opAssign, (const TObjectPtr<USoundEffectSubmixPreset>&), ERASE_ARGUMENT_PACK(TObjectPtr<USoundEffectSubmixPreset>&)) },


{ ERASE_METHOD_PTR(TObjectPtr, opAssign, (const TObjectPtr<USoundfieldEffectBase>&), ERASE_ARGUMENT_PACK(TObjectPtr<USoundfieldEffectBase>&)) },


{ ERASE_METHOD_PTR(TObjectPtr, opAssign, (const TObjectPtr<UTextureCube>&), ERASE_ARGUMENT_PACK(TObjectPtr<UTextureCube>&)) },


{ ERASE_METHOD_PTR(TWeakObjectPtr, opAssign, (const TWeakObjectPtr<USoundWave>&), ERASE_ARGUMENT_PACK(TWeakObjectPtr<USoundWave>&)) },
{ ERASE_METHOD_PTR(TWeakObjectPtr, opImplConv, (), ERASE_ARGUMENT_PACK(T)) },
{ ERASE_METHOD_PTR(TWeakObjectPtr, opEquals, (const TWeakObjectPtr<T>&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(TWeakObjectPtr, opEquals, (const T), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(TWeakObjectPtr, opAssign, (T), ERASE_ARGUMENT_PACK(TWeakObjectPtr<T>&)) },
{ ERASE_METHOD_PTR(TWeakObjectPtr, Get, (), ERASE_ARGUMENT_PACK(T)) },
{ ERASE_METHOD_PTR(TWeakObjectPtr, IsValid, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(TWeakObjectPtr, IsStale, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(TWeakObjectPtr, IsExplicitlyNull, (), ERASE_ARGUMENT_PACK(bool)) },


{ ERASE_METHOD_PTR(TWeakObjectPtr, opAssign, (const TWeakObjectPtr<UDialogueWave>&), ERASE_ARGUMENT_PACK(TWeakObjectPtr<UDialogueWave>&)) },


{ ERASE_METHOD_PTR(TSubclassOf, opAssign, (const TSubclassOf<UAnimationModifier>&), ERASE_ARGUMENT_PACK(TSubclassOf<UAnimationModifier>&)) },


{ ERASE_METHOD_PTR(TObjectPtr, opAssign, (const TObjectPtr<UChaosCache>&), ERASE_ARGUMENT_PACK(TObjectPtr<UChaosCache>&)) },


{ ERASE_METHOD_PTR(TObjectPtr, opAssign, (const TObjectPtr<UDatasmithAdditionalData>&), ERASE_ARGUMENT_PACK(TObjectPtr<UDatasmithAdditionalData>&)) },


{ ERASE_METHOD_PTR(TObjectPtr, opAssign, (const TObjectPtr<UDatasmithOptionsBase>&), ERASE_ARGUMENT_PACK(TObjectPtr<UDatasmithOptionsBase>&)) },


{ ERASE_METHOD_PTR(TObjectPtr, opAssign, (const TObjectPtr<ULevelSequence>&), ERASE_ARGUMENT_PACK(TObjectPtr<ULevelSequence>&)) },


{ ERASE_METHOD_PTR(TObjectPtr, opAssign, (const TObjectPtr<USkeletalMesh>&), ERASE_ARGUMENT_PACK(TObjectPtr<USkeletalMesh>&)) },


{ ERASE_METHOD_PTR(TSoftClassPtr, opAssign, (const TSoftClassPtr<UPanelWidget>&), ERASE_ARGUMENT_PACK(TSoftClassPtr<UPanelWidget>&)) },


{ ERASE_METHOD_PTR(TSoftClassPtr, opAssign, (const TSoftClassPtr<UUserWidget>&), ERASE_ARGUMENT_PACK(TSoftClassPtr<UUserWidget>&)) },


{ ERASE_METHOD_PTR(TObjectPtr, opAssign, (const TObjectPtr<APawn>&), ERASE_ARGUMENT_PACK(TObjectPtr<APawn>&)) },


{ ERASE_METHOD_PTR(TObjectPtr, opAssign, (const TObjectPtr<UBasicOverlays>&), ERASE_ARGUMENT_PACK(TObjectPtr<UBasicOverlays>&)) },


{ ERASE_METHOD_PTR(TSoftClassPtr, opAssign, (const TSoftClassPtr<UEnhancedInputPlatformData>&), ERASE_ARGUMENT_PACK(TSoftClassPtr<UEnhancedInputPlatformData>&)) },


{ ERASE_METHOD_PTR(TObjectPtr, opAssign, (const TObjectPtr<UInputTrigger>&), ERASE_ARGUMENT_PACK(TObjectPtr<UInputTrigger>&)) },


{ ERASE_METHOD_PTR(TObjectPtr, opAssign, (const TObjectPtr<UInputModifier>&), ERASE_ARGUMENT_PACK(TObjectPtr<UInputModifier>&)) },


{ ERASE_METHOD_PTR(TObjectPtr, opAssign, (const TObjectPtr<UActorRecorderPropertyMap>&), ERASE_ARGUMENT_PACK(TObjectPtr<UActorRecorderPropertyMap>&)) },


{ ERASE_METHOD_PTR(TSoftObjectPtr, opAssign, (const TSoftObjectPtr<UNiagaraSystem>&), ERASE_ARGUMENT_PACK(TSoftObjectPtr<UNiagaraSystem>&)) },


{ ERASE_METHOD_PTR(TObjectPtr, opAssign, (const TObjectPtr<UNiagaraStatelessModule>&), ERASE_ARGUMENT_PACK(TObjectPtr<UNiagaraStatelessModule>&)) },


{ ERASE_METHOD_PTR(TObjectPtr, opAssign, (const TObjectPtr<UNiagaraRendererProperties>&), ERASE_ARGUMENT_PACK(TObjectPtr<UNiagaraRendererProperties>&)) },


{ ERASE_METHOD_PTR(TObjectPtr, opAssign, (const TObjectPtr<UNiagaraValidationRule>&), ERASE_ARGUMENT_PACK(TObjectPtr<UNiagaraValidationRule>&)) },


{ ERASE_METHOD_PTR(TObjectPtr, opAssign, (const TObjectPtr<UNiagaraBakerOutput>&), ERASE_ARGUMENT_PACK(TObjectPtr<UNiagaraBakerOutput>&)) },


{ ERASE_METHOD_PTR(TSoftObjectPtr, opAssign, (const TSoftObjectPtr<AActor>&), ERASE_ARGUMENT_PACK(TSoftObjectPtr<AActor>&)) },


{ ERASE_METHOD_PTR(TObjectPtr, opAssign, (const TObjectPtr<UNiagaraValidationRuleSet>&), ERASE_ARGUMENT_PACK(TObjectPtr<UNiagaraValidationRuleSet>&)) },


{ ERASE_METHOD_PTR(TObjectPtr, opAssign, (const TObjectPtr<UNiagaraParameterCollectionInstance>&), ERASE_ARGUMENT_PACK(TObjectPtr<UNiagaraParameterCollectionInstance>&)) },


{ ERASE_METHOD_PTR(TSoftObjectPtr, opAssign, (const TSoftObjectPtr<UNiagaraValidationRuleSet>&), ERASE_ARGUMENT_PACK(TSoftObjectPtr<UNiagaraValidationRuleSet>&)) },


{ ERASE_METHOD_PTR(TSubclassOf, opAssign, (const TSubclassOf<UNiagaraRendererProperties>&), ERASE_ARGUMENT_PACK(TSubclassOf<UNiagaraRendererProperties>&)) },


{ ERASE_METHOD_PTR(TObjectPtr, opAssign, (const TObjectPtr<UNiagaraScript>&), ERASE_ARGUMENT_PACK(TObjectPtr<UNiagaraScript>&)) },


{ ERASE_METHOD_PTR(TSubclassOf, opAssign, (const TSubclassOf<UNiagaraDataInterface>&), ERASE_ARGUMENT_PACK(TSubclassOf<UNiagaraDataInterface>&)) },


{ ERASE_METHOD_PTR(TSoftObjectPtr, opAssign, (const TSoftObjectPtr<UNiagaraEffectType>&), ERASE_ARGUMENT_PACK(TSoftObjectPtr<UNiagaraEffectType>&)) },


{ ERASE_METHOD_PTR(TObjectPtr, opAssign, (const TObjectPtr<UNiagaraPythonScriptModuleInput>&), ERASE_ARGUMENT_PACK(TObjectPtr<UNiagaraPythonScriptModuleInput>&)) },


{ ERASE_METHOD_PTR(TSoftObjectPtr, opAssign, (const TSoftObjectPtr<UControlRigShapeLibrary>&), ERASE_ARGUMENT_PACK(TSoftObjectPtr<UControlRigShapeLibrary>&)) },


{ ERASE_METHOD_PTR(TObjectPtr, opAssign, (const TObjectPtr<UTexture>&), ERASE_ARGUMENT_PACK(TObjectPtr<UTexture>&)) },


{ ERASE_METHOD_PTR(TObjectPtr, opAssign, (const TObjectPtr<UPaperTileLayer>&), ERASE_ARGUMENT_PACK(TObjectPtr<UPaperTileLayer>&)) },


{ ERASE_METHOD_PTR(TObjectPtr, opAssign, (const TObjectPtr<UCameraNode>&), ERASE_ARGUMENT_PACK(TObjectPtr<UCameraNode>&)) },


{ ERASE_METHOD_PTR(TObjectPtr, opAssign, (const TObjectPtr<UCameraShakePattern>&), ERASE_ARGUMENT_PACK(TObjectPtr<UCameraShakePattern>&)) },


{ ERASE_METHOD_PTR(TObjectPtr, opAssign, (const TObjectPtr<UInterchangeImportTestStepBase>&), ERASE_ARGUMENT_PACK(TObjectPtr<UInterchangeImportTestStepBase>&)) },


{ ERASE_METHOD_PTR(TObjectPtr, opAssign, (const TObjectPtr<UInterchangePipelineBase>&), ERASE_ARGUMENT_PACK(TObjectPtr<UInterchangePipelineBase>&)) },


{ ERASE_METHOD_PTR(TObjectPtr, opAssign, (const TObjectPtr<UPlatformSettings>&), ERASE_ARGUMENT_PACK(TObjectPtr<UPlatformSettings>&)) },


{ ERASE_METHOD_PTR(TObjectPtr, opAssign, (const TObjectPtr<UMovieSceneTrack>&), ERASE_ARGUMENT_PACK(TObjectPtr<UMovieSceneTrack>&)) },


{ ERASE_METHOD_PTR(TObjectPtr, opAssign, (const TObjectPtr<UMovieSceneFolder>&), ERASE_ARGUMENT_PACK(TObjectPtr<UMovieSceneFolder>&)) },


{ ERASE_METHOD_PTR(TObjectPtr, opAssign, (const TObjectPtr<UBlackboardKeyType>&), ERASE_ARGUMENT_PACK(TObjectPtr<UBlackboardKeyType>&)) },


{ ERASE_METHOD_PTR(TObjectPtr, opAssign, (const TObjectPtr<UFieldNodeBase>&), ERASE_ARGUMENT_PACK(TObjectPtr<UFieldNodeBase>&)) },


{ ERASE_METHOD_PTR(TObjectPtr, opAssign, (const TObjectPtr<UFieldSystemMetaData>&), ERASE_ARGUMENT_PACK(TObjectPtr<UFieldSystemMetaData>&)) },


{ ERASE_METHOD_PTR(TObjectPtr, opAssign, (const TObjectPtr<UStaticMesh>&), ERASE_ARGUMENT_PACK(TObjectPtr<UStaticMesh>&)) },


{ ERASE_METHOD_PTR(TObjectPtr, opAssign, (const TObjectPtr<UBlendProfile>&), ERASE_ARGUMENT_PACK(TObjectPtr<UBlendProfile>&)) },


{ ERASE_METHOD_PTR(TObjectPtr, opAssign, (const TObjectPtr<UDEditorParameterValue>&), ERASE_ARGUMENT_PACK(TObjectPtr<UDEditorParameterValue>&)) },


{ ERASE_METHOD_PTR(TObjectPtr, opAssign, (const TObjectPtr<UMaterialFunctionInterface>&), ERASE_ARGUMENT_PACK(TObjectPtr<UMaterialFunctionInterface>&)) },


{ ERASE_METHOD_PTR(TObjectPtr, opAssign, (const TObjectPtr<UParticleModuleEventSendToGame>&), ERASE_ARGUMENT_PACK(TObjectPtr<UParticleModuleEventSendToGame>&)) },


{ ERASE_METHOD_PTR(TObjectPtr, opAssign, (const TObjectPtr<USpatializationPluginSourceSettingsBase>&), ERASE_ARGUMENT_PACK(TObjectPtr<USpatializationPluginSourceSettingsBase>&)) },


{ ERASE_METHOD_PTR(TObjectPtr, opAssign, (const TObjectPtr<UOcclusionPluginSourceSettingsBase>&), ERASE_ARGUMENT_PACK(TObjectPtr<UOcclusionPluginSourceSettingsBase>&)) },


{ ERASE_METHOD_PTR(TObjectPtr, opAssign, (const TObjectPtr<UReverbPluginSourceSettingsBase>&), ERASE_ARGUMENT_PACK(TObjectPtr<UReverbPluginSourceSettingsBase>&)) },


{ ERASE_METHOD_PTR(TObjectPtr, opAssign, (const TObjectPtr<USourceDataOverridePluginSourceSettingsBase>&), ERASE_ARGUMENT_PACK(TObjectPtr<USourceDataOverridePluginSourceSettingsBase>&)) },


{ ERASE_METHOD_PTR(TObjectPtr, opAssign, (const TObjectPtr<UHLODLayer>&), ERASE_ARGUMENT_PACK(TObjectPtr<UHLODLayer>&)) },


{ ERASE_METHOD_PTR(TObjectPtr, opAssign, (const TObjectPtr<UDialogueVoice>&), ERASE_ARGUMENT_PACK(TObjectPtr<UDialogueVoice>&)) },


{ ERASE_METHOD_PTR(TSoftObjectPtr, opAssign, (const TSoftObjectPtr<URuntimeVirtualTexture>&), ERASE_ARGUMENT_PACK(TSoftObjectPtr<URuntimeVirtualTexture>&)) },


{ ERASE_METHOD_PTR(TObjectPtr, opAssign, (const TObjectPtr<USoundModulatorBase>&), ERASE_ARGUMENT_PACK(TObjectPtr<USoundModulatorBase>&)) },


{ ERASE_METHOD_PTR(TSoftClassPtr, opAssign, (const TSoftClassPtr<UWidgetCompilerRule>&), ERASE_ARGUMENT_PACK(TSoftClassPtr<UWidgetCompilerRule>&)) },


{ ERASE_METHOD_PTR(TSoftObjectPtr, opAssign, (const TSoftObjectPtr<UWidgetBlueprint>&), ERASE_ARGUMENT_PACK(TSoftObjectPtr<UWidgetBlueprint>&)) },


{ ERASE_METHOD_PTR(TObjectPtr, opAssign, (const TObjectPtr<UInterchangeSceneNode>&), ERASE_ARGUMENT_PACK(TObjectPtr<UInterchangeSceneNode>&)) },


{ ERASE_METHOD_PTR(TObjectPtr, opAssign, (const TObjectPtr<UPaperSprite>&), ERASE_ARGUMENT_PACK(TObjectPtr<UPaperSprite>&)) },


{ ERASE_METHOD_PTR(TObjectPtr, opAssign, (const TObjectPtr<UCameraModeTransitionCondition>&), ERASE_ARGUMENT_PACK(TObjectPtr<UCameraModeTransitionCondition>&)) },


{ ERASE_METHOD_PTR(TObjectPtr, opAssign, (const TObjectPtr<UMaterial>&), ERASE_ARGUMENT_PACK(TObjectPtr<UMaterial>&)) },


{ ERASE_METHOD_PTR(UTestComponent, BeginPlay_Implementation, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(UTestComponent, Tick_Implementation, (const float), ERASE_ARGUMENT_PACK(void)) },


{ ERASE_METHOD_PTR(TArray, opIndex, (int), ERASE_ARGUMENT_PACK(T&)) },
{ ERASE_METHOD_PTR(TArray, opIndex, (int), ERASE_ARGUMENT_PACK(const T&)) },
{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<uint>&), ERASE_ARGUMENT_PACK(TArray<uint32>&)) },
{ ERASE_METHOD_PTR(TArray, opEquals, (const TArray<T>&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(TArray, Add, (const T&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(TArray, Append, (const TArray<T>&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(TArray, Shuffle, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(TArray, Swap, (int, int), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(TArray, MoveAssignFrom, (TArray<T>&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(TArray, IsValidIndex, (int), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(TArray, Last, (int = 0), ERASE_ARGUMENT_PACK(const T&)) },
{ ERASE_METHOD_PTR(TArray, Last, (int = 0), ERASE_ARGUMENT_PACK(T&)) },
{ ERASE_METHOD_PTR(TArray, Insert, (const T&, int = 0), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(TArray, AddUnique, (const T&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(TArray, Empty, (int = 0), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(TArray, Reset, (int = 0), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(TArray, Reserve, (int = 0), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(TArray, SetNum, (int = 0), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(TArray, Copy, (const TArray<T>&, int, int, int = 0), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(TArray, SetNumZeroed, (int = 0), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(TArray, FindIndex, (const T&), ERASE_ARGUMENT_PACK(int)) },
{ ERASE_METHOD_PTR(TArray, Contains, (const T&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(TArray, RemoveSingle, (const T&), ERASE_ARGUMENT_PACK(int)) },
{ ERASE_METHOD_PTR(TArray, Remove, (const T&), ERASE_ARGUMENT_PACK(int)) },
{ ERASE_METHOD_PTR(TArray, RemoveSingleSwap, (const T&), ERASE_ARGUMENT_PACK(int)) },
{ ERASE_METHOD_PTR(TArray, RemoveSwap, (const T&), ERASE_ARGUMENT_PACK(int)) },
{ ERASE_METHOD_PTR(TArray, RemoveAt, (int), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(TArray, RemoveAtSwap, (int), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(TArray, Sort, (bool = false), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(TArray, Num, (), ERASE_ARGUMENT_PACK(int)) },
{ ERASE_METHOD_PTR(TArray, Max, (), ERASE_ARGUMENT_PACK(int)) },
{ ERASE_METHOD_PTR(TArray, GetAllocatedSize, (), ERASE_ARGUMENT_PACK(int64)) },
{ ERASE_METHOD_PTR(TArray, IsEmpty, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(TArray, GetSlack, (), ERASE_ARGUMENT_PACK(int)) },
{ ERASE_METHOD_PTR(TArray, Shrink, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(TArray, Iterator, (), ERASE_ARGUMENT_PACK(TArrayIterator<T>)) },
{ ERASE_METHOD_PTR(TArray, Iterator, (), ERASE_ARGUMENT_PACK(TArrayConstIterator<T>)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<AActor*>&), ERASE_ARGUMENT_PACK(TArray<AActor*>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<const AActor>&), ERASE_ARGUMENT_PACK(TArray<const AActor>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<UPrimitiveComponent>&), ERASE_ARGUMENT_PACK(TArray<UPrimitiveComponent>&)) },


{ ERASE_METHOD_PTR(TSubclassOf, opAssign, (const TSubclassOf<UInterface>&), ERASE_ARGUMENT_PACK(TSubclassOf<UInterface>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FScriptTypedElementHandle>&), ERASE_ARGUMENT_PACK(TArray<FScriptTypedElementHandle>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<UObject*>&), ERASE_ARGUMENT_PACK(TArray<UObject*>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FString>&), ERASE_ARGUMENT_PACK(TArray<FString>&)) },


{ ERASE_METHOD_PTR(TMap, opIndex, (const K&), ERASE_ARGUMENT_PACK(V&)) },
{ ERASE_METHOD_PTR(TMap, opIndex, (const K&), ERASE_ARGUMENT_PACK(const V&)) },
{ ERASE_METHOD_PTR(TMap, Add, (const K&, const V&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(TMap, Contains, (const K&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(TMap, RemoveAndCopyValue, (const K&, V&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(TMap, Remove, (const K&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(TMap, Num, (), ERASE_ARGUMENT_PACK(int)) },
{ ERASE_METHOD_PTR(TMap, IsEmpty, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(TMap, FindOrAdd, (const K&), ERASE_ARGUMENT_PACK(V&)) },
{ ERASE_METHOD_PTR(TMap, FindOrAdd, (const K&, const V&), ERASE_ARGUMENT_PACK(V&)) },
{ ERASE_METHOD_PTR(TMap, Find, (const K&, V&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(TMap, opAssign, (const TMap<FName,FString>&), ERASE_ARGUMENT_PACK(TMap<FName,FString>&)) },
{ ERASE_METHOD_PTR(TMap, Empty, (int = 0), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(TMap, Reset, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(TMap, GetKeys, (TArray<K>&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(TMap, GetValues, (TArray<K>&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(TMap, Iterator, (), ERASE_ARGUMENT_PACK(TMapIterator<K,V>)) },
{ ERASE_METHOD_PTR(TMap, Iterator, (), ERASE_ARGUMENT_PACK(TMapConstIterator<K,V>)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FFilePath>&), ERASE_ARGUMENT_PACK(TArray<FFilePath>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FDirectoryPath>&), ERASE_ARGUMENT_PACK(TArray<FDirectoryPath>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FProjectBuildSettings>&), ERASE_ARGUMENT_PACK(TArray<FProjectBuildSettings>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FAutoCompleteCommand>&), ERASE_ARGUMENT_PACK(TArray<FAutoCompleteCommand>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FTemplateMapInfoOverride>&), ERASE_ARGUMENT_PACK(TArray<FTemplateMapInfoOverride>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FGameModeName>&), ERASE_ARGUMENT_PACK(TArray<FGameModeName>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FName>&), ERASE_ARGUMENT_PACK(TArray<FName>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FVertexInstanceID>&), ERASE_ARGUMENT_PACK(TArray<FVertexInstanceID>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FEdgeID>&), ERASE_ARGUMENT_PACK(TArray<FEdgeID>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FVertexID>&), ERASE_ARGUMENT_PACK(TArray<FVertexID>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FPolygonGroupID>&), ERASE_ARGUMENT_PACK(TArray<FPolygonGroupID>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FPolygonID>&), ERASE_ARGUMENT_PACK(TArray<FPolygonID>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FTriangleID>&), ERASE_ARGUMENT_PACK(TArray<FTriangleID>&)) },


{ ERASE_METHOD_PTR(TMap, opAssign, (const TMap<FName,FName>&), ERASE_ARGUMENT_PACK(TMap<FName,FName>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<TObjectPtr<UWaveformTransformationBase>>&), ERASE_ARGUMENT_PACK(TArray<TObjectPtr<UWaveformTransformationBase>>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<UInterchangeSourceData>&), ERASE_ARGUMENT_PACK(TArray<UInterchangeSourceData>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<TObjectPtr<UPropertyConfigFileDisplayRow>>&), ERASE_ARGUMENT_PACK(TArray<TObjectPtr<UPropertyConfigFileDisplayRow>>&)) },


{ ERASE_METHOD_PTR(TMap, opAssign, (const TMap<FName,FNodeColors>&), ERASE_ARGUMENT_PACK(TMap<FName,FNodeColors>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<TObjectPtr<ULiveLinkFramePreProcessor>>&), ERASE_ARGUMENT_PACK(TArray<TObjectPtr<ULiveLinkFramePreProcessor>>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<TObjectPtr<ULiveLinkFrameTranslator>>&), ERASE_ARGUMENT_PACK(TArray<TObjectPtr<ULiveLinkFrameTranslator>>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FLiveLinkSubjectName>&), ERASE_ARGUMENT_PACK(TArray<FLiveLinkSubjectName>&)) },


{ ERASE_METHOD_PTR(TSubclassOf, opAssign, (const TSubclassOf<UMovieSceneCaptureProtocolBase>&), ERASE_ARGUMENT_PACK(TSubclassOf<UMovieSceneCaptureProtocolBase>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<TSoftObjectPtr<UDataLayerAsset>>&), ERASE_ARGUMENT_PACK(TArray<TSoftObjectPtr<UDataLayerAsset>>&)) },


{ ERASE_METHOD_PTR(TSubclassOf, opAssign, (const TSubclassOf<UInputComponent>&), ERASE_ARGUMENT_PACK(TSubclassOf<UInputComponent>&)) },


{ ERASE_METHOD_PTR(TSubclassOf, opAssign, (const TSubclassOf<UActorComponent>&), ERASE_ARGUMENT_PACK(TSubclassOf<UActorComponent>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<UActorComponent>&), ERASE_ARGUMENT_PACK(TArray<UActorComponent>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FPropertiesToRecordForClass>&), ERASE_ARGUMENT_PACK(TArray<FPropertiesToRecordForClass>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FPropertiesToRecordForActorClass>&), ERASE_ARGUMENT_PACK(TArray<FPropertiesToRecordForActorClass>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FSettingsForActorClass>&), ERASE_ARGUMENT_PACK(TArray<FSettingsForActorClass>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FMovieSceneToolsFbxSettings>&), ERASE_ARGUMENT_PACK(TArray<FMovieSceneToolsFbxSettings>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FControlFindReplaceString>&), ERASE_ARGUMENT_PACK(TArray<FControlFindReplaceString>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FControlToTransformMappings>&), ERASE_ARGUMENT_PACK(TArray<FControlToTransformMappings>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<TObjectPtr<UObject>>&), ERASE_ARGUMENT_PACK(TArray<TObjectPtr<UObject>>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FSequencerViewModelScriptingStruct>&), ERASE_ARGUMENT_PACK(TArray<FSequencerViewModelScriptingStruct>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FAssetData>&), ERASE_ARGUMENT_PACK(TArray<FAssetData>&)) },


{ ERASE_METHOD_PTR(TSet, Add, (const T&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(TSet, Append, (const TArray<T>&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(TSet, Append, (const TSet<T>&), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(TSet, Contains, (const T&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(TSet, Remove, (const T&), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(TSet, opAssign, (const TSet<FName>&), ERASE_ARGUMENT_PACK(TSet<FName>&)) },
{ ERASE_METHOD_PTR(TSet, Empty, (int = 0), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(TSet, Reset, (), ERASE_ARGUMENT_PACK(void)) },
{ ERASE_METHOD_PTR(TSet, Num, (), ERASE_ARGUMENT_PACK(int)) },
{ ERASE_METHOD_PTR(TSet, IsEmpty, (), ERASE_ARGUMENT_PACK(bool)) },
{ ERASE_METHOD_PTR(TSet, Iterator, (), ERASE_ARGUMENT_PACK(TSetIterator<T>)) },
{ ERASE_METHOD_PTR(TSet, Iterator, (), ERASE_ARGUMENT_PACK(TSetConstIterator<T>)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FColor>&), ERASE_ARGUMENT_PACK(TArray<FColor>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FColumnVisibilitySetting>&), ERASE_ARGUMENT_PACK(TArray<FColumnVisibilitySetting>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<UWidget>&), ERASE_ARGUMENT_PACK(TArray<UWidget>&)) },


{ ERASE_METHOD_PTR(TSubclassOf, opAssign, (const TSubclassOf<UUserWidgetExtension>&), ERASE_ARGUMENT_PACK(TSubclassOf<UUserWidgetExtension>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<UUserWidgetExtension>&), ERASE_ARGUMENT_PACK(TArray<UUserWidgetExtension>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<TObjectPtr<UAssetUserData>>&), ERASE_ARGUMENT_PACK(TArray<TObjectPtr<UAssetUserData>>&)) },


{ ERASE_METHOD_PTR(TSubclassOf, opAssign, (const TSubclassOf<USceneComponent>&), ERASE_ARGUMENT_PACK(TSubclassOf<USceneComponent>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<USceneComponent>&), ERASE_ARGUMENT_PACK(TArray<USceneComponent>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<int>&), ERASE_ARGUMENT_PACK(TArray<int>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<TObjectPtr<URuntimeVirtualTexture>>&), ERASE_ARGUMENT_PACK(TArray<TObjectPtr<URuntimeVirtualTexture>>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<TObjectPtr<UMaterialInterface>>&), ERASE_ARGUMENT_PACK(TArray<TObjectPtr<UMaterialInterface>>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<UMaterialInterface>&), ERASE_ARGUMENT_PACK(TArray<UMaterialInterface>&)) },


{ ERASE_METHOD_PTR(TSubclassOf, opAssign, (const TSubclassOf<UUserWidget>&), ERASE_ARGUMENT_PACK(TSubclassOf<UUserWidget>&)) },


{ ERASE_METHOD_PTR(TSoftClassPtr, opAssign, (const TSoftClassPtr<UVREditorInteractor>&), ERASE_ARGUMENT_PACK(TSoftClassPtr<UVREditorInteractor>&)) },


{ ERASE_METHOD_PTR(TSoftClassPtr, opAssign, (const TSoftClassPtr<AVREditorTeleporter>&), ERASE_ARGUMENT_PACK(TSoftClassPtr<AVREditorTeleporter>&)) },


{ ERASE_METHOD_PTR(TSoftClassPtr, opAssign, (const TSoftClassPtr<UVREditorModeBase>&), ERASE_ARGUMENT_PACK(TSoftClassPtr<UVREditorModeBase>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<UViewportInteractor>&), ERASE_ARGUMENT_PACK(TArray<UViewportInteractor>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<TObjectPtr<UActorComponent>>&), ERASE_ARGUMENT_PACK(TArray<TObjectPtr<UActorComponent>>&)) },


{ ERASE_METHOD_PTR(TWeakObjectPtr, opAssign, (const TWeakObjectPtr<AActor>&), ERASE_ARGUMENT_PACK(TWeakObjectPtr<AActor>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<TObjectPtr<UEditableGameplayTagQueryExpression>>&), ERASE_ARGUMENT_PACK(TArray<TObjectPtr<UEditableGameplayTagQueryExpression>>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FGameplayTagTableRow>&), ERASE_ARGUMENT_PACK(TArray<FGameplayTagTableRow>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FRestrictedGameplayTagTableRow>&), ERASE_ARGUMENT_PACK(TArray<FRestrictedGameplayTagTableRow>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FGameplayTagCategoryRemap>&), ERASE_ARGUMENT_PACK(TArray<FGameplayTagCategoryRemap>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FSoftObjectPath>&), ERASE_ARGUMENT_PACK(TArray<FSoftObjectPath>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FGameplayTagRedirect>&), ERASE_ARGUMENT_PACK(TArray<FGameplayTagRedirect>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FRestrictedConfigInfo>&), ERASE_ARGUMENT_PACK(TArray<FRestrictedConfigInfo>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FGameplayDebuggerCategoryConfig>&), ERASE_ARGUMENT_PACK(TArray<FGameplayDebuggerCategoryConfig>&)) },


{ ERASE_METHOD_PTR(TArray, opAssign, (const TArray<FGameplayDebuggerExtensionConfig>&), ERASE_ARGUMENT_PACK(TArray<FGameplayDebuggerExtensionConfig>&)) },


{ ERASE_METHOD_PTR(TSubclassOf, opAssign, (const TSubclassOf<UAISense_Blueprint>&), ERASE_ARGUMENT_PACK(TSubclassOf<UAISense_Blueprint>&)) },


{ ERASE_METHOD_PTR(TSubclassOf, opAssign, (const TSubclassOf<UAISense_Hearing>&), ERASE_ARGUMENT_PACK(TSubclassOf<UAISense_Hearing>&)) },


{ ERASE_METHOD_PTR(TSubclassOf, opAssign, (const TSubclassOf<UAISense_Sight>&), ERASE_ARGUMENT_PACK(TSubclassOf<UAISense_Sight>&)) },
*/