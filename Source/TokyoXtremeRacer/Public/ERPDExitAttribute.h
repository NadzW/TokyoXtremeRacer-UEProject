#pragma once
#include "CoreMinimal.h"
#include "ERPDExitAttribute.generated.h"

UENUM(BlueprintType)
enum class ERPDExitAttribute : uint8 {
    RPDEXA_None,
    RPDEXA_Exit,
    RPDEXA_PaIn,
};

