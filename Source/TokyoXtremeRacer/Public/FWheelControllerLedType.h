#pragma once
#include "CoreMinimal.h"
#include "FWheelControllerLedType.generated.h"

UENUM(BlueprintType)
enum class FWheelControllerLedType : uint8 {
    Invalid,
    RGB888,
    MONO8,
    MONO1,
};

