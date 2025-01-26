#pragma once
#include "CoreMinimal.h"
#include "SSegmentSpeedTrapBaseRecord.h"
#include "SSegmentRecord.generated.h"

USTRUCT(BlueprintType)
struct TOKYOXTREMERACER_API FSSegmentRecord : public FSSegmentSpeedTrapBaseRecord {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsWallHit;
    
    FSSegmentRecord();
};

