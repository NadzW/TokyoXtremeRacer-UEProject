#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "PointCloudAttributes.h"
#include "PointCloudPoint.h"
#include "PointCloudComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TOKYOXTREMERACER_API UPointCloudComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> LinesDistanceLengthes0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> LinesDistanceLengthes1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> LinesDistanceLengthes2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> LinesDistanceLengthes3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> LinesDistanceLengthes4;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPointCloudPoint> PointArrayPerLines;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPointCloudAttributes> AttributesPerLines;
    
    UPointCloudComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 ReturnPointNumInLine(const int32 LineNumber) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 ReturnLineNum() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 ReturnCenterLine() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRoadPointKeyFromLocation(const FVector Location, const int32 LineNumber) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRoadPointKeyFromDistance(const int32 LineIndex, const float Distance) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetRoadLanePoint(const int32 LaneNumber, const int32 PointIndexInLine, const float LaneRate) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetPoint(const int32 LineNumber, const int32 PointIndexInLine) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetNearestPointRoadPointKey(const FVector Location, int32& OutPointIndex, float& OutBestDistance, bool& bSucceed, float& RoadPointKey) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetNearestPoint(const FVector Location, int32& OutPointIndex, float& OutBestDistance, bool& bSucceed) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetLocationFromRoadPointKeyAndCenterX(const float CenterX, const float RoadPointKey) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetLocationFromRoadPointKey(const int32 LineIndex, const float RoadPointKey) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetLineDistanceLength(const int32 LineNumber) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetLaneLocationFromRoadPointKey(const int32 LaneIndex, const float RoadPointKey, const float LaneRate) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetLaneIndexAndRateFromLocation(float& LaneRate, const float RoadPointKey, const FVector& Location, const bool bIsClampRunnableLaneIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDistanceFromRoadPointKey(const int32 LineNumber, const float RoadPointKey) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDistanceAlongPointCloudFromLocation(const FVector& Location) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FPointCloudAttributes GetAttribute(const int32 LineNumber, const int32 PointIndexInLine) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void ComputeRoadWidth(const float RoadPointKey, float& LeftWidth, float& RightWidth) const;
    
    UFUNCTION(BlueprintCallable)
    float ComputeLaneOneWidth(const float RoadPointKey);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float ComputeCenterX(const float RoadPointKey, const FVector& Location) const;
    
    UFUNCTION(BlueprintCallable)
    void AddPoint(const FVector& Location, const int32 LineNumber);
    
    UFUNCTION(BlueprintCallable)
    void AddAttribute(const FPointCloudAttributes& PointAttribute, const int32 LineNumber);
    
};

