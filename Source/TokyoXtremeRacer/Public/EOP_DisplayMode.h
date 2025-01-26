#pragma once
#include "CoreMinimal.h"
#include "EOP_DisplayMode.generated.h"

UENUM(BlueprintType)
enum class EOP_DisplayMode : uint8 {
    OP_FULL_SCREEN,
    OP_WINDOW,
    OP_BODERLESS_WINDOW,
    Num,
};

