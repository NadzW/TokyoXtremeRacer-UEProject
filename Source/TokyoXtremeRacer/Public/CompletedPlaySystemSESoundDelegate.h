#pragma once
#include "CoreMinimal.h"
#include "CompletedPlaySystemSESoundDelegate.generated.h"

class UAudioComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FCompletedPlaySystemSESound, const UAudioComponent*, audio_compoment);

