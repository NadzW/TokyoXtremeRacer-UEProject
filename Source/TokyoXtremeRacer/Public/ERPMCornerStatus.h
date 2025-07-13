#pragma once
#include "CoreMinimal.h"
#include "ERPMCornerStatus.generated.h"

UENUM(BlueprintType)
enum class ERPMCornerStatus : uint8 {
    None,
    CornerBegin,
    DuringCorner,
    CornerEnd = 4,
};

