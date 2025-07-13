#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ERecollectionRivalCategory.h"
#include "ERecollectionRivalType.h"
#include "SRecollectionRivalDetailInfo.h"
#include "SRecollectionRivalInfoData.generated.h"

USTRUCT(BlueprintType)
struct TOKYOXTREMERACER_API FSRecollectionRivalInfoData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERecollectionRivalCategory rival_category;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERecollectionRivalType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName rival_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName team_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FSRecollectionRivalDetailInfo> conversation_list;
    
    FSRecollectionRivalInfoData();
};

