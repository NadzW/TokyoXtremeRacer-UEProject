#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MiniMapCarActor.generated.h"

UCLASS(Blueprintable)
class TOKYOXTREMERACER_API AMiniMapCarActor : public AActor {
    GENERATED_BODY()
public:
    AMiniMapCarActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateTransform(const FTransform _transform);
    
};

