#pragma once
#include "CoreMinimal.h"
#include "EUnitOfMeasurement.generated.h"

UENUM(BlueprintType)
enum class EUnitOfMeasurement : uint8 {
    UNIT_SI,
    UNIT_USCS,
    Num,
};

