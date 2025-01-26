#pragma once
#include "CoreMinimal.h"
#include "ESkillTreeType.h"
#include "SPerkCategoryInfo.h"
#include "SPerkStatusInfo.h"
#include "SPerkInfo.generated.h"

USTRUCT(BlueprintType)
struct TOKYOXTREMERACER_API FSPerkInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FSPerkCategoryInfo> CategoryStatuses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESkillTreeType, FSPerkStatusInfo> AcquiredPerks;
    
    FSPerkInfo();
};

