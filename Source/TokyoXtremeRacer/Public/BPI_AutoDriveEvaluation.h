#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "BPI_AutoDriveEvaluation.generated.h"

class APawn;
class UBlackboardComponent;

UINTERFACE(Blueprintable, MinimalAPI)
class UBPI_AutoDriveEvaluation : public UInterface {
    GENERATED_BODY()
};

class IBPI_AutoDriveEvaluation : public IInterface {
    GENERATED_BODY()
public:
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetResultScore(float NewScore);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool InitializeEvaluation();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetResultSingleScore(FName TargetEvaluationCaseName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetResultScore() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float ExecEvaluate(APawn* TargetPawn, UBlackboardComponent* Blackboard);
    
};

