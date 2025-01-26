#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ControllerModel.h"
#include "EFindResultPins.h"
#include "ControllerModelInputMappingTableAssociation.generated.h"

class UInputMappingTable;

UCLASS(Blueprintable)
class TOKYOXTREMERACER_API UControllerModelInputMappingTableAssociation : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputMappingTable* Xbox360;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputMappingTable* XBoxOne;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputMappingTable* PS4;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputMappingTable* PS5;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FControllerModel, UInputMappingTable*> Map;
    
    UControllerModelInputMappingTableAssociation();

    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void GetByControllerModel(const FControllerModel& ControllerModel, UInputMappingTable*& Preset, TEnumAsByte<EFindResultPins>& FindResult) const;
    
};

