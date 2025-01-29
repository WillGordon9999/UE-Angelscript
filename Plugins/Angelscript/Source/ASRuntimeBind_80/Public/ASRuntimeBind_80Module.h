#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

class FASRuntimeBind_80Module : public FDefaultModuleImpl
{
public:
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
	static void Bind_AudioMeter();
	static void Bind_AudioOscilloscope();
	static void Bind_AudioRadialSlider();
	static void Bind_AudioVectorscope();
	static void Bind_ProceduralMeshComponent();
	static void Bind_ResonanceAudioSpatializationSourceSettings();
	static void Bind_ModularSynthComponent();
	static void Bind_SourceEffectBitCrusherPreset();
	static void Bind_SourceEffectChorusPreset();
	static void Bind_SourceEffectConvolutionReverbPreset();
	static void Bind_SourceEffectDynamicsProcessorPreset();
	static void Bind_SourceEffectEnvelopeFollowerPreset();
	static void Bind_SourceEffectEQPreset();
	static void Bind_SourceEffectFilterPreset();
	static void Bind_SourceEffectFoldbackDistortionPreset();
	static void Bind_SourceEffectMidSideSpreaderPreset();
	static void Bind_SourceEffectMotionFilterPreset();
	static void Bind_SourceEffectPannerPreset();
	static void Bind_SourceEffectPhaserPreset();
	static void Bind_SourceEffectRingModulationPreset();
	static void Bind_SourceEffectSimpleDelayPreset();
	static void Bind_SourceEffectStereoDelayPreset();
	static void Bind_SourceEffectWaveShaperPreset();
	static void Bind_SubmixEffectConvolutionReverbPreset();
	static void Bind_SubmixEffectDelayPreset();
	static void Bind_SubmixEffectFilterPreset();
	static void Bind_SubmixEffectFlexiverbPreset();
	static void Bind_SubmixEffectMultibandCompressorPreset();
	static void Bind_SubmixEffectStereoDelayPreset();
	static void Bind_SubmixEffectStereoToQuadPreset();
	static void Bind_SubmixEffectTapDelayPreset();
	static void Bind_GranularSynth();
	static void Bind_SynthComponentMonoWaveTable();
	static void Bind_SynthComponentToneGenerator();
	static void Bind_SynthSamplePlayer();
	static void Bind_Synth2DSlider();
	static void Bind_SynthKnob();
	static void Bind_TemplateSequenceActor();
	static void Bind_CameraAnimationCameraModifier();
	static void Bind_GameplayCameraComponent();
	static void Bind_GameplayCameraSystemActor();
	static void Bind_GameplayCamerasSubsystem();
	static void Bind_PaperFlipbook();
	static void Bind_PaperFlipbookComponent();
	static void Bind_PaperGroupedSpriteComponent();
	static void Bind_PaperSpriteComponent();
	static void Bind_PaperTileMapComponent();
	static void Bind_PaperTerrainComponent();
	static void Bind_AnimNextComponent();
	static void Bind_MyActor();
};
