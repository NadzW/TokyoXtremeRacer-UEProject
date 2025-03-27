#include "SbGameUserSettings.h"

USbGameUserSettings::USbGameUserSettings() {
    this->bUseVSync = true;
    this->bIsVisibleDebugMessage = false;
}

void USbGameUserSettings::SetSoundSettingInfo(const FSSbSoundSettingInfo sound_info) {
}

void USbGameUserSettings::SetIsVisibleDebugMessage(bool bNewVisiblity) {
}

void USbGameUserSettings::SetGraphicSettingInfo(const FSSbGraphicSettingInfo graphic_info) {
}

FSSbSoundSettingInfo USbGameUserSettings::GetSoundSettingInfo() const {
    return FSSbSoundSettingInfo{};
}

USbGameUserSettings* USbGameUserSettings::GetSbGameUserSettings() {
    return NULL;
}

bool USbGameUserSettings::GetIsVisibleDebugMessage() const {
    return false;
}

FSSbGraphicSettingInfo USbGameUserSettings::GetGraphicSettingInfo() const {
    return FSSbGraphicSettingInfo{};
}

void USbGameUserSettings::ApplyDisplayGamma(const float DisplayGamma) {
}


