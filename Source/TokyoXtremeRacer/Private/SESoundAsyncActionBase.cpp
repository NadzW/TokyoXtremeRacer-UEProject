#include "SESoundAsyncActionBase.h"

USESoundAsyncActionBase::USESoundAsyncActionBase() {
    this->out_sound_subsystem_ = NULL;
    this->sound_subsystem_ = NULL;
}

USESoundAsyncActionBase* USESoundAsyncActionBase::LoadSE(UObject* WorldContextObject, ESEType se_type) {
    return NULL;
}


