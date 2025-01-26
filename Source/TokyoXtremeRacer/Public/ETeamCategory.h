#pragma once
#include "CoreMinimal.h"
#include "ETeamCategory.generated.h"

UENUM(BlueprintType)
enum class ETeamCategory : uint8 {
    Team,
    Boss,
    Wanderer,
    Num,
    None,
};

