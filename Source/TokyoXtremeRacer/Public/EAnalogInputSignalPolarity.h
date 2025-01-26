#pragma once
#include "CoreMinimal.h"
#include "EAnalogInputSignalPolarity.generated.h"

UENUM(BlueprintType)
enum class EAnalogInputSignalPolarity : uint8 {
    None,
    Negative,
    Positive,
};

