#pragma once
#include "CoreMinimal.h"
#include "EAbilityState.generated.h"

UENUM(BlueprintType)
enum class EAbilityState : uint8 {
    EASTATE_Standby,
    EASTATE_Active,
    EASTATE_CoolDown,
};

