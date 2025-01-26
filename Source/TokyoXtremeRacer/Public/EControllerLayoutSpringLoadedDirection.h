#pragma once
#include "CoreMinimal.h"
#include "EControllerLayoutSpringLoadedDirection.generated.h"

UENUM(BlueprintType)
enum class EControllerLayoutSpringLoadedDirection : uint8 {
    Unknown,
    Bidirectional,
    PushedToPositive,
    PushedToNegative,
};

