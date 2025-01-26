#pragma once
#include "CoreMinimal.h"
#include "ERivalSituation.generated.h"

UENUM(BlueprintType)
enum class ERivalSituation : uint8 {
    None,
    Win,
    Lose,
    Draw,
    Found,
    Heard,
};

