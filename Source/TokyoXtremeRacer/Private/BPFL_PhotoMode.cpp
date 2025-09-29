#include "BPFL_PhotoMode.h"

UBPFL_PhotoMode::UBPFL_PhotoMode() {
}

void UBPFL_PhotoMode::SetCameraMovableWhenPaused(const UObject* WorldContextObject, bool bIsMovable) {
}

bool UBPFL_PhotoMode::IsPhotomodeSaveDirTempDir() {
    return false;
}

FString UBPFL_PhotoMode::GetPhotomodeSaveDir() {
    return TEXT("");
}


