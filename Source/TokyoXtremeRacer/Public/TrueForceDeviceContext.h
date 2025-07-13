#pragma once
#include "CoreMinimal.h"
#include "TrueForceDeviceCapability.h"
#include "TrueForceDeviceContext.generated.h"

USTRUCT(BlueprintType)
struct FTrueForceDeviceContext {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTrueForceDeviceCapability Capability;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OperatingRangeDeg;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AngleRad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AngularVelocityRadPerSec;
    
    TOKYOXTREMERACER_API FTrueForceDeviceContext();
};

