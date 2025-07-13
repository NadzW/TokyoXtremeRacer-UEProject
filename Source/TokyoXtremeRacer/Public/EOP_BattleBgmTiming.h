#pragma once
#include "CoreMinimal.h"
#include "EOP_BattleBgmTiming.generated.h"

UENUM(BlueprintType)
enum class EOP_BattleBgmTiming : uint8 {
    OP_AfterBattleStart,
    OP_BeforeCountdown,
    Num,
};

