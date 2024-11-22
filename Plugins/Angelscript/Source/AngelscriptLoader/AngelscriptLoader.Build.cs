using System.IO;
using UnrealBuildTool;

namespace UnrealBuildTool.Rules
{
	public class AngelscriptLoader : ModuleRules
	{
		public AngelscriptLoader(ReadOnlyTargetRules Target) : base(Target)
		{
			PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

			PublicDependencyModuleNames.AddRange(new string[]
			{
				"Core",
				"Engine",
				"AngelscriptCode",
				"AngelscriptNativeBinds",				
			});

			if (Target.bBuildEditor)
			{
				PublicDependencyModuleNames.AddRange(new string[] 
				{
					"AngelscriptEditor",
                    "AngelscriptNativeBindsEditor",
                });
			}
		}
	}
}
