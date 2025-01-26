#pragma once
#include "CoreMinimal.h"
#include "SGarageVehicleCameraInfo.generated.h"

USTRUCT(BlueprintType)
struct TOKYOXTREMERACER_API FSGarageVehicleCameraInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double pitch;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Yaw;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double FOV;
    
    FSGarageVehicleCameraInfo();
};

