#pragma once
#include "CoreMinimal.h"
#include "SRoadPointDistanceInfo.generated.h"

USTRUCT(BlueprintType)
struct FSRoadPointDistanceInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RPDName;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Distance;
    
    TOKYOXTREMERACER_API FSRoadPointDistanceInfo();
};

