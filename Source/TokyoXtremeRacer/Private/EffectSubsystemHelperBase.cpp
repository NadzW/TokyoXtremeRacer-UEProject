#include "EffectSubsystemHelperBase.h"

UEffectSubsystemHelperBase::UEffectSubsystemHelperBase() {
}

void UEffectSubsystemHelperBase::UnLoadEffect(const FString& sound_str) {
}

UNiagaraComponent* UEffectSubsystemHelperBase::SpawnCarLocationEffectNiagara_Implementation(UObject* world_context, ECarEffectType car_effect_type, UObject* data_table, FVector world_location, FRotator world_rotator, FVector Scale) {
    return NULL;
}

UParticleSystemComponent* UEffectSubsystemHelperBase::SpawnCarLocationEffect_Implementation(UObject* world_context, ECarEffectType car_effect_type, UObject* data_table, FVector world_location, FRotator world_rotator, FVector Scale) {
    return NULL;
}

UNiagaraComponent* UEffectSubsystemHelperBase::SpawnCarAttachEffectNiagara_Implementation(UObject* world_context, ECarEffectType car_effect_type, UObject* data_table, USceneComponent* attach_compoment, FName attach_point_name, FVector local_location, FRotator local_rotator, FVector local_scale) {
    return NULL;
}

UParticleSystemComponent* UEffectSubsystemHelperBase::SpawnCarAttachEffect_Implementation(UObject* world_context, ECarEffectType car_effect_type, UObject* data_table, USceneComponent* attach_compoment, FName attach_point_name, FVector local_location, FRotator local_rotator, FVector local_scale) {
    return NULL;
}

void UEffectSubsystemHelperBase::Initialize_Implementation(UObject* world_context, bool is_in_game) {
}

void UEffectSubsystemHelperBase::DeInitialize_Implementation(UObject* world_context, bool is_in_game) {
}


