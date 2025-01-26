#pragma once
#include "CoreMinimal.h"
#include "EOP_Upscaling_Quality.generated.h"

UENUM(BlueprintType)
enum class EOP_Upscaling_Quality : uint8 {
    OP_Native,
    OP_Quality,
    OP_Balance,
    OP_Performance,
    OP_Ultra_Performance,
    OP_CUSTOM,
    Num,
};

