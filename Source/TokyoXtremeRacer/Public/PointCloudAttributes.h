#pragma once
#include "CoreMinimal.h"
#include "ERPDCreaseWeightAttribute.h"
#include "ERPDEnemyAttribute.h"
#include "ERPDExitAttribute.h"
#include "ERPDInfoAttribute.h"
#include "ERPDNoBattleAttribute.h"
#include "ERPDZoneAttribute.h"
#include "PointCloudAttributes.generated.h"

USTRUCT(BlueprintType)
struct FPointCloudAttributes {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 lane;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERPDInfoAttribute Info;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERPDEnemyAttribute Enemy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERPDExitAttribute Exit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERPDZoneAttribute Zone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERPDCreaseWeightAttribute CreaseWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERPDNoBattleAttribute NoBattle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Tunnel;
    
    TOKYOXTREMERACER_API FPointCloudAttributes();
};

