#pragma once
#include "CoreMinimal.h"
#include "EGenericControllerType.generated.h"

UENUM(BlueprintType)
enum class EGenericControllerType : uint8 {
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

