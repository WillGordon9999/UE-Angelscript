using System.IO;
using UnrealBuildTool;

namespace UnrealBuildTool.Rules
{
	public class ASRuntimeBind_70 : ModuleRules
	{
		public ASRuntimeBind_70(ReadOnlyTargetRules Target) : base(Target)
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
					"CableComponent",
					"ModularGameplay",
					"GameFeatures",
					"CustomMeshComponent",
					"GameplayAbilities",
					"GameplayStateTreeModule",
					"LocationServicesBPLibrary",
					"MetasoundFrontend",
					"MetasoundEngine",
					"AdvancedWidgets",
				}
			);
		}
	}
}
