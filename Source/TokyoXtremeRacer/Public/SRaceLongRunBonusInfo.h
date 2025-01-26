#pragma once
#include "CoreMinimal.h"
#include "SRaceLongRunBonusInfo.generated.h"

USTRUCT(BlueprintType)
struct TOKYOXTREMERACER_API FSRaceLongRunBonusInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Distance;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 BonusCp;
    
    FSRaceLongRunBonusInfo();
};

