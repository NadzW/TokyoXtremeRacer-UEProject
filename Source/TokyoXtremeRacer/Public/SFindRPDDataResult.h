#pragma once
#include "CoreMinimal.h"
#include "SFindRPDDataResult.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct TOKYOXTREMERACER_API FSFindRPDDataResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsFind;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* RPDData;
    
    FSFindRPDDataResult();
};

