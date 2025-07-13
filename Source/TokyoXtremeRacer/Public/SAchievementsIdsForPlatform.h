#pragma once
#include "CoreMinimal.h"
#include "EAchievementsPlatform.h"
#include "SAchievementsIdsForPlatform.generated.h"

USTRUCT(BlueprintType)
struct TOKYOXTREMERACER_API FSAchievementsIdsForPlatform {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EAchievementsPlatform, FString> ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EAchievementsPlatform, FString> ProgressId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isUnLock;
    
    FSAchievementsIdsForPlatform();
};

