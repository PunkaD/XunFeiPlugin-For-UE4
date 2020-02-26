// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

using System.IO;

public class XunFeiPlugin : ModuleRules
{
    private string ModulePath       //得到当前路径
    {
        get { return ModuleDirectory; }
    }

	public XunFeiPlugin(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
		
		PublicIncludePaths.AddRange(
			new string[] {
                Path.Combine(ModulePath,"Public")
				// ... add public include paths required here ...
			}
			);
				
		
		PrivateIncludePaths.AddRange(
			new string[] {
                Path.Combine(ModulePath,"Private")
				// ... add other private include paths required here ...
			}
			);
			
		
		PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",
                "Json"
				// ... add other public dependencies that you statically link with here ...
			}
			);
			
		
		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				"CoreUObject",
				"Engine",
				"Slate",
				"SlateCore",
				// ... add private dependencies that you statically link with here ...	
			}
			);
		
		
		DynamicallyLoadedModuleNames.AddRange(
			new string[]
			{
				// ... add any modules that your module loads dynamically here ...
			}
			);

        //第三方库引用
        string XunFeiSDKIncludePath = ModulePath + "/ThirdParty/include/";
        string XunFeiSDKLibraryPath = ModulePath + "/ThirdParty/libs/";
        string XunFeiSDKImportLibraryName = Path.Combine(XunFeiSDKLibraryPath, "msc_x64.lib");

        PublicIncludePaths.Add(XunFeiSDKIncludePath);
        PublicLibraryPaths.Add(XunFeiSDKLibraryPath);
        PublicAdditionalLibraries.Add(XunFeiSDKImportLibraryName);
	}
}
