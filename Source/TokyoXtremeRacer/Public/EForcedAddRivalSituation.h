#pragma once
#include "CoreMinimal.h"
#include "EForcedAddRivalSituation.generated.h"

UENUM(BlueprintType)
enum class EForcedAddRivalSituation : uint8 {
    None,
    Checked,
    Sp,
    Time,
    Distance,
};

