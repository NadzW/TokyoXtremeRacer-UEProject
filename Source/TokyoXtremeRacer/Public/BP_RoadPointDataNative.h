#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BPI_RoadPointDataNative.h"
#include "BP_RoadPointDataNative.generated.h"

UCLASS(Blueprintable)
class TOKYOXTREMERACER_API ABP_RoadPointDataNative : public AActor, public IBPI_RoadPointDataNative {
    GENERATED_BODY()
public:
    ABP_RoadPointDataNative(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

