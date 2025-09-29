#pragma once
#include "CoreMinimal.h"
#include "GenericControllerId.h"
#include "ControlysisControllerRemovedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FControlysisControllerRemoved, FGenericControllerId, Controller);

