#pragma once
#include "CoreMinimal.h"
#include "ENeonLightPositionType.generated.h"

UENUM(BlueprintType)
enum class ENeonLightPositionType : uint8 {
    Front,
    Rear,
    Left,
    Right,
    Num,
};

