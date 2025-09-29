#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ActivitiyConditionData.generated.h"

USTRUCT(BlueprintType)
struct FActivitiyConditionData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> FinishActivity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> StartActivity;
    
    TOKYOXTREMERACER_API FActivitiyConditionData();
};

