#pragma once
#include "CoreMinimal.h"
#include "ESkillTreeStatus.generated.h"

UENUM(BlueprintType)
enum class ESkillTreeStatus : uint8 {
    STS_CAN_NOT_UNLOCK,
    STS_LOCKED,
    STS_NOT_ACQUIRED,
    STS_ACQUIRED,
    Num,
    STS_NONE,
};

