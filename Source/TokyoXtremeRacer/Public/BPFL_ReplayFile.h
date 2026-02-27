#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ReplayDetailInfo.h"
#include "BPFL_ReplayFile.generated.h"

class UObject;
class UTexture2D;

UCLASS(Blueprintable)
class TOKYOXTREMERACER_API UBPFL_ReplayFile : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBPFL_ReplayFile();

    UFUNCTION(BlueprintCallable)
    static bool SaveReplayPathToSaveGame(const FString& FullReplayPath, const FString& FullTexturePath, const FString& SlotName);
    
    UFUNCTION(BlueprintCallable)
    static FString MakeReplaySaveGameSlotName(const int32& Number);
    
    UFUNCTION(BlueprintCallable)
    static UTexture2D* LoadTextureFromSaveGame(const FString& SlotName);
    
    UFUNCTION(BlueprintCallable)
    static UTexture2D* LoadTexture2D_FromBufferPng(const TArray<uint8>& RawFileData, bool& IsValid, int32& Width, int32& Height);
    
    UFUNCTION(BlueprintCallable)
    static void LoadFileForArchiveTest(const FString& FullFilePath);
    
    UFUNCTION(BlueprintCallable)
    static bool LoadFileArrayData_FromFile(const FString& FullFilePath, TArray<uint8>& RawFileData);
    
    UFUNCTION(BlueprintCallable)
    static bool IsFullReplayFileNumber(const TArray<FReplayDetailInfo>& ReplayList, bool& IsFullLocked, bool& IsFullTemporary);
    
    UFUNCTION(BlueprintCallable)
    static int32 GettMaximumReplayFileCount(int32& ReplayLockedFileCountLimit, int32& ReplayTemporaryFileCountLimit);
    
    UFUNCTION(BlueprintCallable)
    static FString GetReplayThumbnailFilePath(const FString& ThumbnailFileName);
    
    UFUNCTION(BlueprintCallable)
    static float GetReplaySkipTimeSecOffset();
    
    UFUNCTION(BlueprintCallable)
    static FString GetReplaySaveGameSlotName(const FReplayDetailInfo& ReplayInfo);
    
    UFUNCTION(BlueprintCallable)
    static FString GetReplayFilePath(const FString& ReplayKeyName);
    
    UFUNCTION(BlueprintCallable)
    static void GetNowReplayDataVersion(int32& replay_version, FString& project_version);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetMaximumReplayRecordingTimeSec();
    
    UFUNCTION(BlueprintCallable)
    static bool GetEmptyReplaySaveGameName(const TArray<FReplayDetailInfo>& ReplayList, FString& SaveSlotName);
    
    UFUNCTION(BlueprintCallable)
    static bool ExportReplayFileFromSaveGame(const FString& SlotName);
    
    UFUNCTION(BlueprintCallable)
    static bool DeleteReplayFileForSaveGame(const FString& SlotName);
    
    UFUNCTION(BlueprintCallable)
    static bool CheckReplayListToDeleteUnnecessarySaveData();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool CheckReCreateReplayFileDataByBinarySaveGames(const TArray<FReplayDetailInfo>& ReplayList, bool is_replay_data, const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool CheckReCreateReplayFileDataByBinarySaveGame(const FReplayDetailInfo& ReplayInfo, bool is_replay_data, const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool CheckReCreateReplayFileDataAllByBinarySaveGames(const TArray<FReplayDetailInfo>& ReplayList, const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool CheckReCreateReplayBinarySaveGameByFileData(const TArray<FReplayDetailInfo>& ReplayList, const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static bool CheckDeleteReplayFileSimple(UPARAM(Ref) TArray<FReplayDetailInfo>& ReplayList);
    
    UFUNCTION(BlueprintCallable)
    static bool CheckDeleteReplayFile(UPARAM(Ref) TArray<FReplayDetailInfo>& ReplayList, bool is_check_restore_binary_save, TArray<FReplayDetailInfo>& RestoreReplayList, TArray<FReplayDetailInfo>& TemporaryMissingReplayList);
    
    UFUNCTION(BlueprintCallable)
    static bool CheckDeleteOldOneReplayFile(UPARAM(Ref) TArray<FReplayDetailInfo>& ReplayList, const bool is_delete_file);
    
};

