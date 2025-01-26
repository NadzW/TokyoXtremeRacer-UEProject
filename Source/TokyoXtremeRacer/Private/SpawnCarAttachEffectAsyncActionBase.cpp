#include "SpawnCarAttachEffectAsyncActionBase.h"

USpawnCarAttachEffectAsyncActionBase::USpawnCarAttachEffectAsyncActionBase() {
    this->attach_compoment_ = NULL;
    this->world_context_ = NULL;
    this->effect_subsystem_ = NULL;
}

USpawnCarAttachEffectAsyncActionBase* USpawnCarAttachEffectAsyncActionBase::SpawnCarAttachEffect(UObject* WorldContextObject, ECarEffectType car_effect_type, USceneComponent* attach_compoment, FName attach_point_name, FVector local_location, FRotator local_rotator, FVector local_scale) {
    return NULL;
}


