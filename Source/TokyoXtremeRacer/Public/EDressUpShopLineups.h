#pragma once
#include "CoreMinimal.h"
#include "EDressUpShopLineups.generated.h"

UENUM(BlueprintType)
enum class EDressUpShopLineups : uint8 {
    AeroParts,
    Exterior,
    TireWheel,
    Num,
    None,
};

