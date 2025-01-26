#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "EBGMType.h"
#include "PlayBgmSoundAsyncActionBase.generated.h"

class UObject;
class UOutgameSoundWorldSubsystem;
class UPlayBgmSoundAsyncActionBase;
class USoundWorldSubsystem;

UCLASS(Blueprintable)
class TOKYOXTREMERACER_API UPlayBgmSoundAsyncActionBase : public UBlueprintAsyncActionBase {
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
    UPlayBgmSoundAsyncActionBase();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UPlayBgmSoundAsyncActionBase* PlayBGM(UObject* WorldContextObject, EBGMType bgm_type, float volume_rate, bool is_in_game);
    
};

