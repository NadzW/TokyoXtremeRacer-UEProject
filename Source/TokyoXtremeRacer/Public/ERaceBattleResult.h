#pragma once
#include "CoreMinimal.h"
#include "ERaceBattleResult.generated.h"

UENUM(BlueprintType)
enum class ERaceBattleResult : uint8 {
    None,
    Win,
    Lose,
    Draw,
    Num,
};

