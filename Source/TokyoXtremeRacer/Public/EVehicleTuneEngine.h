#pragma once
#include "CoreMinimal.h"
#include "EVehicleTuneEngine.generated.h"

UENUM(BlueprintType)
enum class EVehicleTuneEngine : uint8 {
    None,
    T_L6_Turbo,
    N_L6_Turbo,
    M_RE_Turbo,
    N_V6_Turbo,
    H_V6_Turbo,
    R_V10_NA,
    Num,
};

