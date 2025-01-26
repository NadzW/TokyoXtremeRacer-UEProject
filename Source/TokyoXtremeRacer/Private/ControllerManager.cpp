#include "ControllerManager.h"

UControllerManager::UControllerManager() {
}

void UControllerManager::UpdateControllers() {
}

bool UControllerManager::TrueForceSetTorqueTFint32ByControllerId(const FControllerId& ID, TArray<int32> Values, float FrequencyHz, float Gain, bool Loop) {
    return false;
}

bool UControllerManager::TrueForceSetTorqueTFfloatByControllerId(const FControllerId& ID, TArray<float> Values, float FrequencyHz, float Gain, bool Loop) {
    return false;
}

bool UControllerManager::TrueForceSetTorqueKFPiecewiseByControllerId(const FControllerId& ID, TArray<float> TorqueValuesInNm, float SegmentDurationInSeconds) {
    return false;
}

bool UControllerManager::TrueForceSetTorqueKFByControllerId(const FControllerId& ID, float TorqueInNm) {
    return false;
}

bool UControllerManager::TrueForceSetGainTFByControllerId(const FControllerId& ID, float Gain) {
    return false;
}

bool UControllerManager::TrueForceSetGainKFByControllerId(const FControllerId& ID, float Gain) {
    return false;
}

bool UControllerManager::TrueForceSetDampingKFByControllerId(const FControllerId& ID, float Damping) {
    return false;
}

void UControllerManager::TrueForceGetTorqueKFByControllerId(const FControllerId& ID, TEnumAsByte<EFindResultPins>& FindResult, float& TorqueInNm) {
}

void UControllerManager::TrueForceGetGainTFByControllerId(const FControllerId& ID, TEnumAsByte<EFindResultPins>& FindResult, float& Gain) {
}

void UControllerManager::TrueForceGetGainKFByControllerId(const FControllerId& ID, TEnumAsByte<EFindResultPins>& FindResult, float& Gain) {
}

void UControllerManager::TrueForceGetDampingKFByControllerId(const FControllerId& ID, TEnumAsByte<EFindResultPins>& FindResult, float& Damping) {
}

void UControllerManager::TrueForceGetAngularVelocityRadiansByControllerId(const FControllerId& ID, TEnumAsByte<EFindResultPins>& FindResult, float& AngularVelocityRadiansPerSecond) {
}

void UControllerManager::TrueForceGetAngularVelocityDegreesByControllerId(const FControllerId& ID, TEnumAsByte<EFindResultPins>& FindResult, float& AngularVelocityDegreesPerSecond) {
}

void UControllerManager::TrueForceGetAngleRadiansByControllerId(const FControllerId& ID, TEnumAsByte<EFindResultPins>& FindResult, float& AngleRadians) {
}

void UControllerManager::TrueForceGetAngleDegreesByControllerId(const FControllerId& ID, TEnumAsByte<EFindResultPins>& FindResult, float& AngleDegrees) {
}

void UControllerManager::TrueForceClearTFForAllControllers() {
}

bool UControllerManager::TrueForceClearTFByControllerId(const FControllerId& ID) {
    return false;
}

void UControllerManager::TrueForceClearKFForAllControllers() {
}

bool UControllerManager::TrueForceClearKFByControllerId(const FControllerId& ID) {
    return false;
}

FText UControllerManager::ToDisplayText(EInputHatDirection HatDirection) {
    return FText::GetEmpty();
}

bool UControllerManager::SetOperatingRangeByControllerId(const FControllerId& ID, float RangeDegrees) {
    return false;
}

bool UControllerManager::SetLedsColorValuesByControllerId(const FControllerId& ID, int32 StartIndex, TArray<FVector3f> Values) {
    return false;
}

bool UControllerManager::SetLedsByControllerId(const FControllerId& ID, int32 StartIndex, TArray<int32> Data) {
    return false;
}

bool UControllerManager::SetForceModeByControllerId(const FControllerId& ID, EControllerForceMode Mode) {
    return false;
}

void UControllerManager::PlayLedsForActiveControllers(float CurrentRpm, float RpmFirstLedTurnsOn, float RpmRedLine) {
}

bool UControllerManager::PlayLedsByControllerId(const FControllerId& ID, float CurrentRpm, float RpmFirstLedTurnsOn, float RpmRedLine) {
    return false;
}

FString UControllerManager::MakeControllerDescString(const FControllerDesc& ControllerDesc) {
    return TEXT("");
}

void UControllerManager::GetTrueForceSdkHasFullControl(const FControllerId& ID, TEnumAsByte<EFindResultPins>& FindResult, bool& SdkHasFullControl) {
}

void UControllerManager::GetTrueForceOrForceFeedbackCapableControllers(TArray<FTrueForceCapableControllerId>& TrueForceCapable, TArray<FForceFeedbackCapableControllerId>& ForceFeedbackCapable, int32 ForceFeedbackEffectTypeMask, bool ActiveOnly) {
}

void UControllerManager::GetSingleTrueForceOrForceFeedbackCapableController(int32 FfbEffectTypeMask, TEnumAsByte<ETrueForceOrForceFeedback>& Result, FTrueForceCapableControllerId& TrueForceCapable, FForceFeedbackCapableControllerId& ForceFeedbackCapable) {
}

void UControllerManager::GetSingleRumbleCapableController(TEnumAsByte<EFindResultPins>& FindResult, FControllerId& ControllerId) {
}

TArray<FControllerId> UControllerManager::GetPresentControllers() {
    return TArray<FControllerId>();
}

TArray<FControllerDesc> UControllerManager::GetPresentControllerDescs() {
    return TArray<FControllerDesc>();
}

void UControllerManager::GetOperatingRangeByControllerId(const FControllerId& ID, TEnumAsByte<EFindResultPins>& FindResult, float& RangeDegrees) {
}

void UControllerManager::GetOperatingRangeBoundsByControllerId(const FControllerId& ID, TEnumAsByte<EFindResultPins>& FindResult, float& MinDegrees, float& MaxDegrees) {
}

EInputControllerType UControllerManager::GetInputControllerType(const FControllerModel& ControllerModel) {
    return EInputControllerType::Unknown;
}

void UControllerManager::GetForceModeByControllerId(const FControllerId& ID, TEnumAsByte<EFindResultPins>& FindResult, EControllerForceMode& Mode) {
}

UControllerManagerEventListener* UControllerManager::GetEventListener() {
    return NULL;
}

void UControllerManager::GetControllerDescByControllerId(const FControllerId& ID, FControllerDesc& Found, TEnumAsByte<EFindResultPins>& FindResult) {
}

void UControllerManager::GetControllerCapabilityByControllerId(const FControllerId& ID, FControllerCapability& Capability, TEnumAsByte<EFindResultPins>& FindResult) {
}

TArray<FControllerId> UControllerManager::GetActiveControllerIds() {
    return TArray<FControllerId>();
}

void UControllerManager::FindControllerByHardwareId(int32 VendorId, int32 ProductId, FControllerDesc& Found, TEnumAsByte<EFindResultPins>& FindResult) {
}

void UControllerManager::DumpPresentControllers() {
}

void UControllerManager::ClearActiveControllerIds() {
}

bool UControllerManager::CheckIfActiveController(const FControllerId& ID) {
    return false;
}

bool UControllerManager::CheckControllerExists(const FControllerId& ID) {
    return false;
}

bool UControllerManager::ActivateFirstControllerWithHardwareId(const FControllerModel& Model) {
    return false;
}


