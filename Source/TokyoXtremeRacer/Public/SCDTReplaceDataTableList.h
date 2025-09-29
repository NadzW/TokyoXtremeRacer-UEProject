#pragma once
#include "CoreMinimal.h"
#include "SCDTReplaceDataTableList.generated.h"

class UDataTable;

USTRUCT(BlueprintType)
struct TOKYOXTREMERACER_API FSCDTReplaceDataTableList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* BaseDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* ReplaceDataTable;
    
    FSCDTReplaceDataTableList();
};

