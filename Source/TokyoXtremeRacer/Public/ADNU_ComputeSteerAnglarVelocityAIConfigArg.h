#pragma once
#include "CoreMinimal.h"
#include "ADNU_ComputeSteerAnglarVelocityAIConfigArg.generated.h"

USTRUCT(BlueprintType)
struct TOKYOXTREMERACER_API FADNU_ComputeSteerAnglarVelocityAIConfigArg {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SlowSteerSpeedTargetSecond;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AngularSteerSpeedTargetSecond;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SlowSteerSpeedKmh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float QuickSteerSpeedKmh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxSteerAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NeautralSteerSlipAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxSteerAnglePerSpeedKmh;
    
    FADNU_ComputeSteerAnglarVelocityAIConfigArg();
};

