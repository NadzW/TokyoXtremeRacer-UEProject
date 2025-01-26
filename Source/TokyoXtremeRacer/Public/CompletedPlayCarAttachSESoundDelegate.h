#pragma once
#include "CoreMinimal.h"
#include "CompletedPlayCarAttachSESoundDelegate.generated.h"

class UAudioComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCompletedPlayCarAttachSESound, const UAudioComponent*, audio_compoment);

