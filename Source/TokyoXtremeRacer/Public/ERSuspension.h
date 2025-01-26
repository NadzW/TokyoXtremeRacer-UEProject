#pragma once
#include "CoreMinimal.h"
#include "ERSuspension.generated.h"

UENUM(BlueprintType)
enum class ERSuspension : uint8 {
    STRUT,
    MC_PHERSON,
    DOUBLE_WISHBONE,
    TORSION_BEAM,
    AXLE,
    WISHBONE,
    MULTI_LINK,
    SEMI_TRAILING_ARM,
    Num,
    None,
};

