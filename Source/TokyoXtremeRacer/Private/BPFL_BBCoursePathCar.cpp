#include "BPFL_BBCoursePathCar.h"

UBPFL_BBCoursePathCar::UBPFL_BBCoursePathCar() {
}

void UBPFL_BBCoursePathCar::SetRPDConnectionObject(UBlackboardComponent* Blackboard, UObject* NewRPDConnectionObject) {
}

void UBPFL_BBCoursePathCar::SetRelativeDistanceOfTargetPointClosestSpline(UBlackboardComponent* Blackboard, float NewRelativeDistanceOfTargetPointClosestSpline) {
}

void UBPFL_BBCoursePathCar::SetNextTargetRPDName(UBlackboardComponent* Blackboard, const FName& NewNextTargetRPDName) {
}

UObject* UBPFL_BBCoursePathCar::GetRPDConnectionObject(const UBlackboardComponent* Blackboard) {
    return NULL;
}

float UBPFL_BBCoursePathCar::GetRelativeDistanceOfTargetPointClosestSpline(const UBlackboardComponent* Blackboard) {
    return 0.0f;
}

FName UBPFL_BBCoursePathCar::GetNextTargetRPDName(const UBlackboardComponent* Blackboard) {
    return NAME_None;
}


