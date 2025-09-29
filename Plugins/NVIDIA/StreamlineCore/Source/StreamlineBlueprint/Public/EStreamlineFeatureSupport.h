#pragma once
#include "CoreMinimal.h"
#include "EStreamlineFeatureSupport.generated.h"

UENUM(BlueprintType)
enum class EStreamlineFeatureSupport : uint8 {
    Supported,
    NotSupported,
    NotSupportedIncompatibleHardware,
    NotSupportedDriverOutOfDate,
    NotSupportedOperatingSystemOutOfDate,
    NotSupportedHardewareSchedulingDisabled,
    NotSupportedByRHI,
    NotSupportedByPlatformAtBuildTime,
    NotSupportedIncompatibleAPICaptureToolActive,
};

