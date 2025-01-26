#pragma once
#include "CoreMinimal.h"
#include "SObstacleBrokenVehickeInfo.generated.h"

USTRUCT(BlueprintType)
struct TOKYOXTREMERACER_API FSObstacleBrokenVehickeInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CarType;
    
    FSObstacleBrokenVehickeInfo();
};

