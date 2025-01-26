#pragma once
#include "CoreMinimal.h"
#include "ECourseExitShopTypeFlag.generated.h"

UENUM(BlueprintType)
enum class ECourseExitShopTypeFlag : uint8 {
    None,
    Car,
    Tuning,
    ParkingArea = 4,
    DressUp = 8,
};

