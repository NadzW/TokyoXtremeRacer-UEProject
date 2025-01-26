#include "PlayBgmSoundAsyncActionBase.h"

UPlayBgmSoundAsyncActionBase::UPlayBgmSoundAsyncActionBase() {
    this->world_context_ = NULL;
    this->out_sound_subsystem_ = NULL;
    this->in_sound_subsystem_ = NULL;
}

UPlayBgmSoundAsyncActionBase* UPlayBgmSoundAsyncActionBase::PlayBGM(UObject* WorldContextObject, EBGMType bgm_type, float volume_rate, bool is_in_game) {
    return NULL;
}


