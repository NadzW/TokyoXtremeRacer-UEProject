#pragma once
#include "CoreMinimal.h"
#include "EOP_Resolution.generated.h"

UENUM(BlueprintType)
enum class EOP_Resolution : uint8 {
    OP_1280x720,
    OP_1280x800,
    OP_1280x1024,
    OP_1366x768,
    OP_1440x900,
    OP_1600x900,
    OP_1680x1050,
    OP_1920x1080,
    OP_2560x1600,
    OP_2560x1440,
    OP_2560x1080,
    OP_2880x1800,
    OP_3440x1440,
    OP_3840x2160,
    OP_5120x1440,
    Num,
};

