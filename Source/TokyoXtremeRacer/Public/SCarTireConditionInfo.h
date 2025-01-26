#pragma once
#include "CoreMinimal.h"
#include "ECarTireCondition.h"
#include "SCarTireConditionInfo.generated.h"

USTRUCT(BlueprintType)
struct TOKYOXTREMERACER_API FSCarTireConditionInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECarTireCondition Condition;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Percentage;
    
    FSCarTireConditionInfo();
};

