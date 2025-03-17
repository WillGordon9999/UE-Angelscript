#include "ASRuntimeBind_30Module.h"
#include "AngelscriptBinds.h"
IMPLEMENT_MODULE(FASRuntimeBind_30Module, ASRuntimeBind_30);

void FASRuntimeBind_30Module::StartupModule()
{

	FAngelscriptBinds::RegisterBinds
	(
		(int32)FAngelscriptBinds::EOrder::Late,
		[]()
		{
			Bind_SubmixEffectDynamicsProcessorPreset();
			Bind_SubmixEffectSubmixEQPreset();
			Bind_SubmixEffectReverbPreset();
			Bind_QuartzClockHandle();
			Bind_QuartzSubsystem();
			Bind_MediaTexture();
			Bind_FileMediaSource();
			Bind_MediaComponent();
			Bind_MediaPlayer();
			Bind_MediaPlaylist();
			Bind_MediaSoundComponent();
			Bind_LevelSequence();
			Bind_LevelSequenceBurnInOptions();
			Bind_LevelSequenceActor();
			Bind_LevelSequenceDirector();
			Bind_LevelSequencePlayer();
			Bind_LevelSequenceMediaController();
			Bind_ProceduralFoliageSpawner();
			Bind_Landscape();
			Bind_LandscapeComponent();
			Bind_LandscapeHeightfieldCollisionComponent();
			Bind_ChaosCacheManager();
			Bind_ChaosClothingInteractor();
			Bind_VoipListenerSynthComponent();
		}
	);

}

void FASRuntimeBind_30Module::ShutdownModule()
{
}

