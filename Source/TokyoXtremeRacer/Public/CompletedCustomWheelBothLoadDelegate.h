#pragma once
#include "CoreMinimal.h"
#include "CompletedCustomWheelBothLoadDelegate.generated.h"

class UObject;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FCompletedCustomWheelBothLoad, const UObject*, front_material, const UObject*, rear_material);

