using UnrealBuildTool;
using System.IO;



public class WordListSearch : ModuleRules
{
	
	private string ModulePath
	{
		get { return ModuleDirectory; }
	}


	
	public WordListSearch(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
	
		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine"});

		//if (Target.bBuildEditor)
		//{
		//	PrivateDependencyModuleNames.AddRange(new string[] { "UnrealEd" });
		//}

	}
}
