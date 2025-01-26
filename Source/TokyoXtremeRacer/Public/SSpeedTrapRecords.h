#pragma once
#include "CoreMinimal.h"
#include "SSpeedTrapRecord.h"
#include "SSpeedTrapRecords.generated.h"

USTRUCT(BlueprintType)
struct TOKYOXTREMERACER_API FSSpeedTrapRecords {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSpeedTrapRecord> BestRecords;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSpeedTrapRecord> LatestRecords;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RecordTimes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Rank;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UpdateBest;
    
    FSSpeedTrapRecords();
};

