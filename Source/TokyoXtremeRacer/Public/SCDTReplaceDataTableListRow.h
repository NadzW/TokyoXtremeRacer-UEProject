#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "SCDTReplaceDataTableListRow.generated.h"

class UCompositeDataTable;

USTRUCT(BlueprintType)
struct TOKYOXTREMERACER_API FSCDTReplaceDataTableListRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UCompositeDataTable> TargetCompositeDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString BaseDataTablePackagePath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ReplaceDataTablePackagePath;
    
    FSCDTReplaceDataTableListRow();
};

