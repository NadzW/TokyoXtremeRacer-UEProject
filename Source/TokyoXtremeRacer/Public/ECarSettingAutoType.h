#pragma once
#include "CoreMinimal.h"
#include "ECarSettingAutoType.generated.h"

UENUM(BlueprintType)
enum class ECarSettingAutoType : uint8 {
    None,
    Left,
    Center,
    Right,
    Num,
};

