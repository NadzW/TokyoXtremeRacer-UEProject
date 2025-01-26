#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "PC_ReplaySpectator.generated.h"

UCLASS(Blueprintable)
class TOKYOXTREMERACER_API APC_ReplaySpectator : public APlayerController {
    GENERATED_BODY()
public:
    APC_ReplaySpectator(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetCurrentReplayTimeToSeconds(int32 Seconds);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentReplayPlayRate(float PlayRate);
    
    UFUNCTION(BlueprintCallable)
    bool SetCurrentReplayPausedState(bool bDoPause);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentReplayPause();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReplayStartedCallback();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReplayScrubCompleteCallback();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReplayGotoTimeCallback(const bool bWasSuccessful);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PauseChannelsChangedCallback();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentReplayTotalTimeInSecondsFloat() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentReplayTotalTimeInSeconds() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCurrentReplayPause() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentReplayCurrentTimeInSecondsFloat() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentReplayCurrentTimeInSeconds() const;
    
};

