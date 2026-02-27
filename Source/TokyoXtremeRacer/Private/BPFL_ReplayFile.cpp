#include "BPFL_ReplayFile.h"

UBPFL_ReplayFile::UBPFL_ReplayFile() {
}

bool UBPFL_ReplayFile::SaveReplayPathToSaveGame(const FString& FullReplayPath, const FString& FullTexturePath, const FString& SlotName) {
    return false;
}

FString UBPFL_ReplayFile::MakeReplaySaveGameSlotName(const int32& Number) {
    return TEXT("");
}

UTexture2D* UBPFL_ReplayFile::LoadTextureFromSaveGame(const FString& SlotName) {
    return NULL;
}

UTexture2D* UBPFL_ReplayFile::LoadTexture2D_FromBufferPng(const TArray<uint8>& RawFileData, bool& IsValid, int32& Width, int32& Height) {
    return NULL;
}

void UBPFL_ReplayFile::LoadFileForArchiveTest(const FString& FullFilePath) {
}

bool UBPFL_ReplayFile::LoadFileArrayData_FromFile(const FString& FullFilePath, TArray<uint8>& RawFileData) {
    return false;
}

bool UBPFL_ReplayFile::IsFullReplayFileNumber(const TArray<FReplayDetailInfo>& ReplayList, bool& IsFullLocked, bool& IsFullTemporary) {
    return false;
}

int32 UBPFL_ReplayFile::GettMaximumReplayFileCount(int32& ReplayLockedFileCountLimit, int32& ReplayTemporaryFileCountLimit) {
    return 0;
}

FString UBPFL_ReplayFile::GetReplayThumbnailFilePath(const FString& ThumbnailFileName) {
    return TEXT("");
}

float UBPFL_ReplayFile::GetReplaySkipTimeSecOffset() {
    return 0.0f;
}

FString UBPFL_ReplayFile::GetReplaySaveGameSlotName(const FReplayDetailInfo& ReplayInfo) {
    return TEXT("");
}

FString UBPFL_ReplayFile::GetReplayFilePath(const FString& ReplayKeyName) {
    return TEXT("");
}

void UBPFL_ReplayFile::GetNowReplayDataVersion(int32& replay_version, FString& project_version) {
}

int32 UBPFL_ReplayFile::GetMaximumReplayRecordingTimeSec() {
    return 0;
}

bool UBPFL_ReplayFile::GetEmptyReplaySaveGameName(const TArray<FReplayDetailInfo>& ReplayList, FString& SaveSlotName) {
    return false;
}

bool UBPFL_ReplayFile::ExportReplayFileFromSaveGame(const FString& SlotName) {
    return false;
}

bool UBPFL_ReplayFile::DeleteReplayFileForSaveGame(const FString& SlotName) {
    return false;
}

bool UBPFL_ReplayFile::CheckReplayListToDeleteUnnecessarySaveData() {
    return false;
}

bool UBPFL_ReplayFile::CheckReCreateReplayFileDataByBinarySaveGames(const TArray<FReplayDetailInfo>& ReplayList, bool is_replay_data, const UObject* WorldContextObject) {
    return false;
}

bool UBPFL_ReplayFile::CheckReCreateReplayFileDataByBinarySaveGame(const FReplayDetailInfo& ReplayInfo, bool is_replay_data, const UObject* WorldContextObject) {
    return false;
}

bool UBPFL_ReplayFile::CheckReCreateReplayFileDataAllByBinarySaveGames(const TArray<FReplayDetailInfo>& ReplayList, const UObject* WorldContextObject) {
    return false;
}

bool UBPFL_ReplayFile::CheckReCreateReplayBinarySaveGameByFileData(const TArray<FReplayDetailInfo>& ReplayList, const UObject* WorldContextObject) {
    return false;
}

bool UBPFL_ReplayFile::CheckDeleteReplayFileSimple(TArray<FReplayDetailInfo>& ReplayList) {
    return false;
}

bool UBPFL_ReplayFile::CheckDeleteReplayFile(TArray<FReplayDetailInfo>& ReplayList, bool is_check_restore_binary_save, TArray<FReplayDetailInfo>& RestoreReplayList, TArray<FReplayDetailInfo>& TemporaryMissingReplayList) {
    return false;
}

bool UBPFL_ReplayFile::CheckDeleteOldOneReplayFile(TArray<FReplayDetailInfo>& ReplayList, const bool is_delete_file) {
    return false;
}


