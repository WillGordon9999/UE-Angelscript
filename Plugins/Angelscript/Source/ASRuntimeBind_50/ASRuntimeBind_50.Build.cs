using System.IO;
using UnrealBuildTool;

namespace UnrealBuildTool.Rules
{
	public class ASRuntimeBind_50 : ModuleRules
	{
		public ASRuntimeBind_50(ReadOnlyTargetRules Target) : base(Target)
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
					"TakeRecorder",
					"StructUtilsEngine",
					"RigVM",
					"RigVMDeveloper",
					"ControlRig",
					"ControlRigDeveloper",
					"IKRig",
					"Niagara",
					"NiagaraAnimNotifies",
					"CacheTrackRecorder",
				}
			);
		}
	}
}
