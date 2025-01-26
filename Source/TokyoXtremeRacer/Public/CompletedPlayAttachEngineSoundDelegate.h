#pragma once
#include "CoreMinimal.h"
#include "CompletedPlayAttachEngineSoundDelegate.generated.h"

class UAudioComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCompletedPlayAttachEngineSound, const UAudioComponent*, audio_compoment);

