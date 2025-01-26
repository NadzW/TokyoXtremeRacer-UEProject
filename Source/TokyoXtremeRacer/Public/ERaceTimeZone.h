#pragma once
#include "CoreMinimal.h"
#include "ERaceTimeZone.generated.h"

UENUM(BlueprintType)
enum class ERaceTimeZone : uint8 {
    RTZ_1,
    RTZ_2,
    RTZ_3,
    Num,
    None,
};

