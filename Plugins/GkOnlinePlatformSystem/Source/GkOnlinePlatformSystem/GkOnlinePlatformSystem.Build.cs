using UnrealBuildTool;

public class GkOnlinePlatformSystem : ModuleRules {
    public GkOnlinePlatformSystem(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        CppCompileWarningSettings.ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "Engine",
            "GKOPSInterface",
        });
    }
}
