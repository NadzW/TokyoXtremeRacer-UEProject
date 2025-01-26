#pragma once
#include "CoreMinimal.h"
#include "Components/SceneCaptureComponent2D.h"
#include "SceneCaptureComponentBase.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TOKYOXTREMERACER_API USceneCaptureComponentBase : public USceneCaptureComponent2D {
    GENERATED_BODY()
public:
    USceneCaptureComponentBase(const FObjectInitializer& ObjectInitializer);

};

