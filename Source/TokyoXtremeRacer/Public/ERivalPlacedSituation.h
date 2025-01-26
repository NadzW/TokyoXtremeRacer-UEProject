#pragma once
#include "CoreMinimal.h"
#include "ERivalPlacedSituation.generated.h"

UENUM(BlueprintType)
enum class ERivalPlacedSituation : uint8 {
    None,
    PutOut,
    PutOutForcedAdd,
    PutOutWin,
    PutAway,
    CleanedUp,
    Wait,
    PutOutLose,
};

