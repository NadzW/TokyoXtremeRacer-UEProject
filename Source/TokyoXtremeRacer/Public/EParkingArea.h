#pragma once
#include "CoreMinimal.h"
#include "EParkingArea.generated.h"

UENUM(BlueprintType)
enum class EParkingArea : uint8 {
    PA_6_9_Hakozaki,
    PA_11_Shibaura,
    PA_B_Daikoku,
    PA_1_Heiwajima_Inbound,
    PA_1_Heiwajima_Outbound,
    PA_9_Tatsumi,
    Num,
    None,
};

