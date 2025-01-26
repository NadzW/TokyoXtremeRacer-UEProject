#pragma once
#include "CoreMinimal.h"
#include "ECarMaker.generated.h"

UENUM(BlueprintType)
enum class ECarMaker : uint8 {
    DAIHATSU,
    HONDA,
    MAZDA,
    MITSUBISHI,
    NISSAN,
    SUBARU,
    SUZUKI,
    TOYOTA,
    Num,
    None,
};

