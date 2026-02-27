#include "GKSBReplayGameInstanceSubsystem.h"

UGKSBReplayGameInstanceSubsystem::UGKSBReplayGameInstanceSubsystem() {
    this->is_load_list_ = false;
    this->is_load_binary_ = false;
}

void UGKSBReplayGameInstanceSubsystem::SetEditReplayListData(const TArray<FReplayDetailInfo>& list_data) {
}

void UGKSBReplayGameInstanceSubsystem::SetEditReplayBinaryData(const FReplayBinaryDataInfo& binary_data) {
}

void UGKSBReplayGameInstanceSubsystem::SaveCompleted(const FString& SlotName, const int32 UserIndex, bool bSuccess) {
}

void UGKSBReplayGameInstanceSubsystem::LoadTwoFilesAsync(const FString& TextureFilePath, const FString& ReplayFilePath, FOnTwoFilesLoadComplete OnComplete, FOnFileLoadFailed OnFail) {
}

void UGKSBReplayGameInstanceSubsystem::LoadSingleFileAsync(const FString& FilePath, FOnFileLoadComplete OnComplete, FOnFileLoadFailed OnFail) {
}

void UGKSBReplayGameInstanceSubsystem::LoadListCompleted(const FString& SlotName, const int32 UserIndex, USaveGame* SaveGame) {
}

bool UGKSBReplayGameInstanceSubsystem::LoadforList(const FString& SlotNameGameData) {
    return false;
}

bool UGKSBReplayGameInstanceSubsystem::LoadforBinary(const FString& SlotNameGameData) {
    return false;
}

void UGKSBReplayGameInstanceSubsystem::LoadBinaryCompleted(const FString& SlotName, const int32 UserIndex, USaveGame* SaveGame) {
}

void UGKSBReplayGameInstanceSubsystem::HandleLoadBinaryGameCompleted(const FString& SlotName, const int32 UserIndex, USaveGame* LoadedGameData, FOnAsyncSaveFileComplete OnComplete, bool is_create_replay_file, bool is_create_thumbnail) {
}

bool UGKSBReplayGameInstanceSubsystem::GetEditReplayListData(TArray<FReplayDetailInfo>& list_data) {
    return false;
}

bool UGKSBReplayGameInstanceSubsystem::GetEditReplayBinaryData(FReplayBinaryDataInfo& binary_data) {
    return false;
}

void UGKSBReplayGameInstanceSubsystem::ClearEditReplayListData() {
}

void UGKSBReplayGameInstanceSubsystem::ClearEditReplayBinaryData() {
}

bool UGKSBReplayGameInstanceSubsystem::AsyncSaveGameForReplayBinary(const FReplayBinaryDataInfo& ReplayData, const FString& SlotNameGameData) {
    return false;
}

void UGKSBReplayGameInstanceSubsystem::AsyncSaveBinarySaveGameForBinaryFiles(const FString& TextureFilePath, const FString& ReplayFilePath, const FString& SlotName, FOnAsyncSaveFileComplete OnSaveComplete) {
}

void UGKSBReplayGameInstanceSubsystem::AsyncSaveBinaryFileByReplayBinarySaveGame(bool is_replay_data) {
}

void UGKSBReplayGameInstanceSubsystem::AsyncLoadBinarySaveGameAndSaveBinaryFiles(const FString& SlotName, bool is_create_replay_file, bool is_create_thumbnail, FOnAsyncSaveFileComplete OnComplete) {
}


