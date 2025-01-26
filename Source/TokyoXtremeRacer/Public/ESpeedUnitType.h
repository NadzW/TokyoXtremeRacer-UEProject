#pragma once
#include "CoreMinimal.h"
#include "ESpeedUnitType.generated.h"

UENUM(BlueprintType)
enum class ESpeedUnitType : uint8 {
    SPD_KILOMETER,
    SPD_MILE,
    Num,
};

