#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "NeonLightComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TOKYOXTREMERACER_API UNeonLightComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UNeonLightComponent(const FObjectInitializer& ObjectInitializer);

};

