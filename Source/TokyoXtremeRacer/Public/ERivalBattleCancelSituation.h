#pragma once
#include "CoreMinimal.h"
#include "ERivalBattleCancelSituation.generated.h"

UENUM(BlueprintType)
enum class ERivalBattleCancelSituation : uint8 {
    None,
    Allways,
    ifWinAndLose,
    IfLose,
};

