#pragma once
#include "CoreMinimal.h"
#include "CompletedBgmSoundLoadDelegate.h"
#include "EBGMType.h"
#include "ObjectLoadAsyncActionBase.h"
#include "LoadBgmSoundAsyncActionBase.generated.h"

class ULoadBgmSoundAsyncActionBase;
class UObject;
class UOutgameSoundWorldSubsystem;
class USoundWorldSubsystem;

UCLASS(Blueprintable)
class TOKYOXTREMERACER_API ULoadBgmSoundAsyncActionBase : public UObjectLoadAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCompletedBgmSoundLoad Completed;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UOutgameSoundWorldSubsystem* out_sound_subsystem_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundWorldSubsystem* in_sound_subsystem_;
    
public:
    ULoadBgmSoundAsyncActionBase();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static ULoadBgmSoundAsyncActionBase* LoadBgm(UObject* WorldContextObject, EBGMType bgm_type, bool is_in_game);
    
};

