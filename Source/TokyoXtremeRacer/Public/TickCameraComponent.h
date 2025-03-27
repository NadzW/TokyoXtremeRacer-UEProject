#pragma once
#include "CoreMinimal.h"
#include "Camera/CameraComponent.h"
#include "TickCameraComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TOKYOXTREMERACER_API UTickCameraComponent : public UCameraComponent {
    GENERATED_BODY()
public:
    UTickCameraComponent(const FObjectInitializer& ObjectInitializer);

};

