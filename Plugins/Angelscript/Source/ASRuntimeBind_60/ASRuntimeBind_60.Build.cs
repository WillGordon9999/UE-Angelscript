using System.IO;
using UnrealBuildTool;

namespace UnrealBuildTool.Rules
{
	public class ASRuntimeBind_60 : ModuleRules
	{
		public ASRuntimeBind_60(ReadOnlyTargetRules Target) : base(Target)
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
					"AnimationSharing",
					"TemplateSequence",
					"GameplayCameras",
					"InterchangeNodes",
					"InterchangeFactoryNodes",
					"VariantManager",
					"InterchangePipelines",
					"Paper2D",
					"ActorSequence",
					"AudioSynesthesia",
				}
			);
		}
	}
}