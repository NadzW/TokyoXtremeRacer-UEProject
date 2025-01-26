#pragma once
#include "CoreMinimal.h"
#include "EMeasurementType.generated.h"

UENUM(BlueprintType)
enum class EMeasurementType : uint8 {
    Segment,
    SpeedTrap,
    Num,
    None,
};

