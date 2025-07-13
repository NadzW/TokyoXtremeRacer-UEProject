#include "BPFL_WrappedDLSS.h"

UBPFL_WrappedDLSS::UBPFL_WrappedDLSS() {
}

void UBPFL_WrappedDLSS::SetNISSharpness(float Sharpness) {
}

void UBPFL_WrappedDLSS::SetNISMode(UWrappedNISMode NISMode) {
}

void UBPFL_WrappedDLSS::SetNISCustomScreenPercentage(float CustomScreenPercentage) {
}

void UBPFL_WrappedDLSS::SetDLSSSharpness(float Sharpness) {
}

void UBPFL_WrappedDLSS::SetDLSSMode(UObject* WorldContextObject, UWrappedDLSSMode DLSSMode) {
}

void UBPFL_WrappedDLSS::SetDLSSGMode(EWrappedStreamlineDLSSGMode DLSSGMode) {
}

UWrappedDLSSSupport UBPFL_WrappedDLSS::QueryDLSSSupport() {
    return UWrappedDLSSSupport::Supported;
}

UWrappedDLSSSupport UBPFL_WrappedDLSS::QueryDLSSRRSupport() {
    return UWrappedDLSSSupport::Supported;
}

EWrappedStreamlineFeatureSupport UBPFL_WrappedDLSS::QueryDLSSGSupport() {
    return EWrappedStreamlineFeatureSupport::Supported;
}

bool UBPFL_WrappedDLSS::IsRayTracingAvailable() {
    return false;
}

bool UBPFL_WrappedDLSS::IsNISSupported() {
    return false;
}

bool UBPFL_WrappedDLSS::IsNISModeSupported(UWrappedNISMode NISMode) {
    return false;
}

bool UBPFL_WrappedDLSS::IsDLSSSupported() {
    return false;
}

bool UBPFL_WrappedDLSS::IsDLSSRRSupported() {
    return false;
}

bool UBPFL_WrappedDLSS::IsDLSSRREnabled() {
    return false;
}

bool UBPFL_WrappedDLSS::IsDLSSModeSupported(UWrappedDLSSMode DLSSMode) {
    return false;
}

bool UBPFL_WrappedDLSS::IsDLSSGSupported() {
    return false;
}

bool UBPFL_WrappedDLSS::IsDLSSGModeSupported(EWrappedStreamlineDLSSGMode DLSSGMode) {
    return false;
}

bool UBPFL_WrappedDLSS::IsDLSSEnabled() {
    return false;
}

bool UBPFL_WrappedDLSS::IsDLAAEnabled() {
    return false;
}

TArray<UWrappedNISMode> UBPFL_WrappedDLSS::GetSupportedNISModes() {
    return TArray<UWrappedNISMode>();
}

TArray<UWrappedDLSSMode> UBPFL_WrappedDLSS::GetSupportedDLSSModes() {
    return TArray<UWrappedDLSSMode>();
}

TArray<EWrappedStreamlineDLSSGMode> UBPFL_WrappedDLSS::GetSupportedDLSSGModes() {
    return TArray<EWrappedStreamlineDLSSGMode>();
}

void UBPFL_WrappedDLSS::GetNISScreenPercentageRange(float& MinScreenPercentage, float& MaxScreenPercentage) {
}

float UBPFL_WrappedDLSS::GetNISRecommendedScreenPercentage(UWrappedNISMode NISMode) {
    return 0.0f;
}

float UBPFL_WrappedDLSS::GetDLSSSharpness() {
    return 0.0f;
}

void UBPFL_WrappedDLSS::GetDLSSScreenPercentageRange(float& MinScreenPercentage, float& MaxScreenPercentage) {
}

void UBPFL_WrappedDLSS::GetDLSSRRMinimumDriverVersion(int32& MinDriverVersionMajor, int32& MinDriverVersionMinor) {
}

void UBPFL_WrappedDLSS::GetDLSSModeInformation(UWrappedDLSSMode DLSSMode, FVector2D ScreenResolution, bool& bIsSupported, float& OptimalScreenPercentage, bool& bIsFixedScreenPercentage, float& MinScreenPercentage, float& MaxScreenPercentage, float& OptimalSharpness) {
}

UWrappedDLSSMode UBPFL_WrappedDLSS::GetDLSSMode() {
    return UWrappedDLSSMode::Off;
}

void UBPFL_WrappedDLSS::GetDLSSMinimumDriverVersion(int32& MinDriverVersionMajor, int32& MinDriverVersionMinor) {
}

EWrappedStreamlineDLSSGMode UBPFL_WrappedDLSS::GetDLSSGMode() {
    return EWrappedStreamlineDLSSGMode::Off;
}

void UBPFL_WrappedDLSS::GetDLSSGFrameTiming(float& FrameRateInHertz, int32& FramesPresented) {
}

UWrappedNISMode UBPFL_WrappedDLSS::GetDefaultNISMode() {
    return UWrappedNISMode::Off;
}

UWrappedDLSSMode UBPFL_WrappedDLSS::GetDefaultDLSSMode() {
    return UWrappedDLSSMode::Off;
}

EWrappedStreamlineDLSSGMode UBPFL_WrappedDLSS::GetDefaultDLSSGMode() {
    return EWrappedStreamlineDLSSGMode::Off;
}

void UBPFL_WrappedDLSS::EnableDLSSRR(bool bEnabled) {
}

void UBPFL_WrappedDLSS::EnableDLSS(bool bEnabled) {
}

void UBPFL_WrappedDLSS::EnableDLAA(bool bEnabled) {
}


