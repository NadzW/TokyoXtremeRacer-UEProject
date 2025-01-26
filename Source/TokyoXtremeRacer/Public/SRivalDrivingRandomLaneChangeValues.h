#pragma once
#include "CoreMinimal.h"
#include "ERivalRandomLaneChange.h"
#include "SRivalDrivingValuesBase.h"
#include "SRivalDrivingRandomLaneChangeValues.generated.h"

USTRUCT(BlueprintType)
struct TOKYOXTREMERACER_API FSRivalDrivingRandomLaneChangeValues : public FSRivalDrivingValuesBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERivalRandomLaneChange Key;
    
    FSRivalDrivingRandomLaneChangeValues();
};

