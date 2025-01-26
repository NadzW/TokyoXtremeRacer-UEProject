#pragma once
#include "CoreMinimal.h"
#include "ERivalRandomLaneChange.generated.h"

UENUM(BlueprintType)
enum class ERivalRandomLaneChange : uint8 {
    RRLC_None,
    RRLC_RandomOccasionally,
    RRLC_RandomOften,
};

