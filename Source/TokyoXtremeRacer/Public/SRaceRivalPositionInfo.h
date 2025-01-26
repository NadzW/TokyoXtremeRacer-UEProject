#pragma once
#include "CoreMinimal.h"
#include "SRacePositionInfo.h"
#include "SRaceRivalPositionInfo.generated.h"

USTRUCT(BlueprintType)
struct TOKYOXTREMERACER_API FSRaceRivalPositionInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FSRacePositionInfo> RivalPositionInfos;
    
    FSRaceRivalPositionInfo();
};

