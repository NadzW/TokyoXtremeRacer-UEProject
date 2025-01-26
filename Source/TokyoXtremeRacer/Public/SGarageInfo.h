#pragma once
#include "CoreMinimal.h"
#include "SGarageInfo.generated.h"

USTRUCT(BlueprintType)
struct TOKYOXTREMERACER_API FSGarageInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName NameId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> Ornaments;
    
    FSGarageInfo();
};

