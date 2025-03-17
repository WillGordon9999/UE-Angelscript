using System.IO;
using UnrealBuildTool;

namespace UnrealBuildTool.Rules
{
	public class ASEditorBind_0 : ModuleRules
	{
		public ASEditorBind_0(ReadOnlyTargetRules Target) : base(Target)
		{
			PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

			PublicDependencyModuleNames.AddRange
			(
				new string[]
				{
					"Core",
					"CoreUObject",
					"Engine",
					"AngelscriptCode",
					"AngelscriptEditor",
				}
			);

			PrivateDependencyModuleNames.AddRange
			(
				new string[]
				{
					"SequenceRecorder",
					"MovieSceneTools",
					"SequencerCore",
					"ContentBrowser",
					"Sequencer",
					"VREditor",
					"ViewportInteraction",
					"LevelEditor",
					"FoliageEdit",
					"MaterialEditor",
					"CoreUObject",
					"InputCore",
					"HeadMountedDisplay",
					"Engine",
					"TypedElementFramework",
					"TypedElementRuntime",
				}
			);
		}
	}
}
