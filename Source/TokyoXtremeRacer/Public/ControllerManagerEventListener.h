#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ControllerAddedEventContext.h"
#include "ControllerRemovedEventContext.h"
#include "ControllersAnyChangeEventContext.h"
#include "ControllerManagerEventListener.generated.h"

UCLASS(Blueprintable)
class TOKYOXTREMERACER_API UControllerManagerEventListener : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FControllersAnyChangeDelegate, FControllersAnyChangeEventContext, Context);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FControllerRemovedDelegate, FControllerRemovedEventContext, Context);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FControllerAddedDelegate, FControllerAddedEventContext, Context);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FControllersAnyChangeDelegate ControllersAnyChangeDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FControllerAddedDelegate ControllerAddedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FControllerRemovedDelegate ControllerRemovedDelegate;
    
    UControllerManagerEventListener();

};

