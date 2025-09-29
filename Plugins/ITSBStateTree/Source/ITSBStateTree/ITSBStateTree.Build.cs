using UnrealBuildTool;

public class ITSBStateTree : ModuleRules {
    public ITSBStateTree(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        CppCompileWarningSettings.ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "Engine",
            "GameplayStateTreeModule",
            "SbAIModules",
            "AIModule",
            "GameplayTasks",
            "NavigationSystem",
            "StateTreeModule",
        });
    }
}
