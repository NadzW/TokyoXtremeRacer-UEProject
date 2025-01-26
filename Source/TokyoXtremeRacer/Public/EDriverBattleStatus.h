#pragma once
#include "CoreMinimal.h"
#include "EDriverBattleStatus.generated.h"

UENUM(BlueprintType)
enum class EDriverBattleStatus : uint8 {
    None,
    DealingDamage,
    Damaged,
    Num,
};

