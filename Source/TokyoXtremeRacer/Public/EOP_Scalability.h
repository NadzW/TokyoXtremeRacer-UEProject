#pragma once
#include "CoreMinimal.h"
#include "EOP_Scalability.generated.h"

UENUM(BlueprintType)
enum class EOP_Scalability : uint8 {
    OP_LOW,
    OP_MID,
    OP_HIGH,
    OP_EPIC,
    OP_CUSTOM,
    Num,
};

