#pragma once
#include "CoreMinimal.h"
#include "SRaceRivalParkingAreaPositionInfo.generated.h"

USTRUCT(BlueprintType)
struct TOKYOXTREMERACER_API FSRaceRivalParkingAreaPositionInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, int32> RivalPositionIds;
    
    FSRaceRivalParkingAreaPositionInfo();
};

