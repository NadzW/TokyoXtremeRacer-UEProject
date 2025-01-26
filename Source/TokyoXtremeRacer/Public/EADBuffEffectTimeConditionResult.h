#pragma once
#include "CoreMinimal.h"
#include "EADBuffEffectTimeConditionResult.generated.h"

UENUM(BlueprintType)
enum class EADBuffEffectTimeConditionResult : uint8 {
    EADBETCR_False,
    EADBETCR_True,
    EADBETCR_Lockout,
    EADBETCR_Cooldown,
};

