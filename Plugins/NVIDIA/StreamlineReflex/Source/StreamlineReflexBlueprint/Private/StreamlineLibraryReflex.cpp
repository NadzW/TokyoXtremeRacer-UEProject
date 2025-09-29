#include "StreamlineLibraryReflex.h"

UStreamlineLibraryReflex::UStreamlineLibraryReflex() {
}

void UStreamlineLibraryReflex::SetReflexMode(const EStreamlineReflexMode Mode) {
}

EStreamlineFeatureSupport UStreamlineLibraryReflex::QueryReflexSupport() {
    return EStreamlineFeatureSupport::Supported;
}

bool UStreamlineLibraryReflex::IsReflexSupported() {
    return false;
}

bool UStreamlineLibraryReflex::IsReflexModeSupported(EStreamlineReflexMode ReflexMode) {
    return false;
}

TArray<EStreamlineReflexMode> UStreamlineLibraryReflex::GetSupportedReflexModes() {
    return TArray<EStreamlineReflexMode>();
}

float UStreamlineLibraryReflex::GetRenderLatencyInMs() {
    return 0.0f;
}

EStreamlineReflexMode UStreamlineLibraryReflex::GetReflexMode() {
    return EStreamlineReflexMode::Off;
}

float UStreamlineLibraryReflex::GetGameToRenderLatencyInMs() {
    return 0.0f;
}

float UStreamlineLibraryReflex::GetGameLatencyInMs() {
    return 0.0f;
}

EStreamlineReflexMode UStreamlineLibraryReflex::GetDefaultReflexMode() {
    return EStreamlineReflexMode::Off;
}


