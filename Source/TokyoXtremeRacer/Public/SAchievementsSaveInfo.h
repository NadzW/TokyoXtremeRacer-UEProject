#pragma once
#include "CoreMinimal.h"
#include "SAchievementsSaveInfo.generated.h"

USTRUCT(BlueprintType)
struct TOKYOXTREMERACER_API FSAchievementsSaveInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> UnlockIds;
    
    FSAchievementsSaveInfo();
};

