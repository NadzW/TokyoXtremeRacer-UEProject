#pragma once
#include "CoreMinimal.h"
#include "EGkControllerDeviceClass.generated.h"

UENUM(BlueprintType)
enum class EGkControllerDeviceClass : uint8 {
    Unknown,
    XInput,
    PS4OnPC,
    PS5OnPC,
    DirectInput,
    PS5DualSense,
    PS5WheelGeneric,
    PS5WheelLogitech,
    PS5WheelHori,
    PS5WheelThrustmaster,
};

