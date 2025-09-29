#pragma once
#include "CoreMinimal.h"
#include "EDLCAvaliableStatus.generated.h"

UENUM(BlueprintType)
enum class EDLCAvaliableStatus : uint8 {
    EDLCAS_None,
    EDLCAS_Avaliable,
    EDLCAS_NotInstalled,
    EDLCAS_InvalidLicense,
    Num,
};

