#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "CompletedPlayAttachEngineSoundDelegate.h"
#include "EEngineSoundType.h"
#include "PlayEngineSoundAsyncActionBase.generated.h"

class UObject;
class UPlayEngineSoundAsyncActionBase;
class USceneComponent;
class USoundWorldSubsystem;

UCLASS(Blueprintable)
class TOKYOXTREMERACER_API UPlayEngineSoundAsyncActionBase : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCompletedPlayAttachEngineSound Completed;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* attach_compoment_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* world_context_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundWorldSubsystem* sound_subsystem_;
    
public:
    UPlayEngineSoundAsyncActionBase();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UPlayEngineSoundAsyncActionBase* PlayEngineSound(UObject* WorldContextObject, EEngineSoundType engine_sound_type, USceneComponent* attach_compoment, int32 car_id, float volume_rate);
    
};

