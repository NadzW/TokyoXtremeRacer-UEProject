#pragma once
#include "CoreMinimal.h"
#include "EOP_AspectRatio.generated.h"

UENUM(BlueprintType)
enum class EOP_AspectRatio : uint8 {
    OP_272_143,
    OP_16_9,
    OP_16_10,
    OP_5_3,
    OP_5_4,
    OP_4_3,
    Num,
};

