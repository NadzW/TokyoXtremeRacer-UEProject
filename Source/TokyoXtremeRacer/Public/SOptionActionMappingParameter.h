#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "SOptionActionMappingParameter.generated.h"

USTRUCT(BlueprintType)
struct TOKYOXTREMERACER_API FSOptionActionMappingParameter : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ReactionTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NeutralTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 max;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Hold;
    
    FSOptionActionMappingParameter();
};

