#pragma once
#include "CoreMinimal.h"
#include "ERivalDispSituation.generated.h"

UENUM(BlueprintType)
enum class ERivalDispSituation : uint8 {
    None,
    NotBattle,
    PlayerNotWin,
    PlayerWin,
};

