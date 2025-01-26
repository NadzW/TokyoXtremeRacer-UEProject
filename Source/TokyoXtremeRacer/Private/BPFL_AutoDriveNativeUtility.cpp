#include "BPFL_AutoDriveNativeUtility.h"

UBPFL_AutoDriveNativeUtility::UBPFL_AutoDriveNativeUtility() {
}

TArray<int32> UBPFL_AutoDriveNativeUtility::SortLanesNearCurrentLane2(TArray<int32> Lanes, float CurrentLane, float CenterLane, float LeftWallLane, float RightWallLane) {
    return TArray<int32>();
}

TArray<int32> UBPFL_AutoDriveNativeUtility::SortLanesNearCurrentLane(TArray<int32> Lanes, float CurrentLane) {
    return TArray<int32>();
}

TMap<int32, float> UBPFL_AutoDriveNativeUtility::SortFastRelativeSpeed(TMap<int32, float> RelativeSpeeds) {
    return TMap<int32, float>();
}

TMap<int32, float> UBPFL_AutoDriveNativeUtility::SortDistanceLong(TMap<int32, float> Distances) {
    return TMap<int32, float>();
}

float UBPFL_AutoDriveNativeUtility::SignWithoutZero_Float(const float A) {
    return 0.0f;
}

double UBPFL_AutoDriveNativeUtility::SignWithoutZero_Double(const double A) {
    return 0.0;
}

FName UBPFL_AutoDriveNativeUtility::ReturnEvaluateNameKeyWall() {
    return NAME_None;
}

FName UBPFL_AutoDriveNativeUtility::ReturnEvaluateNameKeySideRoad() {
    return NAME_None;
}

FName UBPFL_AutoDriveNativeUtility::ReturnEvaluateNameKeyRoadLine() {
    return NAME_None;
}

FName UBPFL_AutoDriveNativeUtility::ReturnEvaluateNameKeyRandomLaneChange() {
    return NAME_None;
}

FName UBPFL_AutoDriveNativeUtility::ReturnEvaluateNameKeyPriorityLane() {
    return NAME_None;
}

FName UBPFL_AutoDriveNativeUtility::ReturnEvaluateNameKeyLaneChange() {
    return NAME_None;
}

FName UBPFL_AutoDriveNativeUtility::ReturnEvaluateNameKeyDrivingLaneChange2() {
    return NAME_None;
}

FName UBPFL_AutoDriveNativeUtility::ReturnEvaluateNameKeyDrivingLaneChange() {
    return NAME_None;
}

FName UBPFL_AutoDriveNativeUtility::ReturnEvaluateNameKeyCurrentLanePlayerIgnore() {
    return NAME_None;
}

FName UBPFL_AutoDriveNativeUtility::ReturnEvaluateNameKeyCurrentLane() {
    return NAME_None;
}

FName UBPFL_AutoDriveNativeUtility::ReturnEvaluateNameKeyCenterLine() {
    return NAME_None;
}

FName UBPFL_AutoDriveNativeUtility::ReturnEvaluateNameKeyBlock() {
    return NAME_None;
}

FName UBPFL_AutoDriveNativeUtility::ConstructLaneInfoNameFromLaneInfo(const FSLaneInfo& LaneInfo) {
    return NAME_None;
}

FName UBPFL_AutoDriveNativeUtility::ConstructLaneInfoName(const FName& RPDName, const int32 LaneIndex) {
    return NAME_None;
}

float UBPFL_AutoDriveNativeUtility::ComputeSteerAnglarVelocity(const FVector& PrevFrameAngularVelocity, const double DeltaSecond, const double VsTargetYawAngle, const float tSteer, const double tRelativePointUpdateDistance, const FADNU_ComputeSteerAnglarVelocityAIConfigArg& AIConfigArgs, const float SpeedKmh, const float SlipAngle) {
    return 0.0f;
}


