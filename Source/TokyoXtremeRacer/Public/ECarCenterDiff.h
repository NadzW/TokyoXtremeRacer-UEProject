#pragma once
#include "CoreMinimal.h"
#include "ECarCenterDiff.generated.h"

UENUM(BlueprintType)
enum class ECarCenterDiff : uint8 {
    None,
    Other,
    DCCD,
    ACD,
    ATTESAETS,
    Num,
};

