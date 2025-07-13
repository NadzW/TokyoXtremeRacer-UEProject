#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EAchievementsPlatform.h"
#include "EGkBuildPlatformType.h"
#include "BPFL_Achievement.generated.h"

UCLASS(Blueprintable)
class TOKYOXTREMERACER_API UBPFL_Achievement : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBPFL_Achievement();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EAchievementsPlatform BuildPlatformToAchievementsPlatform(const EGkBuildPlatformType BuildPlatformType);
    
};

