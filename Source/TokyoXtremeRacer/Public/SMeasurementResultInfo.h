#pragma once
#include "CoreMinimal.h"
#include "SMeasurementResultInfo.generated.h"

USTRUCT(BlueprintType)
struct TOKYOXTREMERACER_API FSMeasurementResultInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumberOfTimesThisTime;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Result;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsNewRecord;
    
    FSMeasurementResultInfo();
};

