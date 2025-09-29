#pragma once
#include "CoreMinimal.h"
#include "EGkOPSAchievementClearStatus.generated.h"

UENUM(BlueprintType)
enum class EGkOPSAchievementClearStatus : uint8 {
    EGKOPSACS_Locked,
    EGKOPSACS_Unlocked,
    EGKOPSACS_Num,
};

