#pragma once
#include "CoreMinimal.h"
#include "SSegmentRecord.h"
#include "SSegmentRecords.generated.h"

USTRUCT(BlueprintType)
struct TOKYOXTREMERACER_API FSSegmentRecords {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<FSSegmentRecord> BestRecords;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<FSSegmentRecord> LatestRecords;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RecordTimes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Rank;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UpdateBest;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Distance;
    
    FSSegmentRecords();
};

