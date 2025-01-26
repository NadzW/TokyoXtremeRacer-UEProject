#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SSegmentSpeedTrapBaseRecord.generated.h"

USTRUCT(BlueprintType)
struct TOKYOXTREMERACER_API FSSegmentSpeedTrapBaseRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime Date;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Day;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CarNameId;
    
    FSSegmentSpeedTrapBaseRecord();
};

