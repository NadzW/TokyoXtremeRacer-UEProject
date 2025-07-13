#include "BlinkManager.h"

UBlinkManager::UBlinkManager() {
    this->BlinkTime = 0.50f;
    this->BetweenTime = 0.50f;
    this->CurrentTimer = 0.00f;
    this->IsBlink = false;
    this->IsStart = false;
    this->ReserveStop = false;
}

bool UBlinkManager::Tick(const double in_dt, bool& out_change_now) {
    return false;
}

void UBlinkManager::Stop(const bool in_stop_on_tick) {
}

void UBlinkManager::Start(const double in_start_time) {
}

void UBlinkManager::Setup(const double in_blink_time, const double in_between_time) {
}


