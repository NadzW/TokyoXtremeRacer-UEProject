#pragma once
#include "CoreMinimal.h"
#include "EBrakeCaliperType.generated.h"

UENUM(BlueprintType)
enum class EBrakeCaliperType : uint8 {
    Normal,
    TwoPot,
    FourPot,
    SixPot,
    EightPot,
    Twin,
    Num,
};

