#pragma once
#include "CoreMinimal.h"
#include "EVehicleTuneKind.h"
#include "EVehicleTuneLevel.h"
#include "SUnlockTuneInfo.generated.h"

USTRUCT(BlueprintType)
struct TOKYOXTREMERACER_API FSUnlockTuneInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVehicleTuneKind Kind;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVehicleTuneLevel Level;
    
    FSUnlockTuneInfo();
};

