#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EGkOPSAchievementClearStatus.h"
#include "BPFL_GKOPSUtility.generated.h"

UCLASS(Blueprintable)
class GKONLINEPLATFORMSYSTEM_API UBPFL_GKOPSUtility : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBPFL_GKOPSUtility();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsAchivementUnlocked(const EGkOPSAchievementClearStatus ClearStatus);
    
};

