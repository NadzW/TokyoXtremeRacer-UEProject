#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "SplineComponentPoint.h"
#include "SplineComponentNNSComponent.generated.h"

class USplineComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TOKYOXTREMERACER_API USplineComponentNNSComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSplineComponentPoint> SplineComponentPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MarginDistance;
    
    USplineComponentNNSComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    float GetSegmentMargin(const USplineComponent* Spline) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    float GetNearestKey(const USplineComponent* Spline, const FVector& Target, const TArray<float>& RangeArray, bool& bFound) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FBox GetBounds() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void DumpStats() const;
    
    UFUNCTION(BlueprintCallable)
    void ConstructFromSpline(const USplineComponent* Spline);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CompareDistance(const FVector& Origin, const FVector Position0, const FVector& position1) const;
    
    UFUNCTION(BlueprintCallable)
    void AddPosition(const FSplineComponentPoint& position);
    
};

