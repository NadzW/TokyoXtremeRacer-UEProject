#include "StopBgmSoundAsyncActionBase.h"

UStopBgmSoundAsyncActionBase::UStopBgmSoundAsyncActionBase() {
    this->world_context_ = NULL;
    this->out_sound_subsystem_ = NULL;
    this->in_sound_subsystem_ = NULL;
}

UStopBgmSoundAsyncActionBase* UStopBgmSoundAsyncActionBase::StopBGM(UObject* WorldContextObject, EBGMType bgm_type, bool is_in_game) {
    return NULL;
}


