#pragma once
#include "CoreMinimal.h"
#include "EBattleType.generated.h"

UENUM(BlueprintType)
enum class EBattleType : uint8 {
    BT_NONE,
    BT_SP,
    BT_TIMEATTACK,
    Num,
};

