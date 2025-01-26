#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "STPEvaluateScanTPResult.h"
#include "BPI_ADEvaluateObjectContainer.generated.h"

class AActor;
class UBP_TPEvaluateMethod;
class UObject;

UINTERFACE(Blueprintable, MinimalAPI)
class UBPI_ADEvaluateObjectContainer : public UInterface {
    GENERATED_BODY()
};

class IBPI_ADEvaluateObjectContainer : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ReturnIgnoreActors(TArray<AActor*>& RetIgnoreActors);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ResetIgnoreActors();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, meta=(WorldContext="WorldContextObject"))
    void ExecEvaluateObject(bool& ScanResult, const FName& Key, UObject* WorldContextObject, UObject* ConditionValues, const bool bIsLineTraceOnOthercarDetect, const bool bIsLineTraceOnWallDetect, const bool bIsForceSuceedOthercarFound, FSTPEvaluateScanTPResult& OutResult);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AddIgnoreActors(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AddEvaluateObject(const FName& Key, UBP_TPEvaluateMethod* EvaluateObject);
    
};

