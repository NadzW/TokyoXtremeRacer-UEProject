#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "SOptionUsbControllerMappingParameter.generated.h"

USTRUCT(BlueprintType)
struct TOKYOXTREMERACER_API FSOptionUsbControllerMappingParameter : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Vibration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PointerSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ForceFeedBack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HandleRudderAngleAdjust;
    
    FSOptionUsbControllerMappingParameter();
};

