#pragma once
#include "CoreMinimal.h"
#include "EInfoTextType.generated.h"

UENUM(BlueprintType)
enum class EInfoTextType : uint8 {
    AUTO_PILOT,
    WRONG_WAY,
    BATTLE_CANCEL,
};

