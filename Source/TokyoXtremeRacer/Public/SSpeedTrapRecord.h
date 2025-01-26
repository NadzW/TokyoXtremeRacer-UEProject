#pragma once
#include "CoreMinimal.h"
#include "SSegmentSpeedTrapBaseRecord.h"
#include "SSpeedTrapRecord.generated.h"

USTRUCT(BlueprintType)
struct TOKYOXTREMERACER_API FSSpeedTrapRecord : public FSSegmentSpeedTrapBaseRecord {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Speed;
    
    FSSpeedTrapRecord();
};

