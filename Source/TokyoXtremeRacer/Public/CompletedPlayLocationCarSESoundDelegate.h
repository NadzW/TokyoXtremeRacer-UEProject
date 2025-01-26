#pragma once
#include "CoreMinimal.h"
#include "CompletedPlayLocationCarSESoundDelegate.generated.h"

class UAudioComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCompletedPlayLocationCarSESound, const UAudioComponent*, audio_compoment);

