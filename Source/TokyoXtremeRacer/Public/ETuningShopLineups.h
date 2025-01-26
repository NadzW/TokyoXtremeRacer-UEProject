#pragma once
#include "CoreMinimal.h"
#include "ETuningShopLineups.generated.h"

UENUM(BlueprintType)
enum class ETuningShopLineups : uint8 {
    Power,
    Powertrain,
    Body,
    Num,
    None,
};

