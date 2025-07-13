#pragma once
#include "CoreMinimal.h"
#include "ERecollectionRivalCategory.generated.h"

UENUM(BlueprintType)
enum class ERecollectionRivalCategory : uint8 {
    None,
    TeamMember,
    TeamLeader,
    Wanderer,
    Boss,
};

