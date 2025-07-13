#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ECourseSimpleArea.h"
#include "SCarLicensePlate.h"
#include "LicensePlateGenerator.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class TOKYOXTREMERACER_API ULicensePlateGenerator : public UObject {
    GENERATED_BODY()
public:
    ULicensePlateGenerator();

    UFUNCTION(BlueprintCallable)
    FSCarLicensePlate GetNumberByLottery(const int32 in_category, const ECourseSimpleArea in_area, const FName in_number_type, const int32 in_business_use_percent, const int32 in_forced_classification_number);
    
    UFUNCTION(BlueprintCallable)
    void AddNumberLotteryRootInfo(const UDataTable* in_data_table);
    
    UFUNCTION(BlueprintCallable)
    void AddAreaRootLotteryInfo(const ECourseSimpleArea in_area, const UDataTable* in_data_table);
    
};

