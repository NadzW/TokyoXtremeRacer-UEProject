#include "StreamlineLibraryDeepDVC.h"

UStreamlineLibraryDeepDVC::UStreamlineLibraryDeepDVC() {
}

void UStreamlineLibraryDeepDVC::SetDeepDVCSaturationBoost(float Intensity) {
}

void UStreamlineLibraryDeepDVC::SetDeepDVCMode(EStreamlineDeepDVCMode DeepDVCMode) {
}

void UStreamlineLibraryDeepDVC::SetDeepDVCIntensity(float Intensity) {
}

EStreamlineFeatureSupport UStreamlineLibraryDeepDVC::QueryDeepDVCSupport() {
    return EStreamlineFeatureSupport::Supported;
}

bool UStreamlineLibraryDeepDVC::IsDeepDVCSupported() {
    return false;
}

bool UStreamlineLibraryDeepDVC::IsDeepDVCModeSupported(EStreamlineDeepDVCMode DeepDVCMode) {
    return false;
}

TArray<EStreamlineDeepDVCMode> UStreamlineLibraryDeepDVC::GetSupportedDeepDVCModes() {
    return TArray<EStreamlineDeepDVCMode>();
}

EStreamlineDeepDVCMode UStreamlineLibraryDeepDVC::GetDefaultDeepDVCMode() {
    return EStreamlineDeepDVCMode::Off;
}

float UStreamlineLibraryDeepDVC::GetDeepDVCSaturationBoost() {
    return 0.0f;
}

EStreamlineDeepDVCMode UStreamlineLibraryDeepDVC::GetDeepDVCMode() {
    return EStreamlineDeepDVCMode::Off;
}

float UStreamlineLibraryDeepDVC::GetDeepDVCIntensity() {
    return 0.0f;
}


