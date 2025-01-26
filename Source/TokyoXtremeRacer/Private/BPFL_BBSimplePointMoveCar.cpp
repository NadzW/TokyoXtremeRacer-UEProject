#include "BPFL_BBSimplePointMoveCar.h"

UBPFL_BBSimplePointMoveCar::UBPFL_BBSimplePointMoveCar() {
}

void UBPFL_BBSimplePointMoveCar::SetVsTargetYaw(UBlackboardComponent* Blackboard, float NewVsTargetYaw) {
}

void UBPFL_BBSimplePointMoveCar::SetTargetSpeedKmh(UBlackboardComponent* Blackboard, float NewTargetSpeedKmh) {
}

void UBPFL_BBSimplePointMoveCar::SetTargetRoadPointPosInfoObject(UBlackboardComponent* Blackboard, UObject* NewTargetRoadPointPosInfoObject) {
}

void UBPFL_BBSimplePointMoveCar::SetTargetPoint(UBlackboardComponent* Blackboard, const FVector& NewTargetPoint) {
}

void UBPFL_BBSimplePointMoveCar::SetSteer(UBlackboardComponent* Blackboard, float NewSteer) {
}

void UBPFL_BBSimplePointMoveCar::SetShiftPos(UBlackboardComponent* Blackboard, int32 NewShiftPos) {
}

void UBPFL_BBSimplePointMoveCar::SetRunStatus(UBlackboardComponent* Blackboard, uint8 NewRunStatus) {
}

void UBPFL_BBSimplePointMoveCar::SetRPDManager(UBlackboardComponent* Blackboard, UObject* NewRPDManager) {
}

void UBPFL_BBSimplePointMoveCar::SetPrevShiftPos(UBlackboardComponent* Blackboard, int32 NewPrevShiftPos) {
}

void UBPFL_BBSimplePointMoveCar::SetCurrentRoadPointPosInfoObject(UBlackboardComponent* Blackboard, UObject* NewCurrentRoadPointPosInfoObject) {
}

void UBPFL_BBSimplePointMoveCar::SetCarStatus(UBlackboardComponent* Blackboard, UObject* CarStatus) {
}

void UBPFL_BBSimplePointMoveCar::SetBrake(UBlackboardComponent* Blackboard, float NewBrake) {
}

void UBPFL_BBSimplePointMoveCar::SetAutoDriveCarSpec(UBlackboardComponent* Blackboard, UObject* NewAutoDriveCarSpec) {
}

void UBPFL_BBSimplePointMoveCar::SetAIConfigurationParameter(UBlackboardComponent* Blackboard, UObject* NewAIConfigurationParameter) {
}

void UBPFL_BBSimplePointMoveCar::SetAccel(UBlackboardComponent* Blackboard, float NewAccel) {
}

float UBPFL_BBSimplePointMoveCar::GetVsTargetYaw(const UBlackboardComponent* Blackboard) {
    return 0.0f;
}

float UBPFL_BBSimplePointMoveCar::GetTargetSpeedKmh(const UBlackboardComponent* Blackboard) {
    return 0.0f;
}

UObject* UBPFL_BBSimplePointMoveCar::GetTargetRoadPointPosInfoObject(const UBlackboardComponent* Blackboard) {
    return NULL;
}

FVector UBPFL_BBSimplePointMoveCar::GetTargetPoint(const UBlackboardComponent* Blackboard) {
    return FVector{};
}

float UBPFL_BBSimplePointMoveCar::GetSteer(const UBlackboardComponent* Blackboard) {
    return 0.0f;
}

int32 UBPFL_BBSimplePointMoveCar::GetShiftPos(const UBlackboardComponent* Blackboard) {
    return 0;
}

uint8 UBPFL_BBSimplePointMoveCar::GetRunStatus(const UBlackboardComponent* Blackboard) {
    return 0;
}

UObject* UBPFL_BBSimplePointMoveCar::GetRPDManager(const UBlackboardComponent* Blackboard) {
    return NULL;
}

int32 UBPFL_BBSimplePointMoveCar::GetPrevShiftPos(const UBlackboardComponent* Blackboard) {
    return 0;
}

UObject* UBPFL_BBSimplePointMoveCar::GetCurrentRoadPointPosInfoObject(const UBlackboardComponent* Blackboard) {
    return NULL;
}

UObject* UBPFL_BBSimplePointMoveCar::GetCarStatus(const UBlackboardComponent* Blackboard) {
    return NULL;
}

float UBPFL_BBSimplePointMoveCar::GetBrake(const UBlackboardComponent* Blackboard) {
    return 0.0f;
}

UObject* UBPFL_BBSimplePointMoveCar::GetAutoDriveCarSpec(const UBlackboardComponent* Blackboard) {
    return NULL;
}

UObject* UBPFL_BBSimplePointMoveCar::GetAIConfigurationParameter(const UBlackboardComponent* Blackboard) {
    return NULL;
}

float UBPFL_BBSimplePointMoveCar::GetAccel(const UBlackboardComponent* Blackboard) {
    return 0.0f;
}


