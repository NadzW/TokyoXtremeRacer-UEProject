#pragma once
#include "CoreMinimal.h"
#include "EADForcedLaneType.generated.h"

UENUM(BlueprintType)
enum class EADForcedLaneType : uint8 {
    EADFLT_Lane,
    EADFLT_CenterLine,
    EADFLT_SideWall,
};

