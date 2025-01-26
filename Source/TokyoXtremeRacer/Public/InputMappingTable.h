#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EInputActionSemantic.h"
#include "InputActionMappingValue.h"
#include "InputMappingTable.generated.h"

UCLASS(Blueprintable)
class TOKYOXTREMERACER_API UInputMappingTable : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EInputActionSemantic, FInputActionMappingValue> Table;
    
    UInputMappingTable();

    UFUNCTION(BlueprintCallable)
    void SetInputActionMappingValueForInputActionSemantic(EInputActionSemantic InputActionSemantic, const FInputActionMappingValue& InputActionMappingValue);
    
};

