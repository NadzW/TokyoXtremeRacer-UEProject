#pragma once
#include "CoreMinimal.h"
#include "EDriveType.generated.h"

UENUM(BlueprintType)
enum class EDriveType : uint8 {
    DT_FF,
    DT_FR,
    DT_MR,
    DT_RR,
    DT_4WD,
    Num,
    None,
};

