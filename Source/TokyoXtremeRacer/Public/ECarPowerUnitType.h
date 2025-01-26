#pragma once
#include "CoreMinimal.h"
#include "ECarPowerUnitType.generated.h"

UENUM(BlueprintType)
enum class ECarPowerUnitType : uint8 {
    ICE_Inline,
    ICE_V,
    ICE_Horizontally,
    ICE_Rotary,
    ICE_W,
    Num,
    None,
};

