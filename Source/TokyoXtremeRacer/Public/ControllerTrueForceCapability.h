#pragma once
#include "CoreMinimal.h"
#include "ControllerTrueForceCapability.generated.h"

USTRUCT(BlueprintType)
struct FControllerTrueForceCapability {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HasTrueForce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float KFMaxPeakTorqueInNm;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float KFMaxContinuousTorqueInNm;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float KFMaxDamping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TFMinSamplingRateInHz;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TFMaxSamplingRateInHz;
    
    TOKYOXTREMERACER_API FControllerTrueForceCapability();
};

