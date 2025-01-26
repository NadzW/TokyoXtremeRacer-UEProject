#include "PC_ReplaySpectator.h"

APC_ReplaySpectator::APC_ReplaySpectator(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bShowMouseCursor = true;
    this->ClickEventKeys.AddDefaulted(1);
    this->bShouldPerformFullTickWhenPaused = true;
}

void APC_ReplaySpectator::SetCurrentReplayTimeToSeconds(int32 Seconds) {
}

void APC_ReplaySpectator::SetCurrentReplayPlayRate(float PlayRate) {
}

bool APC_ReplaySpectator::SetCurrentReplayPausedState(bool bDoPause) {
    return false;
}

void APC_ReplaySpectator::SetCurrentReplayPause() {
}





float APC_ReplaySpectator::GetCurrentReplayTotalTimeInSecondsFloat() const {
    return 0.0f;
}

int32 APC_ReplaySpectator::GetCurrentReplayTotalTimeInSeconds() const {
    return 0;
}

bool APC_ReplaySpectator::GetCurrentReplayPause() const {
    return false;
}

float APC_ReplaySpectator::GetCurrentReplayCurrentTimeInSecondsFloat() const {
    return 0.0f;
}

int32 APC_ReplaySpectator::GetCurrentReplayCurrentTimeInSeconds() const {
    return 0;
}


