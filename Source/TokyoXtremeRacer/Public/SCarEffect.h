#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "SCarEffect.generated.h"

USTRUCT(BlueprintType)
struct TOKYOXTREMERACER_API FSCarEffect : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AuraNameId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AfterFireNameId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName NitroNameId;
    
    FSCarEffect();
};

