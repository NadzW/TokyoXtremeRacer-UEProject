#pragma once
#include "CoreMinimal.h"
#include "EBattleCancelTypeInfo.generated.h"

UENUM(BlueprintType)
enum class EBattleCancelTypeInfo : uint8 {
    TheOpponentIsDifferent,
    DoesntMeetTheCriteria,
    UnableToStartABattle,
    Num,
    None,
};

