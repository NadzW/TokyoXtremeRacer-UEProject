#pragma once
#include "CoreMinimal.h"
#include "CompletedSESoundLoadDelegate.h"
#include "ESEType.h"
#include "ObjectLoadAsyncActionBase.h"
#include "SESoundAsyncActionBase.generated.h"

class UObject;
class UOutgameSoundWorldSubsystem;
class USESoundAsyncActionBase;
class USoundWorldSubsystem;

UCLASS(Blueprintable)
class TOKYOXTREMERACER_API USESoundAsyncActionBase : public UObjectLoadAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCompletedSESoundLoad Completed;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UOutgameSoundWorldSubsystem* out_sound_subsystem_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundWorldSubsystem* sound_subsystem_;
    
public:
    USESoundAsyncActionBase();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USESoundAsyncActionBase* LoadSE(UObject* WorldContextObject, ESEType se_type);
    
};

