#pragma once
#include "CoreMinimal.h"
#include "EDLCPlatform.generated.h"

UENUM(BlueprintType)
enum class EDLCPlatform : uint8 {
    EDLCP_None,
    EDLCP_Steam,
    EDLCP_PS5,
    EDLCP_Switch2,
    Num,
};

