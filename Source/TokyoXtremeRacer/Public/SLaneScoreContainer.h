#pragma once
#include "CoreMinimal.h"
#include "SLaneScoreUnitData.h"
#include "SLaneScoreContainer.generated.h"

USTRUCT(BlueprintType)
struct TOKYOXTREMERACER_API FSLaneScoreContainer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSLaneScoreUnitData> LaneScore;
    
    FSLaneScoreContainer();
};

