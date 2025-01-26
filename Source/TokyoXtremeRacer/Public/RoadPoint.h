#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ERPDCreaseWeightAttribute.h"
#include "ERPDEnemyAttribute.h"
#include "ERPDExitAttribute.h"
#include "ERPDInfoAttribute.h"
#include "ERPDNoBattleAttribute.h"
#include "ERPDZoneAttribute.h"
#include "RoadPoint.generated.h"

USTRUCT(BlueprintType)
struct TOKYOXTREMERACER_API FRoadPoint {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 lane;
    
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
    uint8 Tunnel;
    
    FRoadPoint();
};

