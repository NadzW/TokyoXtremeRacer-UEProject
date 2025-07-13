#pragma once
#include "CoreMinimal.h"
#include "UWrappedDLSSSupport.generated.h"

UENUM(BlueprintType)
enum class UWrappedDLSSSupport : uint8 {
    Supported,
    NotSupported,
    NotSupportedIncompatibleHardware,
    NotSupportedDriverOutOfDate,
    NotSupportedOperatingSystemOutOfDate,
    NotSupportedByPlatformAtBuildTime,
    NotSupportedIncompatibleAPICaptureToolActive,
};

