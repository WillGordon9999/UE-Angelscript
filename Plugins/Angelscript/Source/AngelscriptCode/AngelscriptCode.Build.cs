using System.IO;
using UnrealBuildTool;

namespace UnrealBuildTool.Rules
{
	public class AngelscriptCode : ModuleRules
	{
		public AngelscriptCode(ReadOnlyTargetRules Target) : base(Target)
		{
			PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

			/* Link to libraries used in core angelscript code */
			PublicDependencyModuleNames.AddRange(new string[]
			{
				"ApplicationCore",
				"Core",
				"CoreUObject",
				"Engine",
				"EngineSettings",
				"DeveloperSettings",
				"Json",
				"JsonUtilities",
				"GameplayTags",
				//WILL-EDIT
				
            });

			/* Link to libraries used in bindings */
			PrivateDependencyModuleNames.AddRange(new string[]
			{
				"AIModule",
				"NavigationSystem",
				"NetCore",
				"Landscape",
				"Networking",
				"Sockets",
				"InputCore",
				"SlateCore",
				"Slate",
				"UMG",
				"TraceLog",
				"AssetRegistry",
				"Projects",
				"PhysicsCore",
				"CoreOnline",
				//WILL-EDIT
				//"TypedElementFramework",
                //"TypedElementRuntime",
                //"AssetRegistry",
                ////"EngineSettings",
                //"MeshDescription",
                //"StaticMeshDescription",
                //"AudioExtensions",
                //"ClothingSystemRuntimeInterface",
                //"ToolMenus",
                //"InterchangeCore",
                //"MovieSceneCapture",
                ////"Engine",
                //"MovieSceneTools",
                //"SequencerCore",
                //"ContentBrowser",
                //"Sequencer",
                //"UMG",
                //"ViewportInteraction",
                //"VREditor",
                //"HeadMountedDisplay",
                //"LevelEditor",
                //"GameplayTasks",
                ////"GameplayTags",
                //"AIModule",
                //"ChaosSolverEngine",
                //"FieldSystemEngine",
                //"GeometryCollectionEngine",
                //"NavigationSystem",
                //"CinematicCamera",
                //"DataLayerEditor",
                //"SubobjectDataInterface",
                //"SubobjectEditor",
                //"SlateRHIRenderer",
                //"MovieScene",
                //"ContentBrowserData",
                //"InterchangeEngine",
                //"AssetTools",
                //"Kismet",
                //"AnimGraph",
                //"MovieSceneTracks",
                //"AudioLinkEngine",
                //"AudioMixer",
                //"MediaAssets",
                //"LevelSequence",
                //"UnrealEd",
                //"Foliage",
                //"Landscape",
                //"ChaosCaching",
                //"ChaosCloth",
                //"OnlineSubsystemUtils",
                //"VariantManagerContent",
                //"DatasmithContent",
                //"GLTFExporter",
                //"Persona",
                //"MRMesh",
                //"UMGEditor",
                //"ScriptableEditorWidgets",
                //"FunctionalTesting",
                //"ClothingSystemRuntimeNv",
                //"EnhancedInput",
                //"InputEditor",
                //"RigVM",
                //"RigVMDeveloper",
                //"ControlRig",
                //"RigVMEditor",
                //"ControlRigDeveloper",
                //"IKRig",
                //"Niagara",
                //"NiagaraEditor",
                //"NiagaraAnimNotifies",
                //"TakesCore",
                //"TakeRecorder",
                //"CacheTrackRecorder",
                //"ActorSequence",
                //"AudioAnalyzer",
                //"AudioSynesthesia",
                //"CableComponent",
                //"CustomMeshComponent",
                //"MetasoundFrontend",
                //"MetasoundEngine",
                //"AdvancedWidgets",
                //"AudioWidgets",
                //"MetasoundEditor",
                //"ProceduralMeshComponent",
                //"ResonanceAudio",
                //"Synthesis",
                //"InterchangeNodes",
                //"InterchangeFactoryNodes",
                //"InterchangePipelines",
                //"AnimationSharing",
                //"Blutility",
                //"DataValidation",
                //"TemplateSequence",
                //"GameplayCameras",
                //"Paper2D",
                //"PythonScriptPlugin",
                //"GeometryFramework",
                //"SequencerScripting",
                //"SequencerScriptingEditor",
                //"AssetTags",
                //"AudioCapture",
                //"GeometryCache",
                //"ModelingComponents",
                //"MobilePatchingUtils",
                //"InterchangeTests",
                //"SkeletalMeshEditor",
                //"StaticMeshEditor",
                //"SkeletalMeshModifiers",
                //"LevelSequenceEditor",
                //"ControlRigEditor",
                //"ImgMedia",
                //"MediaPlate",
                //"ObjectMixerEditor",
                //"TakeRecorderSources",
                ////"AngelscriptCode",
                ////"AngelscriptEditor",
                //"IKRigEditor",
            });

			if (Target.bBuildEditor)
			{
				PublicDependencyModuleNames.AddRange(new string[] 
				{
					"UnrealEd",
					"EditorSubsystem",
				});

				PrivateDependencyModuleNames.AddRange(new string[]
				{
					"UMGEditor",
				});
			}

            //var PluginPath = "../Plugins/Angelscript";
            //var PluginPath = "./Plugins/Angelscript";
            //var PluginPath = "./";

			/* Link to Angelscript */
			//PublicIncludePaths.Add(PluginPath + "/ThirdParty/include");
			//PublicIncludePaths.Add(PluginPath + "/ThirdParty/source");
		}
	}
}
