#pragma once
#include "CoreMinimal.h"
#include "EAchievementsPlatform.generated.h"

UENUM(BlueprintType)
enum class EAchievementsPlatform : uint8 {
    Steam,
    PS5,
    Epic,
    Num,
};

