#pragma once
#include "CoreMinimal.h"
#include "CompletedEffectLoadDelegate.h"
#include "EEffectGropeType.h"
#include "ObjectLoadAsyncActionBase.h"
#include "EffectLoadAsyncActionBase.generated.h"

class UEffectLoadAsyncActionBase;
class UEffectWorldSubsystem;
class UObject;

UCLASS(Blueprintable)
class TOKYOXTREMERACER_API UEffectLoadAsyncActionBase : public UObjectLoadAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCompletedEffectLoad Completed;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEffectWorldSubsystem* effect_subsystem_;
    
public:
    UEffectLoadAsyncActionBase();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UEffectLoadAsyncActionBase* LoadEffect(UObject* WorldContextObject, EEffectGropeType effect_type);
    
};

