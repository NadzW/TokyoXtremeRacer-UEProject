#pragma once
#include "CoreMinimal.h"
#include "ERaceDayOfWeek.generated.h"

UENUM(BlueprintType)
enum class ERaceDayOfWeek : uint8 {
    Sun,
    Mon,
    Tue,
    Wed,
    Thu,
    Fri,
    Sat,
    Num,
    None,
};

