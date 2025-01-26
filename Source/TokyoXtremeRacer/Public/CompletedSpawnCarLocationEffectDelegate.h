#pragma once
#include "CoreMinimal.h"
#include "CompletedSpawnCarLocationEffectDelegate.generated.h"

class UParticleSystemComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCompletedSpawnCarLocationEffect, const UParticleSystemComponent*, particle_system);

