#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "SSplitControlDataTable.generated.h"

class UCompositeDataTable;
class UDataTable;

USTRUCT(BlueprintType)
struct TOKYOXTREMERACER_API FSSplitControlDataTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Memo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCompositeDataTable* RootCompositeDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GroupId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* DataTable;
    
    FSSplitControlDataTable();
};

