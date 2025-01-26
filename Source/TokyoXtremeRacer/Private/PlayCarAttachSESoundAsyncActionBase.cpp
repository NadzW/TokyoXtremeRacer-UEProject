#include "PlayCarAttachSESoundAsyncActionBase.h"

UPlayCarAttachSESoundAsyncActionBase::UPlayCarAttachSESoundAsyncActionBase() {
    this->attach_compoment_ = NULL;
    this->world_context_ = NULL;
    this->sound_subsystem_ = NULL;
}

UPlayCarAttachSESoundAsyncActionBase* UPlayCarAttachSESoundAsyncActionBase::PlayCarAttachSE(UObject* WorldContextObject, ECarSEType se_type, USceneComponent* attach_compoment, float volume_rate) {
    return NULL;
}


