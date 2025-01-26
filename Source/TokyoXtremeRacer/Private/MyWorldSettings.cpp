#include "MyWorldSettings.h"

AMyWorldSettings::AMyWorldSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bUseIngameEffectWorldSubSystem = true;
    this->bUseOutgameEffectWorldSubSystem = false;
    this->bUseIngameSoundWorldSubSystem = true;
    this->bUseOutgameSoundWorldSubSystem = false;
}


