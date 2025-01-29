#include "ASRuntimeBind_80Module.h"
#include "AngelscriptBinds.h"
IMPLEMENT_MODULE(FASRuntimeBind_80Module, ASRuntimeBind_80);

void FASRuntimeBind_80Module::StartupModule()
{

	FAngelscriptBinds::RegisterBinds
	(
		(int32)FAngelscriptBinds::EOrder::Late,
		[]()
		{
			Bind_AudioMeter();
			Bind_AudioOscilloscope();
			Bind_AudioRadialSlider();
			Bind_AudioVectorscope();
			Bind_ProceduralMeshComponent();
			Bind_ResonanceAudioSpatializationSourceSettings();
			Bind_ModularSynthComponent();
			Bind_SourceEffectBitCrusherPreset();
			Bind_SourceEffectChorusPreset();
			Bind_SourceEffectConvolutionReverbPreset();
			Bind_SourceEffectDynamicsProcessorPreset();
			Bind_SourceEffectEnvelopeFollowerPreset();
			Bind_SourceEffectEQPreset();
			Bind_SourceEffectFilterPreset();
			Bind_SourceEffectFoldbackDistortionPreset();
			Bind_SourceEffectMidSideSpreaderPreset();
			Bind_SourceEffectMotionFilterPreset();
			Bind_SourceEffectPannerPreset();
			Bind_SourceEffectPhaserPreset();
			Bind_SourceEffectRingModulationPreset();
			Bind_SourceEffectSimpleDelayPreset();
			Bind_SourceEffectStereoDelayPreset();
			Bind_SourceEffectWaveShaperPreset();
			Bind_SubmixEffectConvolutionReverbPreset();
			Bind_SubmixEffectDelayPreset();
			Bind_SubmixEffectFilterPreset();
			Bind_SubmixEffectFlexiverbPreset();
			Bind_SubmixEffectMultibandCompressorPreset();
			Bind_SubmixEffectStereoDelayPreset();
			Bind_SubmixEffectStereoToQuadPreset();
			Bind_SubmixEffectTapDelayPreset();
			Bind_GranularSynth();
			Bind_SynthComponentMonoWaveTable();
			Bind_SynthComponentToneGenerator();
			Bind_SynthSamplePlayer();
			Bind_Synth2DSlider();
			Bind_SynthKnob();
			Bind_TemplateSequenceActor();
			Bind_CameraAnimationCameraModifier();
			Bind_GameplayCameraComponent();
			Bind_GameplayCameraSystemActor();
			Bind_GameplayCamerasSubsystem();
			Bind_PaperFlipbook();
			Bind_PaperFlipbookComponent();
			Bind_PaperGroupedSpriteComponent();
			Bind_PaperSpriteComponent();
			Bind_PaperTileMapComponent();
			Bind_PaperTerrainComponent();
			Bind_AnimNextComponent();
			Bind_MyActor();
		}
	);

}

void FASRuntimeBind_80Module::ShutdownModule()
{
}

