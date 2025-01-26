#pragma once
#include "CoreMinimal.h"
#include "ERaceMode.generated.h"

UENUM(BlueprintType)
enum class ERaceMode : uint8 {
    Battle,
    Free,
    Replay,
    CoursePathViewer,
    CourseLightingViewer,
    Num,
    None,
};

