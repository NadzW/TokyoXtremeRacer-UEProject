#pragma once
#include "CoreMinimal.h"
#include "EWeightUnitType.generated.h"

UENUM(BlueprintType)
enum class EWeightUnitType : uint8 {
    WT_GRAM,
    WT_KILOGRAM,
    WT_OUNCE,
    WT_POUND,
    Num,
};

