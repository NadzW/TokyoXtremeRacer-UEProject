#pragma once
#include "CoreMinimal.h"
#include "EOP_TextSpeed.generated.h"

UENUM(BlueprintType)
enum class EOP_TextSpeed : uint8 {
    OP_SLOW,
    OP_MIDDLE,
    OP_FAST,
    Num,
};

