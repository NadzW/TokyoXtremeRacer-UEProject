#pragma once
#include "CoreMinimal.h"
#include "ESkillTreeStatus.h"
#include "SPerkCategoryInfo.generated.h"

USTRUCT(BlueprintType)
struct TOKYOXTREMERACER_API FSPerkCategoryInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, ESkillTreeStatus> Statuses;
    
    FSPerkCategoryInfo();
};

