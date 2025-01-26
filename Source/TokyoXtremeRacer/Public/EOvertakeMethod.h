#pragma once
#include "CoreMinimal.h"
#include "EOvertakeMethod.generated.h"

UENUM(BlueprintType)
enum class EOvertakeMethod : uint8 {
    OM_NotOvertake,
    OM_AggressiveStraight,
    OM_AggressiveAll,
};

