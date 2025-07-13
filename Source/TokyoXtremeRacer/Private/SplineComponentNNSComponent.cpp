#include "SplineComponentNNSComponent.h"

USplineComponentNNSComponent::USplineComponentNNSComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MarginDistance = 0.00f;
}

float USplineComponentNNSComponent::GetSegmentMargin(const USplineComponent* Spline) const {
    return 0.0f;
}

float USplineComponentNNSComponent::GetNearestKey(const USplineComponent* Spline, const FVector& Target, const TArray<float>& RangeArray, bool& bFound) const {
    return 0.0f;
}

FBox USplineComponentNNSComponent::GetBounds() const {
    return FBox{};
}

void USplineComponentNNSComponent::DumpStats() const {
}

void USplineComponentNNSComponent::ConstructFromSpline(const USplineComponent* Spline) {
}

bool USplineComponentNNSComponent::CompareDistance(const FVector& Origin, const FVector Position0, const FVector& position1) const {
    return false;
}

void USplineComponentNNSComponent::AddPosition(const FSplineComponentPoint& position) {
}


