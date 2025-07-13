#pragma once
#include "CoreMinimal.h"
#include "TrueForceDeviceCapability.generated.h"

USTRUCT(BlueprintType)
struct FTrueForceDeviceCapability {
    GENERATED_BODY()
public:
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
    
    TOKYOXTREMERACER_API FTrueForceDeviceCapability();
};

