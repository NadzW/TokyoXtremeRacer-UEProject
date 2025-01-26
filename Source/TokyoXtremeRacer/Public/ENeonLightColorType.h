#pragma once
#include "CoreMinimal.h"
#include "ENeonLightColorType.generated.h"

UENUM(BlueprintType)
enum class ENeonLightColorType : uint8 {
    Fixed,
    Specified,
    Flash16,
    Strobe,
    Smooth,
};

