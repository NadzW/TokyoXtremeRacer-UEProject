#include "StreamlineSettings.h"

UStreamlineSettings::UStreamlineSettings() {
    this->bEnableStreamlineD3D12 = true;
    this->bEnableStreamlineD3D11 = true;
    this->bEnableDLSSFGInPlayInEditorViewports = false;
    this->bLoadDebugOverlay = false;
    this->bAllowOTAUpdate = true;
    this->NVIDIANGXApplicationId = 0;
}


