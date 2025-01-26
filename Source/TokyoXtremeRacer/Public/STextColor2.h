#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "STextColor2.generated.h"

USTRUCT(BlueprintType)
struct TOKYOXTREMERACER_API FSTextColor2 : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString BeginCode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString EndCode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString BeginColorCode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString EndColorCode;
    
    FSTextColor2();
};

