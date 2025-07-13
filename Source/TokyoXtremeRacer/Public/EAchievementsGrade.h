#pragma once
#include "CoreMinimal.h"
#include "EAchievementsGrade.generated.h"

UENUM(BlueprintType)
enum class EAchievementsGrade : uint8 {
    Hidden,
    Bronze,
    Silver,
    Gold,
    Platinum,
    Num,
};

