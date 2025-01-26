#pragma once
#include "CoreMinimal.h"
#include "Components/PoseableMeshComponent.h"
#include "MyPoseableMeshComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TOKYOXTREMERACER_API UMyPoseableMeshComponent : public UPoseableMeshComponent {
    GENERATED_BODY()
public:
    UMyPoseableMeshComponent(const FObjectInitializer& ObjectInitializer);

};

