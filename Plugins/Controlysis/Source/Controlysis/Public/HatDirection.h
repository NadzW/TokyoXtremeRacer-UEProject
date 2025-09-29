#pragma once
#include "CoreMinimal.h"
#include "HatDirection.generated.h"

UENUM(BlueprintType)
enum HatDirection {
    HatCenter,
    HatUp,
    HatRightUp,
    HatRight,
    HatRightDown,
    HatDown,
    HatLeftDown,
    HatLeft,
    HatLeftUp,
};

