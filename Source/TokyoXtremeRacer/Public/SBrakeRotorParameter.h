#pragma once
#include "CoreMinimal.h"
#include "SBrakeRotorParameter.generated.h"

USTRUCT(BlueprintType)
struct TOKYOXTREMERACER_API FSBrakeRotorParameter {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double HeatCapacity;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double HeatDissipationTemp;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double MaxTemp;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double TempBeginsToChange;
    
    FSBrakeRotorParameter();
};

