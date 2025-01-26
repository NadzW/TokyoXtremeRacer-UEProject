#pragma once
#include "CoreMinimal.h"
#include "CompletedCustomRotorLoadDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FCompletedCustomRotorLoad, const int32, car_id, const bool, is_front);

