#include "OutGameEffectWorldSubsystem.h"

UOutGameEffectWorldSubsystem::UOutGameEffectWorldSubsystem() {
    this->effect_helper_ = NULL;
}

UParticleSystemComponent* UOutGameEffectWorldSubsystem::SpawnCarLocationEffect(ECarEffectType car_effect_type, FVector world_location, FRotator world_rotator, FVector Scale) {
    return NULL;
}

UParticleSystemComponent* UOutGameEffectWorldSubsystem::SpawnCarAttachEffect(ECarEffectType car_effect_type, USceneComponent* attach_compoment, FName attach_point_name, FVector local_location, FRotator local_rotator, FVector local_scale) {
    return NULL;
}

UObject* UOutGameEffectWorldSubsystem::GetExplicitObject(UPrimaryAssetLabel* Label) {
    return NULL;
}

bool UOutGameEffectWorldSubsystem::CheckEffectLoaded(EEffectGropeType effect_type) {
    return false;
}

void UOutGameEffectWorldSubsystem::AddEffectMap(EEffectGropeType effect_type, UObject* Object) {
}


