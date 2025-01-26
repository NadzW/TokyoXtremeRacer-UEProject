#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "ECarEffectType.h"
#include "EffectSubsystemHelperBase.generated.h"

class UNiagaraComponent;
class UParticleSystemComponent;
class USceneComponent;

UCLASS(Abstract, Blueprintable)
class TOKYOXTREMERACER_API UEffectSubsystemHelperBase : public UObject {
    GENERATED_BODY()
public:
    UEffectSubsystemHelperBase();

    UFUNCTION(BlueprintCallable)
    void UnLoadEffect(const FString& sound_str);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UNiagaraComponent* SpawnCarLocationEffectNiagara(UObject* world_context, ECarEffectType car_effect_type, UObject* data_table, FVector world_location, FRotator world_rotator, FVector Scale);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UParticleSystemComponent* SpawnCarLocationEffect(UObject* world_context, ECarEffectType car_effect_type, UObject* data_table, FVector world_location, FRotator world_rotator, FVector Scale);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UNiagaraComponent* SpawnCarAttachEffectNiagara(UObject* world_context, ECarEffectType car_effect_type, UObject* data_table, USceneComponent* attach_compoment, FName attach_point_name, FVector local_location, FRotator local_rotator, FVector local_scale);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UParticleSystemComponent* SpawnCarAttachEffect(UObject* world_context, ECarEffectType car_effect_type, UObject* data_table, USceneComponent* attach_compoment, FName attach_point_name, FVector local_location, FRotator local_rotator, FVector local_scale);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Initialize(UObject* world_context, bool is_in_game);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DeInitialize(UObject* world_context, bool is_in_game);
    
};

