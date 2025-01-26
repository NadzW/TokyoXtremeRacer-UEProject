#pragma once
#include "CoreMinimal.h"
#include "SRoadPointPositionInfo.generated.h"

USTRUCT(BlueprintType)
struct FSRoadPointPositionInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RPDName;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double RoadPointKey;
    
    TOKYOXTREMERACER_API FSRoadPointPositionInfo();
};

