using UnrealBuildTool;

public class TokyoXtremeRacer : ModuleRules {
    public TokyoXtremeRacer(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "AIModule",
            "CommonInput",
            "CommonUI",
            "Core",
            "CoreUObject",
            "DeveloperSettings",
            "Engine",
            "EnhancedInput",
            "GKOPSInterface",
            "GkOnlinePlatformSystem",
            "InputCore",
            "JsonUtilities",
            "MetasoundEngine",
            "Niagara",
            "SlateCore",
            "UMG",
        });
    }
}
