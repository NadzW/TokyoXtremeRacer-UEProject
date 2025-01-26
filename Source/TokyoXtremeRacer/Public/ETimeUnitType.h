#pragma once
#include "CoreMinimal.h"
#include "ETimeUnitType.generated.h"

UENUM(BlueprintType)
enum class ETimeUnitType : uint8 {
    TIME_SECOND,
    TIME_MINUTE,
    TIME_HOUR,
    TIME_DAY,
    TIME_MONTH,
    TIME_YEAR,
    Num,
};

