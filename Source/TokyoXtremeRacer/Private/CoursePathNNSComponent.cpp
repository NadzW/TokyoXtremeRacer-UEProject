#include "CoursePathNNSComponent.h"

UCoursePathNNSComponent::UCoursePathNNSComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

TArray<FCoursePathPoint> UCoursePathNNSComponent::GetNearestPosition(const FVector& Current, bool bMainRoadOnly, const TArray<float>& RangeArray) const {
    return TArray<FCoursePathPoint>();
}

FBox UCoursePathNNSComponent::GetBounds() const {
    return FBox{};
}

void UCoursePathNNSComponent::DumpStats() const {
}

void UCoursePathNNSComponent::Construct() {
}

bool UCoursePathNNSComponent::CompareDistance(const FVector& Origin, const FVector Position0, const FVector& position1) const {
    return false;
}

void UCoursePathNNSComponent::AddPosition(const FCoursePathPoint& Position) {
}


