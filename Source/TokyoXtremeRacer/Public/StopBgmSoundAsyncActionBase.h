#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "EBGMType.h"
#include "StopBgmSoundAsyncActionBase.generated.h"

class UObject;
class UOutgameSoundWorldSubsystem;
class USoundWorldSubsystem;
class UStopBgmSoundAsyncActionBase;

UCLASS(Blueprintable)
class TOKYOXTREMERACER_API UStopBgmSoundAsyncActionBase : public UBlueprintAsyncActionBase {
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
    UStopBgmSoundAsyncActionBase();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UStopBgmSoundAsyncActionBase* StopBGM(UObject* WorldContextObject, EBGMType bgm_type, bool is_in_game);
    
};

