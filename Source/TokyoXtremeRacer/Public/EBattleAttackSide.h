#pragma once
#include "CoreMinimal.h"
#include "EBattleAttackSide.generated.h"

UENUM(BlueprintType)
enum class EBattleAttackSide : uint8 {
    None,
    Player,
    Enemy,
    Num,
};

