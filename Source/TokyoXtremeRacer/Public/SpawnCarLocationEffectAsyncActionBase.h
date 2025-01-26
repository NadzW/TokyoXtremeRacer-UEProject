#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "CompletedSpawnCarLocationEffectDelegate.h"
#include "ECarEffectType.h"
#include "SpawnCarLocationEffectAsyncActionBase.generated.h"

class UEffectWorldSubsystem;
class UObject;
class USpawnCarLocationEffectAsyncActionBase;

UCLASS(Blueprintable)
class TOKYOXTREMERACER_API USpawnCarLocationEffectAsyncActionBase : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCompletedSpawnCarLocationEffect Completed;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* world_context_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEffectWorldSubsystem* effect_subsystem_;
    
public:
    USpawnCarLocationEffectAsyncActionBase();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USpawnCarLocationEffectAsyncActionBase* SpawnCarLocationEffect(UObject* WorldContextObject, ECarEffectType car_effect_type, FVector world_location, FRotator world_rotator, FVector Scale);
    
};

