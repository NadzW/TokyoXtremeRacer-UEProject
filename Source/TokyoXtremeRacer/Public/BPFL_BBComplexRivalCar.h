#pragma once
#include "CoreMinimal.h"
#include "BPFL_SbBBAccessBaseLibrary.h"
#include "BPFL_BBComplexRivalCar.generated.h"

class UBlackboardComponent;
class UObject;

UCLASS(Blueprintable)
class TOKYOXTREMERACER_API UBPFL_BBComplexRivalCar : public UBPFL_SbBBAccessBaseLibrary {
    GENERATED_BODY()
public:
    UBPFL_BBComplexRivalCar();

    UFUNCTION(BlueprintCallable)
    static void SetPrevCornerInfoLoopCount(UBlackboardComponent* Blackboard, int32 NewPrevCornerInfoLoopCount);
    
    UFUNCTION(BlueprintCallable)
    static void SetPrevCornerInfo(UBlackboardComponent* Blackboard, UObject* NewPrevCornerInfo);
    
    UFUNCTION(BlueprintCallable)
    static void SetCornerInfoLoopCount(UBlackboardComponent* Blackboard, int32 NewCornerInfoLoopCount);
    
    UFUNCTION(BlueprintCallable)
    static void SetCornerInfoIndex(UBlackboardComponent* Blackboard, int32 NewCornerInfoIndex);
    
    UFUNCTION(BlueprintCallable)
    static void SetCornerInfo(UBlackboardComponent* Blackboard, UObject* NewCornerInfo);
    
    UFUNCTION(BlueprintCallable)
    static void SetbNeedUpdateRoadPair(UBlackboardComponent* Blackboard, bool NewbNeedUpdateRoadPair);
    
    UFUNCTION(BlueprintCallable)
    static void SetbIsNextCornerInfoIsNextLoop(UBlackboardComponent* Blackboard, bool NewbIsNextCornerInfoIsNextLoop);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetPrevCornerInfoLoopCount(const UBlackboardComponent* Blackboard);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UObject* GetPrevCornerInfo(const UBlackboardComponent* Blackboard);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetCornerInfoLoopCount(const UBlackboardComponent* Blackboard);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetCornerInfoIndex(const UBlackboardComponent* Blackboard);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UObject* GetCornerInfo(const UBlackboardComponent* Blackboard);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetbNeedUpdateRoadPair(const UBlackboardComponent* Blackboard);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetbIsNextCornerInfoIsNextLoop(const UBlackboardComponent* Blackboard);
    
};

