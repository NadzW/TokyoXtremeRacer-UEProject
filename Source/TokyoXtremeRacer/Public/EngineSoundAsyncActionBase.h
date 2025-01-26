#pragma once
#include "CoreMinimal.h"
#include "CompletedEngineSoundLoadDelegate.h"
#include "EEngineSoundType.h"
#include "ObjectLoadAsyncActionBase.h"
#include "EngineSoundAsyncActionBase.generated.h"

class UEngineSoundAsyncActionBase;
class UObject;

UCLASS(Blueprintable)
class TOKYOXTREMERACER_API UEngineSoundAsyncActionBase : public UObjectLoadAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCompletedEngineSoundLoad Completed;
    
    UEngineSoundAsyncActionBase();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UEngineSoundAsyncActionBase* LoadEngineSound(UObject* WorldContextObject, EEngineSoundType engine_sound_type);
    
};

