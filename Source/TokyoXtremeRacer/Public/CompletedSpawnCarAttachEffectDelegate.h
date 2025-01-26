#pragma once
#include "CoreMinimal.h"
#include "CompletedSpawnCarAttachEffectDelegate.generated.h"

class UParticleSystemComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCompletedSpawnCarAttachEffect, const UParticleSystemComponent*, particle_system);

