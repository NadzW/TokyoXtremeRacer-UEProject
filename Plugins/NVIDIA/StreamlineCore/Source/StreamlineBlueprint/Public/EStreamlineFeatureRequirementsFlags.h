#pragma once
#include "CoreMinimal.h"
#include "EStreamlineFeatureRequirementsFlags.generated.h"

UENUM(BlueprintType)
enum class EStreamlineFeatureRequirementsFlags : uint8 {
    None,
    D3D11Supported,
    D3D12Supported,
    VulkanSupported = 4,
    VSyncOffRequired = 8,
    HardwareSchedulingRequired = 16,
};

