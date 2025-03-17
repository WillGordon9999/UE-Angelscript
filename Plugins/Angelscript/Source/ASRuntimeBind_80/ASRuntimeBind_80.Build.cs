using System.IO;
using UnrealBuildTool;

namespace UnrealBuildTool.Rules
{
	public class ASRuntimeBind_80 : ModuleRules
	{
		public ASRuntimeBind_80(ReadOnlyTargetRules Target) : base(Target)
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
					"Synthesis",
					"AnimationSharing",
					"InterchangeNodes",
					"InterchangeFactoryNodes",
					"VariantManager",
					"InterchangePipelines",
					"TemplateSequence",
					"GameplayCameras",
					"Paper2D",
					"AnimNext",
					"AudioExtensions",
					"Engine",
					"CoreUObject",
					"InterchangeCore",
					"CinematicCamera",
				}
			);
		}
	}
}
