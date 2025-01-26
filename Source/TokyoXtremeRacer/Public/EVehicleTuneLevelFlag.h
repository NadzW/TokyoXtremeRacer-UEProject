#pragma once
#include "CoreMinimal.h"
#include "EVehicleTuneLevelFlag.generated.h"

UENUM()
enum class EVehicleTuneLevelFlag : int32 {
    None,
    Normal,
    Level1,
    Level2 = 4,
    Level3 = 8,
    Level4 = 16,
    Level5 = 32,
    Level6 = 64,
    Level7 = 128,
    Level8 = 256,
    Level9 = 512,
    Level10 = 1024,
    Level11 = 2048,
    Level12 = 4096,
};

