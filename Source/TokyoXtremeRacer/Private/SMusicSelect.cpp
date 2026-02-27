#include "SMusicSelect.h"

FSMusicSelect::FSMusicSelect() {
    this->BgmPlayType = EBGMPlayType::Default;
    this->LoopCount = 0;
    this->bIsUniqueFirst = false;
    this->bIsShuffle = false;
}

