#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "SParamterDataAssetSrcList.generated.h"

class UDataTable;

USTRUCT(BlueprintType)
struct TOKYOXTREMERACER_API FSParamterDataAssetSrcList : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* DataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PathBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsBodyParameter;
    
    FSParamterDataAssetSrcList();
};

