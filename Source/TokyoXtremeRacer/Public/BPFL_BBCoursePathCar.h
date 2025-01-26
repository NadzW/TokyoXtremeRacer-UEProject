#pragma once
#include "CoreMinimal.h"
#include "BPFL_SbBBAccessBaseLibrary.h"
#include "BPFL_BBCoursePathCar.generated.h"

class UBlackboardComponent;
class UObject;

UCLASS(Blueprintable)
class TOKYOXTREMERACER_API UBPFL_BBCoursePathCar : public UBPFL_SbBBAccessBaseLibrary {
    GENERATED_BODY()
public:
    UBPFL_BBCoursePathCar();

    UFUNCTION(BlueprintCallable)
    static void SetRPDConnectionObject(UBlackboardComponent* Blackboard, UObject* NewRPDConnectionObject);
    
    UFUNCTION(BlueprintCallable)
    static void SetRelativeDistanceOfTargetPointClosestSpline(UBlackboardComponent* Blackboard, float NewRelativeDistanceOfTargetPointClosestSpline);
    
    UFUNCTION(BlueprintCallable)
    static void SetNextTargetRPDName(UBlackboardComponent* Blackboard, const FName& NewNextTargetRPDName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UObject* GetRPDConnectionObject(const UBlackboardComponent* Blackboard);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetRelativeDistanceOfTargetPointClosestSpline(const UBlackboardComponent* Blackboard);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName GetNextTargetRPDName(const UBlackboardComponent* Blackboard);
    
};

