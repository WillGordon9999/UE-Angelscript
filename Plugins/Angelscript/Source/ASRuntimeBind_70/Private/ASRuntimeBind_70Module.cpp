#include "ASRuntimeBind_70Module.h"
#include "AngelscriptBinds.h"
IMPLEMENT_MODULE(FASRuntimeBind_70Module, ASRuntimeBind_70);

void FASRuntimeBind_70Module::StartupModule()
{

	FAngelscriptBinds::RegisterBinds
	(
		(int32)FAngelscriptBinds::EOrder::Late,
		[]()
		{
			Bind_CableComponent();
			Bind_CustomMeshComponent();
			Bind_MetasoundParameterPack();
			Bind_MetasoundGeneratorHandle();
			Bind_MetaSoundCacheSubsystem();
			Bind_MetaSoundOutputSubsystem();
			Bind_MetaSoundAssetSubsystem();
			Bind_MetaSoundPatchBuilder();
			Bind_MetaSoundSourceBuilder();
			Bind_MetaSoundBuilderSubsystem();
			Bind_RadialSlider();
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
		}
	);

}

void FASRuntimeBind_70Module::ShutdownModule()
{
}

