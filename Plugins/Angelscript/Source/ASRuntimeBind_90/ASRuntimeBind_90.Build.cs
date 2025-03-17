using System.IO;
using UnrealBuildTool;

namespace UnrealBuildTool.Rules
{
	public class ASRuntimeBind_90 : ModuleRules
	{
		public ASRuntimeBind_90(ReadOnlyTargetRules Target) : base(Target)
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
					"GameplayBehaviorsModule",
					"AngelPortV2",
					"TraceUtilities",
					"AnimationModifierLibrary",
					"MotionWarping",
					"GeometryCache",
					"ActorLayerUtilities",
					"SequencerScripting",
					"AndroidPermission",
					"AppleImageUtils",
					"Engine",
					"CoreUObject",
				}
			);
		}
	}
}
