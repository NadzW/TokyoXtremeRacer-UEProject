#pragma once
#include "CoreMinimal.h"
#include "ERivalBasicConditionPatterns.generated.h"

UENUM(BlueprintType)
enum class ERivalBasicConditionPatterns : uint8 {
    RBCP_AheadPlayer,
    RBCP_BehindPlayer,
    RBCP_WithinPlayer,
    RBCP_BattleStartSecond,
    RBCP_BattleContinueSecond,
    RBCP_RunDistanceLarger,
    RBCP_RunDistanceSmallar,
    RBCP_SPLarger,
    RBCP_SPSmallar,
    RBCP_DuringStraight,
    RBCP_DuringCorner,
    RBCP_CollidePlayer,
    RBCP_PassPlayer,
    RBCP_PassedByPlayer,
};

