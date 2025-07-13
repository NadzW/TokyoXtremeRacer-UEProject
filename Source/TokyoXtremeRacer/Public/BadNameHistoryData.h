#pragma once
#include "CoreMinimal.h"
#include "BadNameHistoryData.generated.h"

USTRUCT(BlueprintType)
struct TOKYOXTREMERACER_API FBadNameHistoryData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool is_new_flag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool is_selectable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool is_acquisition_flag;
    
    FBadNameHistoryData();
};

