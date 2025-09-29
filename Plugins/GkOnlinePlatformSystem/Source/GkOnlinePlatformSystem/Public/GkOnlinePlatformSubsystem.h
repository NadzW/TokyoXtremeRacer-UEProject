#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GKOPSCoreComponent.h"
#include "GKOPSOwnershipInterface.h"
#include "GKOPSRankingBoardInterface.h"
#include "GKOPSUserStatsInterface.h"
#include "GkOnlinePlatformSubsystem.generated.h"

class UGKOPSOwnershipComponent;
class UGKOPSRankingBoardComponent;
class UGKOPSUserStatsComponent;

UCLASS(Blueprintable)
class GKONLINEPLATFORMSYSTEM_API UGkOnlinePlatformSubsystem : public UEngineSubsystem, public IGKOPSCoreComponent, public IGKOPSUserStatsInterface, public IGKOPSRankingBoardInterface, public IGKOPSOwnershipInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGKOPSUserStatsComponent* GKOPSUserStatsComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGKOPSRankingBoardComponent* GKOPSRankingBoardComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGKOPSOwnershipComponent* GKOPSOwnershipComponent;
    
    UGkOnlinePlatformSubsystem();

    UFUNCTION(BlueprintCallable)
    void InitializePlatformSystem();
    

    // Fix for true pure virtual functions not being implemented
};

