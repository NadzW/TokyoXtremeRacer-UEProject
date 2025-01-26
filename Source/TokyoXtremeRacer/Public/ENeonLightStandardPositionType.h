#pragma once
#include "CoreMinimal.h"
#include "ENeonLightStandardPositionType.generated.h"

UENUM(BlueprintType)
enum class ENeonLightStandardPositionType : uint8 {
    LeftFront,
    LeftSideFront,
    LeftSideRear,
    LeftRear,
    Num,
};

