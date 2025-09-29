#pragma once
#include "CoreMinimal.h"
#include "SManagedCDTList.generated.h"

class UCompositeDataTable;

USTRUCT(BlueprintType)
struct FSManagedCDTList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsLoaded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCompositeDataTable* CDT;
    
    TOKYOXTREMERACER_API FSManagedCDTList();
};

