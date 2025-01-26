#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "CompletedSpawnCarAttachEffectDelegate.h"
#include "ECarEffectType.h"
#include "SpawnCarAttachEffectAsyncActionBase.generated.h"

class UEffectWorldSubsystem;
class UObject;
class USceneComponent;
class USpawnCarAttachEffectAsyncActionBase;

UCLASS(Blueprintable)
class TOKYOXTREMERACER_API USpawnCarAttachEffectAsyncActionBase : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCompletedSpawnCarAttachEffect Completed;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* attach_compoment_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* world_context_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEffectWorldSubsystem* effect_subsystem_;
    
public:
    USpawnCarAttachEffectAsyncActionBase();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USpawnCarAttachEffectAsyncActionBase* SpawnCarAttachEffect(UObject* WorldContextObject, ECarEffectType car_effect_type, USceneComponent* attach_compoment, FName attach_point_name, FVector local_location, FRotator local_rotator, FVector local_scale);
    
};

