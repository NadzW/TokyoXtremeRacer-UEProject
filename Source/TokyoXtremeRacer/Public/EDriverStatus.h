#pragma once
#include "CoreMinimal.h"
#include "EDriverStatus.generated.h"

UENUM(BlueprintType)
enum class EDriverStatus : uint8 {
    DS_SpiritPoint,
    DS_SpiritAttack,
    DS_SpiritDiffence,
    DS_Courage,
    DS_RecoverySpeed,
    DS_ShockResistance,
    Num,
};

