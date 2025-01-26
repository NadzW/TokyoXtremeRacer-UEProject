#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "DecalMaterialComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TOKYOXTREMERACER_API UDecalMaterialComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UDecalMaterialComponent(const FObjectInitializer& ObjectInitializer);

};

