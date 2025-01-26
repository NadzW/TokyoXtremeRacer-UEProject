#include "MuteBgmSoundAsyncActionBase.h"

UMuteBgmSoundAsyncActionBase::UMuteBgmSoundAsyncActionBase() {
    this->world_context_ = NULL;
    this->out_sound_subsystem_ = NULL;
    this->in_sound_subsystem_ = NULL;
}

UMuteBgmSoundAsyncActionBase* UMuteBgmSoundAsyncActionBase::SetIsBgmMute(UObject* WorldContextObject, bool is_mute, bool is_in_game) {
    return NULL;
}


