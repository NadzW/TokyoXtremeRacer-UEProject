#pragma once
#include "CoreMinimal.h"
#include "MUU2BankElement.generated.h"

class USoundWave;

USTRUCT(BlueprintType)
struct MUU2BANK_API FMUU2BankElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundWave* WaveAsset;
    
    FMUU2BankElement();
};

