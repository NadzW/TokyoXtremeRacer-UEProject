#pragma once
#include "CoreMinimal.h"
#include "SLaneChangeEvaluateOrder.generated.h"

USTRUCT(BlueprintType)
struct TOKYOXTREMERACER_API FSLaneChangeEvaluateOrder {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName RPDName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 LaneIndex;
    
    FSLaneChangeEvaluateOrder();
};

