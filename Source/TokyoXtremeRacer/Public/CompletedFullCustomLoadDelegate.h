#pragma once
#include "CoreMinimal.h"
#include "CompletedFullCustomLoadDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCompletedFullCustomLoad, const int32, car_id);

