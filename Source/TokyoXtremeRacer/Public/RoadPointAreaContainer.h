#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ERPDZoneAttribute.h"
#include "ERunArea.h"
#include "RoadPointAreaContainer.generated.h"

UCLASS(Blueprintable)
class TOKYOXTREMERACER_API URoadPointAreaContainer : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERunArea Area;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ERPDZoneAttribute> Zones;
    
    URoadPointAreaContainer();

};

