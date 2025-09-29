#pragma once
#include "CoreMinimal.h"
#include "EGKOPSRankingBoardScoreMethodType.generated.h"

UENUM(BlueprintType)
enum class EGKOPSRankingBoardScoreMethodType : uint8 {
    None,
    KeepBest,
    ForceUpdate,
    Num,
};

