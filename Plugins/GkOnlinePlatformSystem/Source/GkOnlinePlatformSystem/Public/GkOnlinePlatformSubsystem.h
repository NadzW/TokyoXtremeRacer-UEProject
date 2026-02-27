#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EDLCPlatform.h"
#include "GKOPSCoreComponent.h"
#include "GKOPSDLCSystemInterface.h"
#include "GKOPSOwnershipInterface.h"
#include "GKOPSRankingBoardInterface.h"
#include "GKOPSUserStatsInterface.h"
#include "GkOnlinePlatformSubsystem.generated.h"

class UGKOPSOwnershipComponent;
class UGKOPSRankingBoardComponent;
class UGKOPSUserStatsComponent;
class UGkOPSDLCSystemComponent;

UCLASS(Blueprintable)
class GKONLINEPLATFORMSYSTEM_API UGkOnlinePlatformSubsystem : public UEngineSubsystem, public IGKOPSCoreComponent, public IGKOPSUserStatsInterface, public IGKOPSRankingBoardInterface, public IGKOPSOwnershipInterface, public IGKOPSDLCSystemInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGKOPSUserStatsComponent* GKOPSUserStatsComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGKOPSRankingBoardComponent* GKOPSRankingBoardComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGKOPSOwnershipComponent* GKOPSOwnershipComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGkOPSDLCSystemComponent* GkOPSDLCSystemComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDLCPlatform CurrentOnlinePlatform;
    
    UGkOnlinePlatformSubsystem();

    UFUNCTION(BlueprintCallable)
    void InitializePlatformSystem();
    

    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    bool MountDLCPath(const FString& UEMountPoint, const FString& DLCAppID, const FString& DLCPluginName) override PURE_VIRTUAL(MountDLCPath, return false;);
    
};

