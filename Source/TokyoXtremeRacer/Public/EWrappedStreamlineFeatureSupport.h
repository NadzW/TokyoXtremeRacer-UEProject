#pragma once
#include "CoreMinimal.h"
#include "EWrappedStreamlineFeatureSupport.generated.h"

UENUM(BlueprintType)
enum class EWrappedStreamlineFeatureSupport : uint8 {
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

