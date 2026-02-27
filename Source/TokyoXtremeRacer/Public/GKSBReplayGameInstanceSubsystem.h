#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "OnAsyncSaveFileCompleteDelegate.h"
#include "OnFileLoadCompleteDelegate.h"
#include "OnFileLoadFailedDelegate.h"
#include "OnTwoFilesLoadCompleteDelegate.h"
#include "ReplayBinaryDataInfo.h"
#include "ReplayDetailInfo.h"
#include "GKSBReplayGameInstanceSubsystem.generated.h"

class USaveGame;

UCLASS(Blueprintable)
class TOKYOXTREMERACER_API UGKSBReplayGameInstanceSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool is_load_list_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool is_load_binary_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FReplayDetailInfo> EditReplayList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReplayBinaryDataInfo EditReplayData;
    
public:
    UGKSBReplayGameInstanceSubsystem();

    UFUNCTION(BlueprintCallable)
    void SetEditReplayListData(const TArray<FReplayDetailInfo>& list_data);
    
    UFUNCTION(BlueprintCallable)
    void SetEditReplayBinaryData(const FReplayBinaryDataInfo& binary_data);
    
    UFUNCTION(BlueprintCallable)
    void SaveCompleted(const FString& SlotName, const int32 UserIndex, bool bSuccess);
    
    UFUNCTION(BlueprintCallable)
    void LoadTwoFilesAsync(const FString& TextureFilePath, const FString& ReplayFilePath, FOnTwoFilesLoadComplete OnComplete, FOnFileLoadFailed OnFail);
    
    UFUNCTION(BlueprintCallable)
    void LoadSingleFileAsync(const FString& FilePath, FOnFileLoadComplete OnComplete, FOnFileLoadFailed OnFail);
    
    UFUNCTION(BlueprintCallable)
    void LoadListCompleted(const FString& SlotName, const int32 UserIndex, USaveGame* SaveGame);
    
    UFUNCTION(BlueprintCallable)
    bool LoadforList(const FString& SlotNameGameData);
    
    UFUNCTION(BlueprintCallable)
    bool LoadforBinary(const FString& SlotNameGameData);
    
    UFUNCTION(BlueprintCallable)
    void LoadBinaryCompleted(const FString& SlotName, const int32 UserIndex, USaveGame* SaveGame);
    
    UFUNCTION(BlueprintCallable)
    void HandleLoadBinaryGameCompleted(const FString& SlotName, const int32 UserIndex, USaveGame* LoadedGameData, FOnAsyncSaveFileComplete OnComplete, bool is_create_replay_file, bool is_create_thumbnail);
    
    UFUNCTION(BlueprintCallable)
    bool GetEditReplayListData(TArray<FReplayDetailInfo>& list_data);
    
    UFUNCTION(BlueprintCallable)
    bool GetEditReplayBinaryData(FReplayBinaryDataInfo& binary_data);
    
    UFUNCTION(BlueprintCallable)
    void ClearEditReplayListData();
    
    UFUNCTION(BlueprintCallable)
    void ClearEditReplayBinaryData();
    
    UFUNCTION(BlueprintCallable)
    bool AsyncSaveGameForReplayBinary(const FReplayBinaryDataInfo& ReplayData, const FString& SlotNameGameData);
    
    UFUNCTION(BlueprintCallable)
    void AsyncSaveBinarySaveGameForBinaryFiles(const FString& TextureFilePath, const FString& ReplayFilePath, const FString& SlotName, FOnAsyncSaveFileComplete OnSaveComplete);
    
    UFUNCTION(BlueprintCallable)
    void AsyncSaveBinaryFileByReplayBinarySaveGame(bool is_replay_data);
    
    UFUNCTION(BlueprintCallable)
    void AsyncLoadBinarySaveGameAndSaveBinaryFiles(const FString& SlotName, bool is_create_replay_file, bool is_create_thumbnail, FOnAsyncSaveFileComplete OnComplete);
    
};

