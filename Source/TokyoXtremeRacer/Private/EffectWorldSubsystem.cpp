#include "EffectWorldSubsystem.h"

UEffectWorldSubsystem::UEffectWorldSubsystem() {
    this->effect_helper_ = NULL;
}

UNiagaraComponent* UEffectWorldSubsystem::SpawnCarLocationEffectNiagara(ECarEffectType car_effect_type, FVector world_location, FRotator world_rotator, FVector Scale) {
    return NULL;
}

UParticleSystemComponent* UEffectWorldSubsystem::SpawnCarLocationEffect(ECarEffectType car_effect_type, FVector world_location, FRotator world_rotator, FVector Scale) {
    return NULL;
}

UNiagaraComponent* UEffectWorldSubsystem::SpawnCarAttachEffectNiagara(ECarEffectType car_effect_type, USceneComponent* attach_compoment, FName attach_point_name, FVector local_location, FRotator local_rotator, FVector local_scale) {
    return NULL;
}

UParticleSystemComponent* UEffectWorldSubsystem::SpawnCarAttachEffect(ECarEffectType car_effect_type, USceneComponent* attach_compoment, FName attach_point_name, FVector local_location, FRotator local_rotator, FVector local_scale) {
    return NULL;
}

UObject* UEffectWorldSubsystem::GetExplicitObject(UPrimaryAssetLabel* Label) {
    return NULL;
}

bool UEffectWorldSubsystem::CheckEffectLoaded(EEffectGropeType effect_type) {
    return false;
}

void UEffectWorldSubsystem::AddEffectMap(EEffectGropeType effect_type, UObject* Object) {
}


