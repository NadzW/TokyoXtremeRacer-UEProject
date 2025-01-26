#pragma once
#include "CoreMinimal.h"
#include "ERivalBattleBaseParameterTbl.generated.h"

UENUM(BlueprintType)
enum class ERivalBattleBaseParameterTbl : uint8 {
    None,
    ForAttackMore,
    ForAttack,
    ForNormal,
    ForDefence,
    ForDefenceMore,
};

