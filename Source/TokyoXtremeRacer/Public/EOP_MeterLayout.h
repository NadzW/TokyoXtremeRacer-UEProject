#pragma once
#include "CoreMinimal.h"
#include "EOP_MeterLayout.generated.h"

UENUM(BlueprintType)
enum class EOP_MeterLayout : uint8 {
    OP_METER_LAYOUT_AROUND,
    OP_METER_LAYOUT_HORIZONTAL,
    OP_METER_LAYOUT_VERTICAL,
    Num,
};

