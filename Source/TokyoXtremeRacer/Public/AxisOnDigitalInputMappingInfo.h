#pragma once
#include "CoreMinimal.h"
#include "EAnalogInputSignalPolarity.h"
#include "AxisOnDigitalInputMappingInfo.generated.h"

USTRUCT(BlueprintType)
struct FAxisOnDigitalInputMappingInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BaseValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAnalogInputSignalPolarity Polarity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Threshold;
    
    TOKYOXTREMERACER_API FAxisOnDigitalInputMappingInfo();
};

