#include "StreamlineLibrary.h"

UStreamlineLibrary::UStreamlineLibrary() {
}

EStreamlineFeatureSupport UStreamlineLibrary::QueryStreamlineFeatureSupport(EStreamlineFeature Feature) {
    return EStreamlineFeatureSupport::Supported;
}

bool UStreamlineLibrary::IsStreamlineFeatureSupported(EStreamlineFeature Feature) {
    return false;
}

FStreamlineFeatureRequirements UStreamlineLibrary::GetStreamlineFeatureInformation(EStreamlineFeature Feature) {
    return FStreamlineFeatureRequirements{};
}

void UStreamlineLibrary::BreakStreamlineFeatureRequirements(EStreamlineFeatureRequirementsFlags Requirements, bool& D3D11Supported, bool& D3D12Supported, bool& VulkanSupported, bool& VSyncOffRequired, bool& HardwareSchedulingRequired) {
}


