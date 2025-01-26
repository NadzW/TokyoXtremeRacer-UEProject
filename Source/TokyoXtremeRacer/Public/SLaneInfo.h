#pragma once
#include "CoreMinimal.h"
#include "SLaneInfo.generated.h"

USTRUCT(BlueprintType)
struct TOKYOXTREMERACER_API FSLaneInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RPDName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LaneIndexInRPD;
    
    FSLaneInfo();
};

