#include "BPFL_PlatformUtility.h"

UBPFL_PlatformUtility::UBPFL_PlatformUtility() {
}

void UBPFL_PlatformUtility::SetupPS5SaveGameInfoDelegate() {
}

FString UBPFL_PlatformUtility::GetPlatformTempDirectory() {
    return TEXT("");
}

EGkBuildPlatformType UBPFL_PlatformUtility::GetGkPlatformType() {
    return EGkBuildPlatformType::Win64;
}

void UBPFL_PlatformUtility::ClipboardPaste(FString& Dest) {
}

void UBPFL_PlatformUtility::ClipboardCopy(const FString& Str) {
}


