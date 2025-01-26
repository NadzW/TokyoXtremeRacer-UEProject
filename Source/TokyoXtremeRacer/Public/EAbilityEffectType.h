#pragma once
#include "CoreMinimal.h"
#include "EAbilityEffectType.generated.h"

UENUM(BlueprintType)
enum class EAbilityEffectType : uint8 {
    EAET_OneShot,
    EAET_Continuous,
};

