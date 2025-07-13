#pragma once
#include "CoreMinimal.h"
#include "FfbPeriodicParam.generated.h"

USTRUCT(BlueprintType)
struct FFfbPeriodicParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Magnitude;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Offset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Phase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PeriodMs;
    
    TOKYOXTREMERACER_API FFfbPeriodicParam();
};

