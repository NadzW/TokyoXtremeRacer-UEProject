#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "WindowActivationStateChangedContext.h"
#include "WindowUtilEventListener.generated.h"

UCLASS(Blueprintable)
class UWindowUtilEventListener : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FWindowActivationStateChangedDelegate, FWindowActivationStateChangedContext, Context);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWindowActivationStateChangedDelegate WindowActivationStateChangedDelegate;
    
    UWindowUtilEventListener();

};

