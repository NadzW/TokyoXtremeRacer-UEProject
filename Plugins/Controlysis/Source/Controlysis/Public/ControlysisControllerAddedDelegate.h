#pragma once
#include "CoreMinimal.h"
#include "GenericControllerId.h"
#include "ControlysisControllerAddedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FControlysisControllerAdded, FGenericControllerId, Controller);

