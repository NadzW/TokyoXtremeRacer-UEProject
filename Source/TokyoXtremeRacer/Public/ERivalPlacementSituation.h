#pragma once
#include "CoreMinimal.h"
#include "ERivalPlacementSituation.generated.h"

UENUM(BlueprintType)
enum class ERivalPlacementSituation : uint8 {
    None,
    ManyTimes,
    Once,
};

