#pragma once
#include "CoreMinimal.h"
#include "CompletedCustomCaliperLoadDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCompletedCustomCaliperLoad, const int32, car_id);

