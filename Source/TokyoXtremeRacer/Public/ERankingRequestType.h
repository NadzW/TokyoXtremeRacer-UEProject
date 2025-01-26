#pragma once
#include "CoreMinimal.h"
#include "ERankingRequestType.generated.h"

UENUM(BlueprintType)
enum class ERankingRequestType : uint8 {
    Player,
    AroundRank,
    AroundPlayer,
    Num,
};

