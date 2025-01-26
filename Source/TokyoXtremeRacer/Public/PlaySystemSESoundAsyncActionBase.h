#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "CompletedPlaySystemSESoundDelegate.h"
#include "ESystemSEType.h"
#include "PlaySystemSESoundAsyncActionBase.generated.h"

class UObject;
class UOutgameSoundWorldSubsystem;
class UPlaySystemSESoundAsyncActionBase;

UCLASS(Blueprintable)
class TOKYOXTREMERACER_API UPlaySystemSESoundAsyncActionBase : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCompletedPlaySystemSESound Completed;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* world_context_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UOutgameSoundWorldSubsystem* out_sound_subsystem_;
    
public:
    UPlaySystemSESoundAsyncActionBase();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UPlaySystemSESoundAsyncActionBase* PlaySystemSE(UObject* WorldContextObject, ESystemSEType se_type, float volume_rate);
    
};

