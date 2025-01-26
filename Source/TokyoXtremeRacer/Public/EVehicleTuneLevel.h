#pragma once
#include "CoreMinimal.h"
#include "EVehicleTuneLevel.generated.h"

UENUM(BlueprintType)
enum class EVehicleTuneLevel : uint8 {
    None,
    Normal,
    Level1,
    Level2,
    Level3,
    Level4,
    Level5,
    Level6,
    Level7,
    Level8,
    Level9,
    Level10,
    Level11,
    Level12,
    Num,
};

