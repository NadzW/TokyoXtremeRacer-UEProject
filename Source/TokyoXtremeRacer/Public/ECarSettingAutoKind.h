#pragma once
#include "CoreMinimal.h"
#include "ECarSettingAutoKind.generated.h"

UENUM(BlueprintType)
enum class ECarSettingAutoKind : uint8 {
    Speed,
    Handling,
    BrakeBalance,
    Num,
    None,
};

