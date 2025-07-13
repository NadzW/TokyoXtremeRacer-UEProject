#pragma once
#include "CoreMinimal.h"
#include "ERivalSpecEffectKind.generated.h"

UENUM(BlueprintType)
enum class ERivalSpecEffectKind : uint8 {
    RSEK_Torque,
    RSEK_Grip,
    RSEK_PlayEffect,
    RSEK_RecoverySP,
    RSEK_CheckPlayer,
    RSEK_NoCheckPlayer,
    RSEK_CheckCar,
};

