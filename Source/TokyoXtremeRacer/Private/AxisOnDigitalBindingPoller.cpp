#include "AxisOnDigitalBindingPoller.h"

UAxisOnDigitalBindingPoller::UAxisOnDigitalBindingPoller() {
    this->PollAxisIndex = 0;
}

void UAxisOnDigitalBindingPoller::UpdateState() {
}

void UAxisOnDigitalBindingPoller::Initialize(FControllerId ControllerId, uint8 AxisIndex) {
}

void UAxisOnDigitalBindingPoller::CheckStatus(FAxisOnDigitalInputMappingInfo& AxisOnDigitalInfo, TEnumAsByte<EAxisPollStatusPins>& AxisPollStatus) const {
}


