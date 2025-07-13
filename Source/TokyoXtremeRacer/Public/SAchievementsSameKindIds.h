#pragma once
#include "CoreMinimal.h"
#include "SAchievementsSameKindIds.generated.h"

USTRUCT(BlueprintType)
struct TOKYOXTREMERACER_API FSAchievementsSameKindIds {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> Ids;
    
    FSAchievementsSameKindIds();
};

