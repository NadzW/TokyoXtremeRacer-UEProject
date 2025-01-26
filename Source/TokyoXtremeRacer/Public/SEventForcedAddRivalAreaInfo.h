#pragma once
#include "CoreMinimal.h"
#include "SEventForcedAddRivalInfo.h"
#include "SEventForcedAddRivalAreaInfo.generated.h"

USTRUCT(BlueprintType)
struct TOKYOXTREMERACER_API FSEventForcedAddRivalAreaInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSEventForcedAddRivalInfo> RivalInfos;
    
    FSEventForcedAddRivalAreaInfo();
};

