#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "BPI_SbBrainComponent.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UBPI_SbBrainComponent : public UInterface {
    GENERATED_BODY()
};

class IBPI_SbBrainComponent : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsResumable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CallResumeLogic(const FString& Reason);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CallPauseLogic(const FString& Reason);
    
};

