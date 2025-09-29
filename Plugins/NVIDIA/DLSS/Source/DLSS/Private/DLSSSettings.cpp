#include "DLSSSettings.h"

UDLSSSettings::UDLSSSettings() {
    this->bEnableDLSSD3D12 = true;
    this->bEnableDLSSD3D11 = true;
    this->bEnableDLSSVulkan = true;
    this->bEnableDLSSInEditorViewports = false;
    this->bEnableDLSSInPlayInEditorViewports = true;
    this->bShowDLSSSDebugOnScreenMessages = true;
    this->bGenericDLSSBinaryExists = false;
    this->NVIDIANGXApplicationId = 0;
    this->bCustomDLSSBinaryExists = false;
    this->bAllowOTAUpdate = true;
    this->BiasCurrentColorStencilValue = 8;
    this->bShowDLSSIncompatiblePluginsToolsWarnings = false;
    this->DLAAPreset = EDLSSPreset::Default;
    this->DLSSQualityPreset = EDLSSPreset::Default;
    this->DLSSBalancedPreset = EDLSSPreset::Default;
    this->DLSSPerformancePreset = EDLSSPreset::Default;
    this->DLSSUltraPerformancePreset = EDLSSPreset::Default;
    this->DLAARRPreset = EDLSSRRPreset::Default;
    this->DLSSRRQualityPreset = EDLSSRRPreset::Default;
    this->DLSSRRBalancedPreset = EDLSSRRPreset::Default;
    this->DLSSRRPerformancePreset = EDLSSRRPreset::Default;
    this->DLSSRRUltraPerformancePreset = EDLSSRRPreset::Default;
}


