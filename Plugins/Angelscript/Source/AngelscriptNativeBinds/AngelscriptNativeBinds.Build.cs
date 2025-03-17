using System.IO;
using UnrealBuildTool;

namespace UnrealBuildTool.Rules
{
	public class AngelscriptNativeBinds : ModuleRules
	{
		public AngelscriptNativeBinds(ReadOnlyTargetRules Target) : base(Target)
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
					"ASRuntimeBind_0",
					"ASRuntimeBind_10",
					"ASRuntimeBind_20",
					"ASRuntimeBind_30",
					"ASRuntimeBind_40",
					"ASRuntimeBind_50",
                    "ASRuntimeBind_60",
                    "ASRuntimeBind_70",
                    "ASRuntimeBind_80",
                    "ASRuntimeBind_90",
					"ASRuntimeBind_100",
                }
			);
		}
	}
}
