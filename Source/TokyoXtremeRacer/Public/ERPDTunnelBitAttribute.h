#pragma once
#include "CoreMinimal.h"
#include "ERPDTunnelBitAttribute.generated.h"

UENUM(BlueprintType)
enum class ERPDTunnelBitAttribute : uint8 {
    RPDTBA_None,
    RPDTBA_TunnelLeft,
    RPDTBA_TunnelRight,
    RPDTBA_TunnelUp = 4,
};

