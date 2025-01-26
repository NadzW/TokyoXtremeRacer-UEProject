#pragma once
#include "CoreMinimal.h"
#include "EInputHatDirection.generated.h"

UENUM(BlueprintType)
enum class EInputHatDirection : uint8 {
    Center,
    Up,
    RightUp,
    Right,
    RightDown,
    Down,
    LeftDown,
    Left,
    LeftUp,
};

