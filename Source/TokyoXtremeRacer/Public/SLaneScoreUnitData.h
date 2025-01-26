#pragma once
#include "CoreMinimal.h"
#include "SLaneScoreUnitData.generated.h"

USTRUCT(BlueprintType)
struct TOKYOXTREMERACER_API FSLaneScoreUnitData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LaneScore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EvaluationName;
    
    FSLaneScoreUnitData();
};

