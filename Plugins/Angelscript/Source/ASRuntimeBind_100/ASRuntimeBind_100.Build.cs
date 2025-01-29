using System.IO;
using UnrealBuildTool;

namespace UnrealBuildTool.Rules
{
	public class ASRuntimeBind_100 : ModuleRules
	{
		public ASRuntimeBind_100(ReadOnlyTargetRules Target) : base(Target)
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
					"AudioCapture",
					"GooglePAD",
					"ModelingComponents",
					"SkeletalMeshModifiers",
					"ImgMedia",
					"MediaPlate",
					"InterchangeTests",
					"AnimNextUncookedOnly",
					"AutomationUtils",
					"TargetingSystem",
				}
			);
		}
	}
}
