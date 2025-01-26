#pragma once
#include "CoreMinimal.h"
#include "ERPDInfoAttribute.generated.h"

UENUM(BlueprintType)
enum class ERPDInfoAttribute : uint8 {
    RPDIA_None,
    RPDIA_Entry,
    RPDIA_Exit,
    RPDIA_PaEntry,
    RPDIA_PaExit,
    RPDIA_CantLaneChange,
    RPDIA_SpExit,
};

