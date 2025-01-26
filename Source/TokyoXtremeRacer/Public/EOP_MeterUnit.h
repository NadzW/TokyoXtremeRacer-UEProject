#pragma once
#include "CoreMinimal.h"
#include "EOP_MeterUnit.generated.h"

UENUM(BlueprintType)
enum class EOP_MeterUnit : uint8 {
    OP_METERS,
    OP_MILES,
    Num,
};

