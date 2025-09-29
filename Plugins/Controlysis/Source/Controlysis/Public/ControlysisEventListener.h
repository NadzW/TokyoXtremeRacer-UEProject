#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ControlysisControllerAddedDelegate.h"
#include "ControlysisControllerRemovedDelegate.h"
#include "ControlysisEventListener.generated.h"

UCLASS(Blueprintable)
class CONTROLYSIS_API UControlysisEventListener : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FControlysisControllerAdded ControllerAdded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FControlysisControllerRemoved ControllerRemoved;
    
    UControlysisEventListener();

};

