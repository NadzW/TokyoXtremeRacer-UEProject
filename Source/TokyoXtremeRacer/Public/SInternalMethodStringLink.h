#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "SInternalMethodStringLink.generated.h"

USTRUCT(BlueprintType)
struct TOKYOXTREMERACER_API FSInternalMethodStringLink : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DT_PathHead;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DT_PathBehind;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ST_Key;
    
    FSInternalMethodStringLink();
};

