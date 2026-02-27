using UnrealBuildTool;

public class StreamlineDLSSGBlueprint : ModuleRules {
    public StreamlineDLSSGBlueprint(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "Engine",
            "StreamlineBlueprint",
        });
    }
}
