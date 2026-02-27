#pragma once
#include "CoreMinimal.h"
#include "SRPDConnectionObjectElem.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct TOKYOXTREMERACER_API FSRPDConnectionObjectElem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UObject*> RPDConnectionElements;
    
    FSRPDConnectionObjectElem();
};

