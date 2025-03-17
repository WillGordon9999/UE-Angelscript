using System.IO;
using UnrealBuildTool;

namespace UnrealBuildTool.Rules
{
	public class ASRuntimeBind_30 : ModuleRules
	{
		public ASRuntimeBind_30(ReadOnlyTargetRules Target) : base(Target)
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
				}
			);

			PrivateDependencyModuleNames.AddRange
			(
				new string[]
				{
					"AudioMixer",
					"MediaAssets",
					"LevelSequence",
					"Foliage",
					"ImageWriteQueue",
					"Landscape",
					"ChaosCaching",
					"ChaosCloth",
					"ACLPlugin",
					"OnlineSubsystemUtils",
					"Engine",
					"CoreUObject",
					"MediaUtils",
					"MovieScene",
				}
			);
		}
	}
}
