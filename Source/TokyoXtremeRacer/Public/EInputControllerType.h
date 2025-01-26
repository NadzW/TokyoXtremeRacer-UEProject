#pragma once
#include "CoreMinimal.h"
#include "EInputControllerType.generated.h"

UENUM(BlueprintType)
enum class EInputControllerType : uint8 {
    Unknown,
    Xbox360,
    XboxOne,
    PS3,
    PS4,
    NintendoSwitchPro,
    Virtual,
    PS5,
    AmazonLuna,
    GoogleStadia,
    NvidiaShield,
    NintendoSwitchJoyconLeft,
    NintendoSwitchJoyconRight,
    NintendoSwitchJoyconPair,
};

