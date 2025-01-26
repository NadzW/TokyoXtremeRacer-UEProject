#pragma once
#include "CoreMinimal.h"
#include "EBodyType.generated.h"

UENUM(BlueprintType)
enum class EBodyType : uint8 {
    LIFHT_VEHICLE,
    CONVERTIBLE_CAR,
    COUPE,
    HATCHBACK,
    SEDAN,
    MINI_VAN,
    HARD_TOP,
    WAGON,
    SUV,
    Num,
    None,
};

