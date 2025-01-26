#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "MuteBgmSoundAsyncActionBase.generated.h"

class UMuteBgmSoundAsyncActionBase;
class UObject;
class UOutgameSoundWorldSubsystem;
class USoundWorldSubsystem;

UCLASS(Blueprintable)
class TOKYOXTREMERACER_API UMuteBgmSoundAsyncActionBase : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* world_context_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UOutgameSoundWorldSubsystem* out_sound_subsystem_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundWorldSubsystem* in_sound_subsystem_;
    
public:
    UMuteBgmSoundAsyncActionBase();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UMuteBgmSoundAsyncActionBase* SetIsBgmMute(UObject* WorldContextObject, bool is_mute, bool is_in_game);
    
};

