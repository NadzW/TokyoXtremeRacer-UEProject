#pragma once
#include "CoreMinimal.h"
#include "EDistanceUnitType.generated.h"

UENUM(BlueprintType)
enum class EDistanceUnitType : uint8 {
    DIST_CENTIMETER,
    DIST_METER,
    DIST_KILOMETER,
    DIST_INCH,
    DIST_FOOT,
    DIST_MILE,
    Num,
};

