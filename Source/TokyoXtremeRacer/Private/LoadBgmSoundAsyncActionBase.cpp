#include "LoadBgmSoundAsyncActionBase.h"

ULoadBgmSoundAsyncActionBase::ULoadBgmSoundAsyncActionBase() {
    this->out_sound_subsystem_ = NULL;
    this->in_sound_subsystem_ = NULL;
}

ULoadBgmSoundAsyncActionBase* ULoadBgmSoundAsyncActionBase::LoadBgm(UObject* WorldContextObject, EBGMType bgm_type, bool is_in_game) {
    return NULL;
}


