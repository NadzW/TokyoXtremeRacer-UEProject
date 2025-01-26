#pragma once
#include "CoreMinimal.h"
#include "ECourseDrawLineType.generated.h"

UENUM(BlueprintType)
enum class ECourseDrawLineType : uint8 {
    ConstructionSite,
    TrafficJam,
    Segment,
    Num,
};

