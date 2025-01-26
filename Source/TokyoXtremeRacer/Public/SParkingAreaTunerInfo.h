#pragma once
#include "CoreMinimal.h"
#include "EParkingArea.h"
#include "EVehicleTuneKind.h"
#include "SParkingAreaTunerInfo.generated.h"

USTRUCT(BlueprintType)
struct TOKYOXTREMERACER_API FSParkingAreaTunerInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EParkingArea AppearsParkingArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVehicleTuneKind TuneKind;
    
    FSParkingAreaTunerInfo();
};

