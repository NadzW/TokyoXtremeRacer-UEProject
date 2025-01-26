#pragma once
#include "CoreMinimal.h"
#include "CompletedCustomLoadDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCompletedCustomLoad, const int32, car_id);

