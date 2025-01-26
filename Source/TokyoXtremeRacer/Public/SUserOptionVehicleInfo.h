#pragma once
#include "CoreMinimal.h"
#include "ECarTransmissionType.h"
#include "ECarViewType.h"
#include "SUserOptionVehicleInfo.generated.h"

USTRUCT(BlueprintType)
struct TOKYOXTREMERACER_API FSUserOptionVehicleInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECarTransmissionType TransmissionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECarViewType ViewType;
    
    FSUserOptionVehicleInfo();
};

