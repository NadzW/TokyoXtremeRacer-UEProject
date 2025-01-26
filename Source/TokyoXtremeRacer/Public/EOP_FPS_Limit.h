#pragma once
#include "CoreMinimal.h"
#include "EOP_FPS_Limit.generated.h"

UENUM(BlueprintType)
enum class EOP_FPS_Limit : uint8 {
    OP_UNLIMITED,
    OP_NOT_CHANGABLE,
    OP_FPS_100,
    OP_FPS_120,
    OP_FPS_144,
    OP_FPS_180,
    Num,
};

