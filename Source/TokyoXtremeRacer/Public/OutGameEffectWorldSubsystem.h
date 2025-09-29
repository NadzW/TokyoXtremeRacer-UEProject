#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "ECarEffectType.h"
#include "EEffectGropeType.h"
#include "OutGameEffectWorldSubsystem.generated.h"

class UEffectSubsystemHelperBase;
class UObject;
class UParticleSystemComponent;
class UPrimaryAssetLabel;
class USceneComponent;

UCLASS(Blueprintable)
class TOKYOXTREMERACER_API UOutGameEffectWorldSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UEffectSubsystemHelperBase* effect_helper_;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EEffectGropeType, UObject*> effect_data_map_;
    
public:
    UOutGameEffectWorldSubsystem();

    UFUNCTION(BlueprintCallable)
    UParticleSystemComponent* SpawnCarLocationEffect(ECarEffectType car_effect_type, FVector world_location, FRotator world_rotator, FVector Scale);
    
    UFUNCTION(BlueprintCallable)
    UParticleSystemComponent* SpawnCarAttachEffect(ECarEffectType car_effect_type, USceneComponent* attach_compoment, FName attach_point_name, FVector local_location, FRotator local_rotator, FVector local_scale);
    
    UFUNCTION(BlueprintCallable)
    UObject* GetExplicitObject(UPrimaryAssetLabel* Label);
    
    UFUNCTION(BlueprintCallable)
    bool CheckEffectLoaded(EEffectGropeType effect_type);
    
    UFUNCTION(BlueprintCallable)
    void AddEffectMap(EEffectGropeType effect_type, UObject* Object);
    
};

