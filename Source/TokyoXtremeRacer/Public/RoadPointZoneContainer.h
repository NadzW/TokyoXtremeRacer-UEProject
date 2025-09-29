#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ERPDZoneAttribute.h"
#include "ERunArea.h"
#include "RoadPointZoneContainer.generated.h"

UCLASS(Blueprintable)
class TOKYOXTREMERACER_API URoadPointZoneContainer : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERPDZoneAttribute Zone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ERunArea> Area;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ERunArea> SecondaryArea;
    
    URoadPointZoneContainer();

};

