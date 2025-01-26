#pragma once
#include "CoreMinimal.h"
#include "ECarDriveType.generated.h"

UENUM(BlueprintType)
enum class ECarDriveType : uint8 {
    FF,
    FR,
    MR,
    RR,
    AWD,
    Num,
};

