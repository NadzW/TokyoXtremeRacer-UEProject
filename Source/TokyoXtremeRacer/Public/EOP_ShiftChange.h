#pragma once
#include "CoreMinimal.h"
#include "EOP_ShiftChange.generated.h"

UENUM(BlueprintType)
enum class EOP_ShiftChange : uint8 {
    OP_AT,
    OP_MT,
    Num,
};

