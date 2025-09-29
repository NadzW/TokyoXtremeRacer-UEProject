#include "GkPlatform.h"

UGkPlatform::UGkPlatform() {
}

bool UGkPlatform::IsSteamDeck() {
    return false;
}

FString UGkPlatform::GetTempDirectoryPath() {
    return TEXT("");
}


