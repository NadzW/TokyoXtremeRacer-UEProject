#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "InputUiRefreshRequestedContext.h"
#include "InputUiEventListener.generated.h"

UCLASS(Blueprintable)
class UInputUiEventListener : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FInputUiRefreshRequestedDelegate, FInputUiRefreshRequestedContext, Context);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInputUiRefreshRequestedDelegate InputUiRefreshRequestedDelegate;
    
    UInputUiEventListener();

};

