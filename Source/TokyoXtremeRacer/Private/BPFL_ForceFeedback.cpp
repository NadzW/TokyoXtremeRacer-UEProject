#include "BPFL_ForceFeedback.h"

UBPFL_ForceFeedback::UBPFL_ForceFeedback() {
}

bool UBPFL_ForceFeedback::SupportsAnyForceFeedbackEffectType(const FControllerDesc& Desc, int32 BitMask) {
    return false;
}

bool UBPFL_ForceFeedback::SupportsAnyFfbEffectTypes(int32 Types, int32 BitMask) {
    return false;
}

bool UBPFL_ForceFeedback::SupportsAllForceFeedbackEffectTypes(const FControllerDesc& Desc, int32 BitMask) {
    return false;
}

bool UBPFL_ForceFeedback::SupportsAllFfbEffectTypes(int32 Types, int32 BitMask) {
    return false;
}

void UBPFL_ForceFeedback::StopForceFeedbackForAllControllers() {
}

void UBPFL_ForceFeedback::StopForceFeedbackByControllerId(const FControllerId& ID) {
}

bool UBPFL_ForceFeedback::AutoSelectForceFeedbackCapableController() {
    return false;
}

void UBPFL_ForceFeedback::ApplyForceFeedbackToSingleController_Ramp(int32 LengthMs, float BeginSignedStrengh, float EndSignedStrength) {
}

void UBPFL_ForceFeedback::ApplyForceFeedbackToSingleController_Periodic(int32 LengthMs, EPeriodicWaveShape Shape, int32 PeriodMs, float AverageSignedStrength, float PeakSignedStrength, float startingPhase) {
}

void UBPFL_ForceFeedback::ApplyForceFeedbackToSingleController_Constant(int32 LengthMs, float SignedStrength) {
}

void UBPFL_ForceFeedback::ApplyForceFeedbackToActiveControllers_Ramp(int32 LengthMs, float BeginSignedStrengh, float EndSignedStrength) {
}

void UBPFL_ForceFeedback::ApplyForceFeedbackToActiveControllers_Periodic(int32 LengthMs, EPeriodicWaveShape Shape, int32 PeriodMs, float AverageSignedStrength, float PeakSignedStrength, float startingPhase) {
}

void UBPFL_ForceFeedback::ApplyForceFeedbackToActiveControllers_Constant(int32 LengthMs, float SignedStrength) {
}

void UBPFL_ForceFeedback::ApplyForceFeedbackToActiveControllers_Conditional(int32 LengthMs, EConditionalForceFeedbackType Type, float MinStrength, float MaxStrength, float Coefficient, float deadzoneSize, float deadzoneCenter) {
}

void UBPFL_ForceFeedback::ApplyForceFeedbackByControllerId_Ramp(const FControllerId& ID, int32 LengthMs, float BeginSignedStrengh, float EndSignedStrength) {
}

void UBPFL_ForceFeedback::ApplyForceFeedbackByControllerId_Periodic(const FControllerId& ID, int32 LengthMs, EPeriodicWaveShape Shape, int32 PeriodMs, float AverageSignedStrength, float PeakSignedStrength, float startingPhase) {
}

void UBPFL_ForceFeedback::ApplyForceFeedbackByControllerId_Constant(const FControllerId& ID, int32 LengthMs, float SignedStrength) {
}

void UBPFL_ForceFeedback::ApplyForceFeedbackByControllerId_Conditional(const FControllerId& ID, int32 LengthMs, EConditionalForceFeedbackType Type, float MinStrength, float MaxStrength, float Coefficient, float deadzoneSize, float deadzoneCenter) {
}


