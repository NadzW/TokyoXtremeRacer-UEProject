#include "PlayEngineSoundAsyncActionBase.h"

UPlayEngineSoundAsyncActionBase::UPlayEngineSoundAsyncActionBase() {
    this->attach_compoment_ = NULL;
    this->world_context_ = NULL;
    this->sound_subsystem_ = NULL;
}

UPlayEngineSoundAsyncActionBase* UPlayEngineSoundAsyncActionBase::PlayEngineSound(UObject* WorldContextObject, EEngineSoundType engine_sound_type, USceneComponent* attach_compoment, int32 car_id, float volume_rate) {
    return NULL;
}


