#pragma once
#include "CoreMinimal.h"
#include "ERivalAppearanceSituation.generated.h"

UENUM(BlueprintType)
enum class ERivalAppearanceSituation : uint8 {
    None,
    Course,
    ForcedAdd,
    ParkingArea,
    EventForcedAdd,
    ContinuousAdd,
};

