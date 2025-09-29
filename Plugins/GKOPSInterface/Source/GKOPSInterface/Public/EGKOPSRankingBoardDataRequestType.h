#pragma once
#include "CoreMinimal.h"
#include "EGKOPSRankingBoardDataRequestType.generated.h"

UENUM(BlueprintType)
enum class EGKOPSRankingBoardDataRequestType : uint8 {
    Global,
    GlobalAroundUser,
    Friends,
    Num,
};

