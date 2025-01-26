#pragma once
#include "CoreMinimal.h"
#include "STeamSituationInfo.generated.h"

USTRUCT(BlueprintType)
struct TOKYOXTREMERACER_API FSTeamSituationInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsCalledUnlockAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsCalledDefeatAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsHearRumors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsReadTeamRumors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsReadTeamProfile;
    
    FSTeamSituationInfo();
};

