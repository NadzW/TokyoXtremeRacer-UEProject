#pragma once
#include "CoreMinimal.h"
#include "ERPDEnemyAttribute.generated.h"

UENUM(BlueprintType)
enum class ERPDEnemyAttribute : uint8 {
    RPDENA_None,
    RPDENA_EnemyExit,
    RPDENA_ZoneChange,
    RPDENA_NoWarp,
    RPDEA_MAX UMETA(Hidden),
};

