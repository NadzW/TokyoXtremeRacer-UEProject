#include "Controlysis.h"

UControlysis::UControlysis() {
}

void UControlysis::UpdateControllersDetection() {
}

void UControlysis::RumbleTriggers(const FGenericControllerId& Controller, int32 left_rumble, int32 right_rumble, int32 length_ms) {
}

void UControlysis::Rumble(const FGenericControllerId& Controller, int32 low_frequency_rumble, int32 high_frequency_rumble, int32 length_ms) {
}

TEnumAsByte<HatDirection> UControlysis::PollHat(const FGenericControllerId& Controller, uint8 hat) {
    return HatCenter;
}

bool UControlysis::PollButton(const FGenericControllerId& Controller, uint8 Button) {
    return false;
}

void UControlysis::PollBall(const FGenericControllerId& Controller, uint8 ball, int32& DeltaX, int32& DeltaY) {
}

float UControlysis::PollAxis(const FGenericControllerId& Controller, uint8 Axis) {
    return 0.0f;
}

EGenericControllerType UControlysis::GetGenericControllerType(int32 vid, int32 pid) {
    return EGenericControllerType::Unknown;
}

UControlysisEventListener* UControlysis::GetEventListener() {
    return NULL;
}

TArray<FGenericControllerId> UControlysis::GetControllers() {
    return TArray<FGenericControllerId>();
}

FGenericControllerLayout UControlysis::GetControllerLayout(const FGenericControllerId& Controller) {
    return FGenericControllerLayout{};
}

FString UControlysis::GetControllerHapticDiagnostics(const FGenericControllerId& Controller) {
    return TEXT("");
}

void UControlysis::ForceFeedback_Stop(const FGenericControllerId& Controller, int32 existing_effect_id) {
}

void UControlysis::ForceFeedback_SetAutocentering(const FGenericControllerId& Controller, float Strength) {
}

void UControlysis::ForceFeedback_Rumble(const FGenericControllerId& Controller, int32 length_ms, float strength_largemotor, float strength_smallmotor, int32& resulting_effect_id, int32 existing_effect_id, bool infinite) {
}

void UControlysis::ForceFeedback_Ramp(const FGenericControllerId& Controller, int32 length_ms, float strength_begin, float strength_end, float directionHeading, float directionPitch, int32& resulting_effect_id, int32 existing_effect_id) {
}

void UControlysis::ForceFeedback_Periodic(const FGenericControllerId& Controller, int32 length_ms, int32 period_ms, float averageStrength, float peakStrength, float directionHeading, float directionPitch, int32& resulting_effect_id, TEnumAsByte<WaveShape> Shape, float startingPhase, int32 existing_effect_id, bool infinite) {
}

void UControlysis::ForceFeedback_Constant(const FGenericControllerId& Controller, int32 length_ms, float Strength, float directionHeading, float directionPitch, int32& resulting_effect_id, int32 existing_effect_id, bool infinite) {
}

void UControlysis::ForceFeedback_Conditional(const FGenericControllerId& Controller, int32 length_ms, int32& resulting_effect_id, TEnumAsByte<ConditionalForceFeedbackType> Type, float strength_at_Xmin, float strength_at_Xmax, float strength_at_Ymin, float strength_at_Ymax, float strength_at_Zmin, float strength_at_Zmax, float Coefficient, float deadzoneSize, FVector deadzoneCenter, int32 existing_effect_id, bool infinite) {
}


