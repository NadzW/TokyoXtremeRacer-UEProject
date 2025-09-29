#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GKOPSRankingBoardInterface.h"
#include "GKOPSRankingBoardComponent.generated.h"

UCLASS(Blueprintable)
class GKONLINEPLATFORMSYSTEM_API UGKOPSRankingBoardComponent : public UObject, public IGKOPSRankingBoardInterface {
    GENERATED_BODY()
public:
    UGKOPSRankingBoardComponent();


    // Fix for true pure virtual functions not being implemented
};

