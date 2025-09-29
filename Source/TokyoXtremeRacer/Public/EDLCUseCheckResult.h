#pragma once
#include "CoreMinimal.h"
#include "EDLCUseCheckResult.generated.h"

UENUM(BlueprintType)
enum class EDLCUseCheckResult : uint8 {
    EDLCUCR_None,
    EDLCUCR_NotEnoughDLC,
    EDLCUCR_OK,
    Num,
};

