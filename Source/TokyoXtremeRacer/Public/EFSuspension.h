#pragma once
#include "CoreMinimal.h"
#include "EFSuspension.generated.h"

UENUM(BlueprintType)
enum class EFSuspension : uint8 {
    STRUT,
    MC_PHERSON,
    DOUBLE_WISHBONE,
    MULTI_LINK,
    Num,
    None,
};

