#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SSegmentRecords.h"
#include "SSpeedTrapRecords.h"
#include "SSegmentSpeedTrapRecords.generated.h"

USTRUCT(BlueprintType)
struct TOKYOXTREMERACER_API FSSegmentSpeedTrapRecords {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FSSegmentRecords> SegmentRecords;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FSSpeedTrapRecords> SpeedTrapRecords;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime LeaderboardUpdateDate;
    
    FSSegmentSpeedTrapRecords();
};

