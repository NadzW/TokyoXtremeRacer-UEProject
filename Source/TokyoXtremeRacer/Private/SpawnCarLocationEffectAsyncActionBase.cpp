#include "SpawnCarLocationEffectAsyncActionBase.h"

USpawnCarLocationEffectAsyncActionBase::USpawnCarLocationEffectAsyncActionBase() {
    this->world_context_ = NULL;
    this->effect_subsystem_ = NULL;
}

USpawnCarLocationEffectAsyncActionBase* USpawnCarLocationEffectAsyncActionBase::SpawnCarLocationEffect(UObject* WorldContextObject, ECarEffectType car_effect_type, FVector world_location, FRotator world_rotator, FVector Scale) {
    return NULL;
}


