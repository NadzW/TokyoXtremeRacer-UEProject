#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "SOptionKeyboardMouseMappingParameter.generated.h"

USTRUCT(BlueprintType)
struct TOKYOXTREMERACER_API FSOptionKeyboardMouseMappingParameter : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PointerSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HandleRudderAngleAdjust;
    
    FSOptionKeyboardMouseMappingParameter();
};

