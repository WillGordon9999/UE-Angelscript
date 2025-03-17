#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

class FASRuntimeBind_30Module : public FDefaultModuleImpl
{
public:
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
	static void Bind_SubmixEffectDynamicsProcessorPreset();
	static void Bind_SubmixEffectSubmixEQPreset();
	static void Bind_SubmixEffectReverbPreset();
	static void Bind_QuartzClockHandle();
	static void Bind_QuartzSubsystem();
	static void Bind_MediaTexture();
	static void Bind_FileMediaSource();
	static void Bind_MediaComponent();
	static void Bind_MediaPlayer();
	static void Bind_MediaPlaylist();
	static void Bind_MediaSoundComponent();
	static void Bind_LevelSequence();
	static void Bind_LevelSequenceBurnInOptions();
	static void Bind_LevelSequenceActor();
	static void Bind_LevelSequenceDirector();
	static void Bind_LevelSequencePlayer();
	static void Bind_LevelSequenceMediaController();
	static void Bind_ProceduralFoliageSpawner();
	static void Bind_Landscape();
	static void Bind_LandscapeComponent();
	static void Bind_LandscapeHeightfieldCollisionComponent();
	static void Bind_ChaosCacheManager();
	static void Bind_ChaosClothingInteractor();
	static void Bind_VoipListenerSynthComponent();
};
