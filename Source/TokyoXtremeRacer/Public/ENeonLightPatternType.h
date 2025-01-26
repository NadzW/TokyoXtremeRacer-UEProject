#pragma once
#include "CoreMinimal.h"
#include "ENeonLightPatternType.generated.h"

UENUM(BlueprintType)
enum class ENeonLightPatternType : uint8 {
    Always,
    Rotation,
    LeftToRight,
    RightToLeft,
    Blinking,
};

