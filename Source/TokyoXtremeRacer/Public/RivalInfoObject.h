#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SRivalBattleInfo.h"
#include "SRivalBrakeSetInfo.h"
#include "SRivalInfo.h"
#include "SRivalTireSetInfo.h"
#include "SRivalWheelSetInfo.h"
#include "RivalInfoObject.generated.h"

class UDataTable;
class UTexture2D;

UCLASS(Blueprintable)
class TOKYOXTREMERACER_API URivalInfoObject : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName NameId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSRivalInfo Core;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSRivalBattleInfo Battle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* Emblem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSRivalBrakeSetInfo BrakeInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSRivalWheelSetInfo WheelInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSRivalTireSetInfo TireInfo;
    
    URivalInfoObject();

    UFUNCTION(BlueprintCallable)
    void LoadEmblem();
    
    UFUNCTION(BlueprintCallable)
    FSRivalBattleInfo GetFixBattleInfo(const UDataTable* data_table);
    
};

