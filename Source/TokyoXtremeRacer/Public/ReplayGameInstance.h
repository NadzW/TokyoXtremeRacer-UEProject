#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "S_ReplayInfo.h"
#include "ReplayGameInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class TOKYOXTREMERACER_API UReplayGameInstance : public UGameInstance {
    GENERATED_BODY()
public:
    UReplayGameInstance();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void WorldPreLoadCallback();
    
    UFUNCTION(BlueprintCallable)
    void StopReplayFromBP();
    
    UFUNCTION(BlueprintCallable)
    void StopRecordingReplayFromBP();
    
    UFUNCTION(BlueprintCallable)
    void StartRecordingReplayFromBP(const FString& ReplayName, const FString& FriendlyName, bool UseSaveSlot);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SeamlessTravelStartCallback();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReplayStartedCallback();
    
    UFUNCTION(BlueprintCallable)
    void RenameReplay(const FString& ReplayName, const FString& NewFriendlyReplayName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PostWorldCleanupCallback();
    
    UFUNCTION(BlueprintCallable)
    void PlayReplayFromBP(const FString& ReplayName);
    
    UFUNCTION(BlueprintCallable)
    void PauseReplayFromBP(const bool& IsPause);
    
    UFUNCTION(BlueprintCallable)
    FString GetSaveGameSlotPath();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRecordingTotalTime() const;
    
    UFUNCTION(BlueprintCallable)
    FString GetDemoPath();
    
    UFUNCTION(BlueprintCallable)
    void FindReplaysForSaveSlot(const bool& IsSaveSlot);
    
    UFUNCTION(BlueprintCallable)
    void FindReplays();
    
    UFUNCTION(BlueprintCallable)
    void DeleteReplay(const FString& ReplayName);
    
    UFUNCTION(BlueprintCallable)
    bool CheckMaximumRecordingReplayTime();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnFindReplaysComplete(const TArray<FS_ReplayInfo>& AllReplays);
    
};

