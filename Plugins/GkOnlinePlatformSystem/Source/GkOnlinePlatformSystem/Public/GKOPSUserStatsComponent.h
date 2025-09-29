#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GKOPSUserStatsInterface.h"
#include "GKOPSUserStatsComponent.generated.h"

UCLASS(Blueprintable)
class GKONLINEPLATFORMSYSTEM_API UGKOPSUserStatsComponent : public UObject, public IGKOPSUserStatsInterface {
    GENERATED_BODY()
public:
    UGKOPSUserStatsComponent();


    // Fix for true pure virtual functions not being implemented
};

