#pragma once
#include "CoreMinimal.h"
#include "CompletedCustomWheelLoadDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCompletedCustomWheelLoad, const int32, car_id);

