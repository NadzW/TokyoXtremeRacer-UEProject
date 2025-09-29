#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GKOPSOwnershipInterface.h"
#include "GKOPSOwnershipComponent.generated.h"

UCLASS(Blueprintable)
class GKONLINEPLATFORMSYSTEM_API UGKOPSOwnershipComponent : public UObject, public IGKOPSOwnershipInterface {
    GENERATED_BODY()
public:
    UGKOPSOwnershipComponent();


    // Fix for true pure virtual functions not being implemented
};

