#include "BPFL_SteamUtility.h"

UBPFL_SteamUtility::UBPFL_SteamUtility() {
}

bool UBPFL_SteamUtility::SteamInit() {
    return false;
}

FString UBPFL_SteamUtility::IsSteamSubscribed(bool& isWindows, bool& NewIsConnectSteam, bool& IsSubscribed, bool& IsRequestRelaunch) {
    return TEXT("");
}

bool UBPFL_SteamUtility::IsDlcInstalled(int32 DLCID) {
    return false;
}

bool UBPFL_SteamUtility::IsConnectSteam(APlayerController* PlayerController) {
    return false;
}

FString UBPFL_SteamUtility::GetUserIDStr(APlayerController* PlayerController) {
    return TEXT("");
}

FString UBPFL_SteamUtility::GetSteamUILanguage() {
    return TEXT("");
}

FString UBPFL_SteamUtility::GetCurrentGameLanguage() {
    return TEXT("");
}

void UBPFL_SteamUtility::AddScreenshotToLibrary(const FString& FilePath, const int32 ImageWidth, const int32 ImageHeight) {
}


