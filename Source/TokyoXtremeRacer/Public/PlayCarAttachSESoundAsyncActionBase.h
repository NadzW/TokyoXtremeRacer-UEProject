#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "CompletedPlayCarAttachSESoundDelegate.h"
#include "ECarSEType.h"
#include "PlayCarAttachSESoundAsyncActionBase.generated.h"

class UObject;
class UPlayCarAttachSESoundAsyncActionBase;
class USceneComponent;
class USoundWorldSubsystem;

UCLASS(Blueprintable)
class TOKYOXTREMERACER_API UPlayCarAttachSESoundAsyncActionBase : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCompletedPlayCarAttachSESound Completed;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* attach_compoment_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* world_context_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundWorldSubsystem* sound_subsystem_;
    
public:
    UPlayCarAttachSESoundAsyncActionBase();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UPlayCarAttachSESoundAsyncActionBase* PlayCarAttachSE(UObject* WorldContextObject, ECarSEType se_type, USceneComponent* attach_compoment, float volume_rate);
    
};

