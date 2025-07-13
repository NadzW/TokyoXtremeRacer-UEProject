#pragma once
#include "CoreMinimal.h"
#include "ERecollectionLockSituation.generated.h"

UENUM(BlueprintType)
enum class ERecollectionLockSituation : uint8 {
    None,
    Locked,
    OpenNotRead,
    Open,
};

