#pragma once
#include "CoreMinimal.h"
#include "ERPDCreaseWeightAttribute.generated.h"

UENUM(BlueprintType)
enum class ERPDCreaseWeightAttribute : uint8 {
    RPDCWA_Asphalt,
    RPDCWA_Gap = 20,
    RPDCWA_Tunnel = 30,
    RPDCWA_TunnelTollWall,
    RPDCWA_TunnelCeiling,
    RPDCWA_TunnelUnknown,
};

