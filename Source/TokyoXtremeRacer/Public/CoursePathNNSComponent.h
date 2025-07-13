#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "CoursePathPoint.h"
#include "CoursePathNNSComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TOKYOXTREMERACER_API UCoursePathNNSComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCoursePathPoint> CoursePathPoints;
    
    UCoursePathNNSComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FCoursePathPoint> GetNearestPosition(const FVector& Current, bool bMainRoadOnly, const TArray<float>& RangeArray) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FBox GetBounds() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void DumpStats() const;
    
    UFUNCTION(BlueprintCallable)
    void Construct();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CompareDistance(const FVector& Origin, const FVector Position0, const FVector& position1) const;
    
    UFUNCTION(BlueprintCallable)
    void AddPosition(const FCoursePathPoint& position);
    
};

