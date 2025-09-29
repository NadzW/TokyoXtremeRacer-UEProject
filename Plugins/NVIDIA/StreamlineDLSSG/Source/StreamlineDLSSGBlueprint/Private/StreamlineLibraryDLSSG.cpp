#include "StreamlineLibraryDLSSG.h"

UStreamlineLibraryDLSSG::UStreamlineLibraryDLSSG() {
}

void UStreamlineLibraryDLSSG::SetDLSSGMode(EStreamlineDLSSGMode DLSSGMode) {
}

EStreamlineFeatureSupport UStreamlineLibraryDLSSG::QueryDLSSGSupport() {
    return EStreamlineFeatureSupport::Supported;
}

bool UStreamlineLibraryDLSSG::IsDLSSGSupported() {
    return false;
}

bool UStreamlineLibraryDLSSG::IsDLSSGModeSupported(EStreamlineDLSSGMode DLSSGMode) {
    return false;
}

TArray<EStreamlineDLSSGMode> UStreamlineLibraryDLSSG::GetSupportedDLSSGModes() {
    return TArray<EStreamlineDLSSGMode>();
}

EStreamlineDLSSGMode UStreamlineLibraryDLSSG::GetDLSSGMode() {
    return EStreamlineDLSSGMode::Off;
}

void UStreamlineLibraryDLSSG::GetDLSSGFrameTiming(float& FrameRateInHertz, int32& FramesPresented) {
}

EStreamlineDLSSGMode UStreamlineLibraryDLSSG::GetDefaultDLSSGMode() {
    return EStreamlineDLSSGMode::Off;
}


