#pragma once
#include "CoreMinimal.h"
#include "EObstacleConstaractionSiteRange.generated.h"

UENUM(BlueprintType)
enum class EObstacleConstaractionSiteRange : uint8 {
    Range50m,
    Range75m,
    Range100m,
    Num,
    None,
};

