#include "PointCloudComponent.h"

UPointCloudComponent::UPointCloudComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

int32 UPointCloudComponent::ReturnPointNumInLine(const int32 LineNumber) const {
    return 0;
}

int32 UPointCloudComponent::ReturnLineNum() const {
    return 0;
}

int32 UPointCloudComponent::ReturnCenterLine() const {
    return 0;
}

float UPointCloudComponent::GetRoadPointKeyFromLocation(const FVector Location, const int32 LineNumber) const {
    return 0.0f;
}

float UPointCloudComponent::GetRoadPointKeyFromDistance(const int32 LineIndex, const float Distance) const {
    return 0.0f;
}

FVector UPointCloudComponent::GetRoadLanePoint(const int32 LaneNumber, const int32 PointIndexInLine, const float LaneRate) const {
    return FVector{};
}

FVector UPointCloudComponent::GetPoint(const int32 LineNumber, const int32 PointIndexInLine) const {
    return FVector{};
}

FVector UPointCloudComponent::GetNearestPointRoadPointKey(const FVector Location, int32& OutPointIndex, float& OutBestDistance, bool& bSucceed, float& RoadPointKey) const {
    return FVector{};
}

FVector UPointCloudComponent::GetNearestPoint(const FVector Location, int32& OutPointIndex, float& OutBestDistance, bool& bSucceed) const {
    return FVector{};
}

FVector UPointCloudComponent::GetLocationFromRoadPointKeyAndCenterX(const float CenterX, const float RoadPointKey) const {
    return FVector{};
}

FVector UPointCloudComponent::GetLocationFromRoadPointKey(const int32 LineIndex, const float RoadPointKey) const {
    return FVector{};
}

float UPointCloudComponent::GetLineDistanceLength(const int32 LineNumber) const {
    return 0.0f;
}

FVector UPointCloudComponent::GetLaneLocationFromRoadPointKey(const int32 LaneIndex, const float RoadPointKey, const float LaneRate) const {
    return FVector{};
}

int32 UPointCloudComponent::GetLaneIndexAndRateFromLocation(float& LaneRate, const float RoadPointKey, const FVector& Location, const bool bIsClampRunnableLaneIndex) const {
    return 0;
}

float UPointCloudComponent::GetDistanceFromRoadPointKey(const int32 LineNumber, const float RoadPointKey) const {
    return 0.0f;
}

float UPointCloudComponent::GetDistanceAlongPointCloudFromLocation(const FVector& Location) const {
    return 0.0f;
}

FPointCloudAttributes UPointCloudComponent::GetAttribute(const int32 LineNumber, const int32 PointIndexInLine) const {
    return FPointCloudAttributes{};
}

void UPointCloudComponent::ComputeRoadWidth(const float RoadPointKey, float& LeftWidth, float& RightWidth) const {
}

float UPointCloudComponent::ComputeLaneOneWidth(const float RoadPointKey) {
    return 0.0f;
}

float UPointCloudComponent::ComputeCenterX(const float RoadPointKey, const FVector& Location) const {
    return 0.0f;
}

void UPointCloudComponent::AddPoint(const FVector& Location, const int32 LineNumber) {
}

void UPointCloudComponent::AddAttribute(const FPointCloudAttributes& PointAttribute, const int32 LineNumber) {
}


