#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MUU2BankElement.h"
#include "MUU2BankDataAsset.generated.h"

UCLASS(Blueprintable)
class MUU2BANK_API UMUU2BankDataAsset : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMUU2BankElement> Waves;
    
    UMUU2BankDataAsset();

};

