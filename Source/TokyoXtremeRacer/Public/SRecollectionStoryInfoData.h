#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ERecollectionStoryCategory.h"
#include "EStoryStage.h"
#include "SRecollectionRivalDetailInfo.h"
#include "SRecollectionStoryInfoData.generated.h"

USTRUCT(BlueprintType)
struct TOKYOXTREMERACER_API FSRecollectionStoryInfoData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERecollectionStoryCategory story_category;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStoryStage stage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText story_line;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSRecollectionRivalDetailInfo> Conversation;
    
    FSRecollectionStoryInfoData();
};

