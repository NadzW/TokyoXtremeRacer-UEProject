#pragma once
#include "CoreMinimal.h"
#include "EAutoDriveMode.generated.h"

UENUM(BlueprintType)
enum class EAutoDriveMode : uint8 {
    EADM_Crusing,
    EADM_Battle,
    EADM_PreBattle,
};

