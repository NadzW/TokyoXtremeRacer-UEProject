#pragma once
#include "CoreMinimal.h"
#include "ETPBrakingWhenOtherCarType.generated.h"

UENUM(BlueprintType)
enum class ETPBrakingWhenOtherCarType : uint8 {
    ETPBWOT_None,
    ETPBWOT_FasterSpeedKmh,
};

